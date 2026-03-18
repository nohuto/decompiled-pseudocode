/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x140658F4C
 * Callers:
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140263AD8 (ExTryConvertSharedToExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1404CC960 (CmpDelayDerefKeyControlBlock.c)
 *     CmpBuildVirtualReplicationStack @ 0x140657EBC (CmpBuildVirtualReplicationStack.c)
 *     CmpDestroyVirtualStack @ 0x140658334 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x140658CB4 (CmpGetVirtualStoreRoot.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(__int64 a1, _QWORD *a2)
{
  unsigned int *v2; // r14
  __int64 v3; // rsi
  __int64 (__fastcall *v5)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v6; // r15
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  int VirtualStoreRoot; // eax
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rdx
  UNICODE_STRING *p_UnicodeString; // rcx
  unsigned int v20; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h] BYREF
  unsigned int *v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  int v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+74h] [rbp-Ch]

  v25 = a2;
  v2 = 0LL;
  v27 = 0;
  v26 = 0LL;
  v3 = 0LL;
  v28 = 0;
  v5 = CmpTraceRoutine;
  v22 = 0LL;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((char *)&v26, (char *)0x20000);
    v5 = CmpTraceRoutine;
  }
  v6 = 0LL;
  v23 = 0LL;
  if ( v5 && a1 )
    v3 = a1;
  v8 = CmRealKCBToVirtualPath(a1, 0LL, &UnicodeString);
  if ( (v8 & 0x80000000) == 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(a1, (__int64)&UnicodeString, &v20, &P) >= 0 )
    {
      v13 = P;
      if ( v20 )
      {
        if ( ExTryConvertSharedToExclusiveLite(v10) )
        {
          VirtualStoreRoot = CmpGetVirtualStoreRoot(&v23, (int *)&P, (ULONG_PTR *)&v22);
          v6 = v23;
          v8 = VirtualStoreRoot;
          if ( VirtualStoreRoot < 0 )
          {
            v2 = v22;
          }
          else
          {
            v15 = (int)P;
            v16 = v23;
            v17 = (unsigned int)P;
            *v25 = v23;
            v13[4] = v22;
            v13[2] = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(v6 + 8))(v16, v17, v13 + 3);
            *((_DWORD *)v13 + 7) = v15;
            if ( v13[2] )
              v8 = CmpDoBuildVirtualStack((__int64)v13, v20, v6, a1);
            else
              v8 = -1073741670;
          }
          ExConvertExclusiveToSharedLite(&CmpRegistryLock);
        }
        else
        {
          v8 = -1073741739;
        }
      }
      else
      {
        v8 = -1073741811;
      }
      if ( v13 )
      {
        CmpDestroyVirtualStack((__int64)v13, v20, v6, v12);
        ExFreePoolWithTag(v13, 0);
      }
      if ( v2 )
        CmpDelayDerefKeyControlBlock(v2, v9, v11, v12);
    }
    else
    {
      v8 = -1073741670;
    }
    if ( CmpTraceRoutine )
    {
      p_UnicodeString = &UnicodeString;
      LOBYTE(p_UnicodeString) = 26;
      CmpTraceRoutine(p_UnicodeString, &v26, v8, 0LL, v3, &UnicodeString);
    }
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( CmpTraceRoutine )
  {
    LOBYTE(v7) = 26;
    CmpTraceRoutine(v7, &v26, v8, 0LL, v3, &UnicodeString);
  }
  return v8;
}
