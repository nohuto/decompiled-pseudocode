/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x140133E38
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x140133BCC (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140087824 (KeQueryMaximumProcessorCountEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     ExpSaBinaryArrayInsert @ 0x14013405C (ExpSaBinaryArrayInsert.c)
 *     ExpSaBinaryArrayRemove @ 0x140135540 (ExpSaBinaryArrayRemove.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  char v4; // r12
  __int64 v5; // rsi
  ULONG MaximumProcessorCount; // r13d
  POOL_TYPE v7; // ebp
  char *result; // rax
  char *v9; // rdi
  _BYTE *v10; // rax
  signed __int8 v11; // cf
  _BYTE *v12; // rbx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // r14
  int *v16; // r15
  unsigned int v17; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  PVOID PoolWithTag; // rax
  void *v20; // rbx
  char v21; // bp
  __int64 v22; // rbx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  int v25; // r8d
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-68h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-60h] BYREF
  int v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0;
  LODWORD(v5) = 0;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v7 = a2 != 0 ? PagedPool : NonPagedPoolNx;
  result = (char *)ExAllocatePoolWithTag(v7, 0x80uLL, 0x61537845u);
  v9 = result;
  if ( result )
  {
    memset(result, 0, 0x80uLL);
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 7) = v9 + 64;
    *((_QWORD *)v9 + 6) = 512LL;
    *((_QWORD *)v9 + 2) = a1;
    *((_DWORD *)v9 + 9) = 512;
    v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(
        &ExSaPageGroupDescriptorArrayLock,
        v10,
        (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
    if ( v12 )
      v12[26] |= 1u;
    v13 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v9);
    *((_DWORD *)v9 + 8) = v13;
    if ( v13 == -1 )
      goto LABEL_28;
    v14 = KeNumberProcessors_0;
    v27 = KeNumberProcessors_0;
    if ( MaximumProcessorCount )
    {
      v15 = 0LL;
      v16 = KiProcessorIndexToNumberMappingTable;
      while ( 1 )
      {
        v30 = *(_QWORD *)(v15 + ExSaPageArrays);
        if ( (unsigned int)v5 < v14 )
        {
          v17 = *v16;
          Affinity.Reserved[1] = 0;
          Affinity.Reserved[2] = 0;
          *(_DWORD *)&Affinity.Group = (unsigned __int16)(v17 >> 6);
          Affinity.Mask = 1LL << (v17 & 0x3F);
          if ( v4 )
          {
            p_PreviousAffinity = 0LL;
          }
          else
          {
            v4 = 1;
            p_PreviousAffinity = &PreviousAffinity;
          }
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        }
        PoolWithTag = ExAllocatePoolWithTag(v7, 0x1000uLL, 0x61537845u);
        v20 = PoolWithTag;
        if ( !PoolWithTag || (unsigned int)ExpSaBinaryArrayInsert(v30, PoolWithTag) == -1 )
          break;
        v14 = v27;
        LODWORD(v5) = v5 + 1;
        v15 += 8LL;
        ++v16;
        if ( (unsigned int)v5 >= MaximumProcessorCount )
          goto LABEL_16;
      }
      v21 = 0;
    }
    else
    {
LABEL_16:
      v20 = 0LL;
      v21 = 1;
    }
    if ( v4 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
    if ( !v21 )
    {
LABEL_28:
      if ( *((_DWORD *)v9 + 8) != -1 )
      {
        while ( (_DWORD)v5 )
        {
          v5 = (unsigned int)(v5 - 1);
          v22 = *(_QWORD *)(ExSaPageArrays + 8 * v5);
          v23 = *((_DWORD *)v9 + 8);
          _BitScanReverse(&v24, v23);
          v25 = 1 << v24;
          v26 = v24 - 2;
          v29 = v26;
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v22 + 8 * v26) + 8LL * (v23 ^ v25) + 8), 0);
          ExpSaBinaryArrayRemove(v22, *((unsigned int *)v9 + 8));
        }
        ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, *((unsigned int *)v9 + 8));
      }
      ExFreePoolWithTag(v9, 0);
      v9 = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
    KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
    return v9;
  }
  return result;
}
