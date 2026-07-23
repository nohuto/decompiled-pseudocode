/*
 * XREFs of IoWMIQuerySingleInstance @ 0x140547554
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x14052B10C (WmipQuerySetExecuteSI.c)
 */

NTSTATUS __stdcall IoWMIQuerySingleInstance(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v5; // ebp
  unsigned int v6; // edi
  _DWORD *PoolWithTag; // rbx
  NTSTATUS v11; // edi
  int v12; // eax
  ULONG v14; // [rsp+78h] [rbp+10h] BYREF

  v5 = *InOutBufferSize;
  v6 = (InstanceName->Length + 73) & 0xFFFFFFF8;
  PoolWithTag = OutBuffer;
  if ( !OutBuffer || v5 < v6 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x70696D57u);
    v5 = v6;
  }
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, 0x40uLL);
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[3] = 0;
  PoolWithTag[11] = 2;
  *PoolWithTag = v6;
  PoolWithTag[12] = 64;
  PoolWithTag[14] = v6;
  *((_WORD *)PoolWithTag + 32) = InstanceName->Length;
  memmove((char *)PoolWithTag + 66, InstanceName->Buffer, InstanceName->Length);
  v14 = *PoolWithTag;
  v11 = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 1u, (__int64)PoolWithTag, v5, &v14);
  if ( v11 >= 0 )
  {
    v12 = PoolWithTag[11];
    if ( (v12 & 0x100) != 0 )
    {
      v11 = -1073741637;
    }
    else
    {
      if ( (v12 & 0x20) != 0 )
      {
        *InOutBufferSize = PoolWithTag[12];
      }
      else
      {
        *InOutBufferSize = v14;
        if ( PoolWithTag == OutBuffer )
          return v11;
      }
      v11 = -1073741789;
    }
  }
  if ( PoolWithTag != OutBuffer )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
