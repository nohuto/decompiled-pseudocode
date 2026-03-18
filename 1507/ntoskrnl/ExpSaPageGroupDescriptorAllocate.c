/*
 * XREFs of ExpSaPageGroupDescriptorAllocate @ 0x14015BCDC
 * Callers:
 *     ExpSaAllocatorAllocate @ 0x14015BAD0 (ExpSaAllocatorAllocate.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpSaBinaryArrayInsert @ 0x14015BF00 (ExpSaBinaryArrayInsert.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExpSaBinaryArrayRemove @ 0x1402662C4 (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char *__fastcall ExpSaPageGroupDescriptorAllocate(__int64 a1, char a2)
{
  char v4; // r12
  __int64 v5; // rsi
  ULONG MaximumProcessorCount; // r13d
  POOL_TYPE v7; // ebp
  char *result; // rax
  char *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // r14
  int *v18; // r15
  unsigned int v19; // ecx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  PVOID PoolWithTag; // rax
  void *v22; // rbx
  char v23; // bp
  __int64 v24; // rbx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  int v27; // r8d
  __int64 v28; // rcx
  unsigned int v29; // [rsp+20h] [rbp-68h]
  struct _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-60h] BYREF
  __int64 v31; // [rsp+38h] [rbp-50h]
  int v32; // [rsp+40h] [rbp-48h]
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
    v11 = KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0LL, v10);
    v13 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
    v14 = v11;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx(
        &ExSaPageGroupDescriptorArrayLock,
        v11,
        (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
        v12);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    v15 = ExpSaBinaryArrayInsert(ExSaPageGroupDescriptorArray, v9);
    *((_DWORD *)v9 + 8) = v15;
    if ( v15 == -1 )
      goto LABEL_28;
    v16 = KeNumberProcessors_0;
    v29 = KeNumberProcessors_0;
    if ( MaximumProcessorCount )
    {
      v17 = 0LL;
      v18 = KiProcessorIndexToNumberMappingTable;
      while ( 1 )
      {
        v31 = *(_QWORD *)(v17 + ExSaPageArrays);
        if ( (unsigned int)v5 < v16 )
        {
          v19 = *v18;
          Affinity.Reserved[1] = 0;
          Affinity.Reserved[2] = 0;
          *(_DWORD *)&Affinity.Group = (unsigned __int16)(v19 >> 6);
          Affinity.Mask = 1LL << (v19 & 0x3F);
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
        v22 = PoolWithTag;
        if ( !PoolWithTag || (unsigned int)ExpSaBinaryArrayInsert(v31, PoolWithTag) == -1 )
          break;
        v16 = v29;
        LODWORD(v5) = v5 + 1;
        v17 += 8LL;
        ++v18;
        if ( (unsigned int)v5 >= MaximumProcessorCount )
          goto LABEL_16;
      }
      v23 = 0;
    }
    else
    {
LABEL_16:
      v22 = 0LL;
      v23 = 1;
    }
    if ( v4 )
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( !v23 )
    {
LABEL_28:
      if ( *((_DWORD *)v9 + 8) != -1 )
      {
        while ( (_DWORD)v5 )
        {
          v5 = (unsigned int)(v5 - 1);
          v24 = *(_QWORD *)(ExSaPageArrays + 8 * v5);
          v25 = *((_DWORD *)v9 + 8);
          _BitScanReverse(&v26, v25);
          v27 = 1 << v26;
          v28 = v26 - 2;
          v32 = v28;
          ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v24 + 8 * v28) + 8LL * (v25 ^ v27) + 8), 0);
          ExpSaBinaryArrayRemove(v24, *((unsigned int *)v9 + 8));
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
