/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x1405E29D0
 * Callers:
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140213DB0 (ExTryConvertSharedToExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404B3E98 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404B3F04 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpBuildVirtualReplicationStack @ 0x1405E1DAC (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x1405E214C (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x1405E22EC (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x1405E2874 (CmpGetVirtualStoreRoot.c)
 *     CmpCopySaclToVirtualKey @ 0x1405E2E88 (CmpCopySaclToVirtualKey.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(__int64 a1, ULONG_PTR *a2)
{
  __int64 v2; // r15
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  ULONG_PTR v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r13
  int v8; // ebx
  UNICODE_STRING *v9; // rcx
  unsigned int v10; // eax
  _QWORD *v11; // r14
  int VirtualStoreRoot; // eax
  int v13; // ebx
  ULONG_PTR v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int16 v17; // ax
  UNICODE_STRING *p_UnicodeString; // rcx
  unsigned int v20; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  int v22; // [rsp+40h] [rbp-40h] BYREF
  int v23; // [rsp+44h] [rbp-3Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR *v26; // [rsp+60h] [rbp-20h]
  int v27; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+6Ch] [rbp-14h]
  int v29; // [rsp+74h] [rbp-Ch]

  v27 = 0;
  v23 = -1;
  v2 = 0LL;
  v22 = -1;
  v26 = a2;
  v28 = 0LL;
  v29 = 0;
  v4 = CmpTraceRoutine;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v27, (char *)0x20000);
    v4 = CmpTraceRoutine;
  }
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( v4 && a1 )
    v2 = a1;
  v8 = CmRealKCBToVirtualPath(a1, 0LL, &UnicodeString);
  if ( v8 >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&UnicodeString, &v20, &P) >= 0 )
    {
      v10 = v20;
      v11 = P;
      if ( v20 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(&BugCheckParameter2, &P);
        v5 = BugCheckParameter2;
        v8 = VirtualStoreRoot;
        if ( VirtualStoreRoot >= 0 )
        {
          v13 = (int)P;
          v14 = BugCheckParameter2;
          v15 = (unsigned int)P;
          *v26 = BugCheckParameter2;
          v11[2] = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD *))(v5 + 8))(v14, v15, v11 + 3);
          *((_DWORD *)v11 + 7) = v13;
          if ( v11[2] )
          {
            if ( ExTryConvertSharedToExclusiveLite() )
            {
              v8 = CmpDoBuildVirtualStack((__int64)v11, v20, v5);
              LODWORD(P) = v11[5 * v20 - 1];
              if ( v8 >= 0 )
              {
                if ( HvpMarkCellDirty(*(_QWORD *)(a1 + 32), *(unsigned int *)(a1 + 40), 0)
                  && (v16 = (unsigned int)P, HvpMarkCellDirty(v5, (unsigned int)P, 0)) )
                {
                  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
                         *(_QWORD *)(a1 + 32),
                         *(unsigned int *)(a1 + 40),
                         &v23);
                  if ( v6 && (v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v5 + 8))(v5, v16, &v22)) != 0 )
                  {
                    CmpLockTwoSecurityCachesExclusiveShared(v5, *(_QWORD *)(a1 + 32));
                    v8 = CmpCopySaclToVirtualKey(*(_QWORD *)(a1 + 32), v6, v5, v7, v16);
                    CmpUnlockTwoSecurityCaches(v5, *(_QWORD *)(a1 + 32));
                    if ( v8 >= 0 )
                    {
                      v17 = *(_WORD *)(v7 + 2);
                      if ( (v17 & 0x100) == 0 )
                        *(_WORD *)(v7 + 2) = v17 | 0x100;
                      *(_WORD *)(a1 + 186) |= 0x80u;
                      *(_WORD *)(v6 + 2) |= 0x80u;
                    }
                  }
                  else
                  {
                    v8 = -1073741670;
                  }
                }
                else
                {
                  v8 = -1073741443;
                }
              }
              ExConvertExclusiveToSharedLite(&CmpRegistryLock);
              if ( v6 )
                (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v23);
              if ( v7 )
                (*(void (__fastcall **)(ULONG_PTR, int *))(v5 + 16))(v5, &v22);
            }
            else
            {
              v8 = -1073741739;
            }
          }
          else
          {
            v8 = -1073741670;
          }
        }
        v10 = v20;
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v11 )
      {
        CmpDestroyVirtualStack((__int64)v11, v10, v5);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      v8 = -1073741670;
    }
    if ( CmpTraceRoutine )
    {
      p_UnicodeString = &UnicodeString;
      LOBYTE(p_UnicodeString) = 26;
      CmpTraceRoutine(p_UnicodeString, &v27, (unsigned int)v8, 0LL, v2, &UnicodeString);
    }
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( CmpTraceRoutine )
  {
    v9 = &UnicodeString;
    LOBYTE(v9) = 26;
    CmpTraceRoutine(v9, &v27, (unsigned int)v8, 0LL, v2, &UnicodeString);
  }
  return (unsigned int)v8;
}
