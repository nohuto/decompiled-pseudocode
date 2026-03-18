/*
 * XREFs of NtCompactKeys @ 0x1405DB720
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmCheckNoTxContext @ 0x1403DC18C (CmCheckNoTxContext.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     CmMoveKey @ 0x1405DEE58 (CmMoveKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
