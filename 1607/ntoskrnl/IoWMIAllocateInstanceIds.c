/*
 * XREFs of IoWMIAllocateInstanceIds @ 0x14069C98C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIAllocateInstanceIds(LPCGUID Guid, ULONG InstanceCount, ULONG *FirstInstanceId)
{
  _QWORD *v3; // rdi
  _QWORD *v8; // rdx
  unsigned int v9; // r9d
  _QWORD *v10; // rcx
  __int64 v11; // r8
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  GUID v14; // xmm0

  v3 = 0LL;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v8 = (_QWORD *)WmipInstIdChunkHead;
LABEL_11:
  if ( v8 )
  {
    v9 = 0;
    v10 = v8 + 1;
    while ( *((_DWORD *)v10 + 4) != -1 )
    {
      v11 = *(_QWORD *)&Guid->Data1 - *v10;
      if ( *(_QWORD *)&Guid->Data1 == *v10 )
        v11 = *(_QWORD *)Guid->Data4 - v10[1];
      if ( !v11 )
      {
        *FirstInstanceId = *((_DWORD *)v10 + 4);
        *((_DWORD *)v10 + 4) += InstanceCount;
        KeReleaseMutex(&WmipSMMutex, 0);
        return 0;
      }
      ++v9;
      v10 = (_QWORD *)((char *)v10 + 20);
      if ( v9 >= 8 )
      {
        v3 = v8;
        v8 = (_QWORD *)*v8;
        goto LABEL_11;
      }
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x69696D57u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      KeReleaseMutex(&WmipSMMutex, 0);
      return -1073741670;
    }
    memset(PoolWithTag, 255, 0xA8uLL);
    *v13 = 0LL;
    if ( v3 )
      *v3 = v13;
    else
      WmipInstIdChunkHead = (__int64)v13;
    v10 = v13 + 1;
  }
  v14 = *Guid;
  *((_DWORD *)v10 + 4) = InstanceCount;
  *(GUID *)v10 = v14;
  KeReleaseMutex(&WmipSMMutex, 0);
  *FirstInstanceId = 0;
  return 0;
}
