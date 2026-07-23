/*
 * XREFs of NtCompactKeys @ 0x1405F94B4
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 *     CmpLogUnsupportedOperation @ 0x14060BDC0 (CmpLogUnsupportedOperation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCompactKeys(ULONG Count, PHANDLE KeyArray)
{
  __int64 v3; // rdi
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // r13
  SIZE_T v6; // r12
  PVOID PoolWithQuotaTag; // r14
  void *v8; // r8
  __int64 v9; // rsi
  void **v10; // r15
  NTSTATUS v11; // ebx
  __int64 v12; // rsi
  unsigned int v13; // r12d
  __int64 *v14; // r15
  __int64 v15; // rcx
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
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v6, 0x61624D43u);
          if ( PoolWithQuotaTag )
          {
            if ( PreviousMode == 1 && (_DWORD)v6 )
            {
              if ( ((unsigned __int8)KeyArray & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( (unsigned __int64)KeyArray + v6 > 0x7FFFFFFF0000LL || (PHANDLE)((char *)KeyArray + v6) < KeyArray )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            memmove(PoolWithQuotaTag, KeyArray, (unsigned int)v6);
            v9 = 0LL;
            v10 = (void **)PoolWithQuotaTag;
            do
            {
              v11 = CmObReferenceObjectByHandle(*v10, 0x20006u, v8, PreviousMode, (PVOID *)PoolWithQuotaTag + v9, 0LL);
              if ( v11 < 0 )
              {
                v3 = (unsigned int)v9;
                goto LABEL_42;
              }
              v9 = (unsigned int)(v9 + 1);
              ++v10;
            }
            while ( (unsigned int)v9 < (unsigned int)v3 );
            v12 = 0LL;
            CmpLockRegistryExclusive();
            v13 = 0;
            v14 = (__int64 *)PoolWithQuotaTag;
            do
            {
              if ( CmpIsKeyDeletedForKeyBody(*v14, 0LL) )
              {
                v11 = -1073741444;
                goto LABEL_41;
              }
              v15 = *(_QWORD *)(*v14 + 8);
              if ( v13 )
              {
                if ( v12 != *(_QWORD *)(v15 + 24) )
                {
                  v11 = -1073741811;
                  goto LABEL_41;
                }
              }
              else
              {
                v12 = *(_QWORD *)(v15 + 24);
              }
              if ( *(_WORD *)(v15 + 58) )
              {
                CmpLogUnsupportedOperation(7LL);
                v11 = -1073741822;
                goto LABEL_41;
              }
              ++v13;
              ++v14;
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
LABEL_41:
            CmpUnlockRegistry();
LABEL_42:
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
