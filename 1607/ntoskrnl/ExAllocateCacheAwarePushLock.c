/*
 * XREFs of ExAllocateCacheAwarePushLock @ 0x140111768
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ExAllocateCacheAwarePushLock(char a1)
{
  POOL_TYPE v1; // esi
  __int64 v2; // rbx
  _QWORD *PoolWithTag; // rdi
  char *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r14
  unsigned int v8; // eax
  int *v9; // r13
  char v10; // r15
  __int64 v11; // rbp
  _QWORD *i; // r12
  unsigned int v13; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  _BYTE *v15; // rax
  PVOID *v16; // rsi
  unsigned int v17; // [rsp+20h] [rbp-58h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-50h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-40h] BYREF

  v1 = (a1 & 1) != 0 ? NonPagedPoolNx : PagedPool;
  v2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(v1, 0x100uLL, 0x70636C50u);
  if ( !PoolWithTag )
    return PoolWithTag;
  if ( KeNumberNodes == 1 )
  {
    v4 = (char *)ExAllocatePoolWithTag(v1, 0x1000uLL, 0x6C636C50u);
    v5 = PoolWithTag;
    if ( !v4 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (_QWORD *)v2;
    }
    v6 = 32LL;
    do
    {
      v4[8] = 1;
      *((_QWORD *)v4 + 2) = PoolWithTag;
      *(_QWORD *)v4 = 0LL;
      *v5 = v4;
      v4 += 128;
      ++v5;
      --v6;
    }
    while ( v6 );
    return PoolWithTag;
  }
  v8 = KeNumberProcessors_0;
  v9 = KiProcessorIndexToNumberMappingTable;
  v17 = KeNumberProcessors_0;
  v10 = 0;
  v11 = 0LL;
  for ( i = PoolWithTag; ; ++i )
  {
    if ( (unsigned int)v11 < v8 )
    {
      v13 = *v9;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v13 >> 6);
      Affinity.Mask = 1LL << (v13 & 0x3F);
      if ( v10 )
      {
        p_PreviousAffinity = 0LL;
      }
      else
      {
        v10 = 1;
        p_PreviousAffinity = &PreviousAffinity;
      }
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
    }
    v15 = ExAllocatePoolWithTag(v1, 0x80uLL, 0x6C636C50u);
    if ( !v15 )
      break;
    v15[8] = 0;
    v11 = (unsigned int)(v11 + 1);
    *((_QWORD *)v15 + 2) = PoolWithTag;
    ++v9;
    *(_QWORD *)v15 = 0LL;
    *i = v15;
    v8 = v17;
    if ( (unsigned int)v11 >= 0x20 )
    {
      if ( v10 )
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      return PoolWithTag;
    }
  }
  if ( (_DWORD)v11 )
  {
    v16 = (PVOID *)PoolWithTag;
    do
    {
      ExFreePoolWithTag(*v16++, 0);
      --v11;
    }
    while ( v11 );
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( v10 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return (_QWORD *)v2;
}
