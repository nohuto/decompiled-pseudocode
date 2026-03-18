/*
 * XREFs of NtCompactKeys @ 0x14064FE10
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmCheckNoTxContext @ 0x140445960 (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmMoveKey @ 0x140654448 (CmMoveKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCompactKeys(ULONG Count, PHANDLE KeyArray)
{
  __int64 v3; // rdi
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // r13
  SIZE_T v6; // r12
  char *PoolWithQuotaTag; // r14
  void *v8; // r8
  __int64 v9; // rsi
  void **v10; // r15
  NTSTATUS v11; // ebx
  __int64 v12; // rsi
  unsigned int v13; // ecx
  char *v14; // r8
  __int64 v15; // rdx
  bool v16; // zf
  unsigned int v17; // eax
  _QWORD *v18; // r15
  __int64 v19; // r12
  int v20; // eax
  PVOID *v21; // rsi

  v3 = Count;
  result = CmCheckNoTxContext();
  if ( result >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      if ( (_DWORD)v3 )
      {
        if ( (unsigned int)v3 < 0x1FFFFFFF )
        {
          v6 = (unsigned int)(8 * v3);
          PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v6, 0x61624D43u);
          if ( PoolWithQuotaTag )
          {
            if ( PreviousMode == 1 && (_DWORD)v6 )
            {
              if ( ((unsigned __int8)KeyArray & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)KeyArray + v6 > MmUserProbeAddress || (PHANDLE)((char *)KeyArray + v6) < KeyArray )
                *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(PoolWithQuotaTag, KeyArray, (unsigned int)v6);
            v9 = 0LL;
            v10 = (void **)PoolWithQuotaTag;
            do
            {
              v11 = CmObReferenceObjectByHandle(
                      *v10,
                      0x20006u,
                      v8,
                      PreviousMode,
                      (PVOID *)&PoolWithQuotaTag[8 * v9],
                      0LL);
              if ( v11 < 0 )
              {
                v3 = (unsigned int)v9;
                goto LABEL_40;
              }
              v9 = (unsigned int)(v9 + 1);
              ++v10;
            }
            while ( (unsigned int)v9 < (unsigned int)v3 );
            v12 = 0LL;
            CmpLockRegistryExclusive();
            v13 = 0;
            v14 = PoolWithQuotaTag;
            do
            {
              v15 = *(_QWORD *)(*(_QWORD *)v14 + 8LL);
              if ( (*(_DWORD *)(v15 + 4) & 0x20000) != 0 )
              {
                v11 = -1073741444;
                goto LABEL_39;
              }
              if ( v13 )
              {
                if ( v12 != *(_QWORD *)(v15 + 32) )
                {
                  v11 = -1073741811;
                  goto LABEL_39;
                }
              }
              else
              {
                v12 = *(_QWORD *)(v15 + 32);
              }
              ++v13;
              v14 += 8;
            }
            while ( v13 < (unsigned int)v3 );
            *(_BYTE *)(v12 + 4168) = 1;
            v16 = ((*(_DWORD *)(v12 + 1400) + 4096) & 0xFFFC0000) == 0;
            v17 = (*(_DWORD *)(v12 + 1400) + 4096) & 0xFFFC0000;
            *(_DWORD *)(v12 + 4172) = v17;
            if ( !v16 )
              *(_DWORD *)(v12 + 4172) = v17 - 4096;
            v18 = PoolWithQuotaTag;
            v19 = v3;
            do
            {
              v20 = CmMoveKey(*v18);
              if ( v20 < 0 && v11 >= 0 )
                v11 = v20;
              ++v18;
              --v19;
            }
            while ( v19 );
            *(_BYTE *)(v12 + 4168) = 0;
            *(_DWORD *)(v12 + 4172) = 0;
LABEL_39:
            CmpUnlockRegistry();
LABEL_40:
            if ( (_DWORD)v3 )
            {
              v21 = (PVOID *)PoolWithQuotaTag;
              do
              {
                ObfDereferenceObject(*v21++);
                --v3;
              }
              while ( v3 );
            }
            ExFreePoolWithTag(PoolWithQuotaTag, 0);
            return v11;
          }
          else
          {
            return -1073741670;
          }
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return -1073741727;
    }
  }
  return result;
}
