/*
 * XREFs of CmLoadDifferencingKey @ 0x1404A37E0
 * Callers:
 *     NtLoadKey3 @ 0x1401B2EE8 (NtLoadKey3.c)
 *     NtLoadKeyEx @ 0x1404A378C (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x140548D6C (NtLoadKey2.c)
 *     VrpLoadDifferencingHive @ 0x140617528 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmpTraceHiveLoadStop @ 0x1404A42E0 (CmpTraceHiveLoadStop.c)
 *     CmpTraceHiveLoadStart @ 0x1404A4334 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x1404A43A8 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x1404A4444 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1404A4760 (CmCheckNoTxContext.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404A4794 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x1404A4818 (CmReleaseLoadKeyContext.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     SeTokenType @ 0x1404C4764 (SeTokenType.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8,
        void *a9,
        void *a10,
        KPROCESSOR_MODE PreviousMode)
{
  char v13; // r13
  char v14; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rdx
  void *v17; // r8
  __int64 v18; // r9
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r8d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int16 Length; // di
  wchar_t *v26; // rbx
  struct _KTHREAD *v27; // rax
  HANDLE v28; // r13
  PVOID v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  void *p_DestinationString; // rcx
  PVOID v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  int v41; // [rsp+50h] [rbp-2C8h]
  char v42; // [rsp+57h] [rbp-2C1h]
  char v43; // [rsp+58h] [rbp-2C0h]
  PVOID v44; // [rsp+68h] [rbp-2B0h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+70h] [rbp-2A8h] BYREF
  PVOID P; // [rsp+78h] [rbp-2A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-298h] BYREF
  HANDLE *v48; // [rsp+90h] [rbp-288h]
  PVOID v49; // [rsp+98h] [rbp-280h]
  PVOID v50; // [rsp+A0h] [rbp-278h]
  unsigned int v51; // [rsp+A8h] [rbp-270h]
  HANDLE v52; // [rsp+B0h] [rbp-268h] BYREF
  PVOID v53; // [rsp+B8h] [rbp-260h] BYREF
  PVOID PoolWithQuotaTag; // [rsp+C0h] [rbp-258h]
  UNICODE_STRING v55; // [rsp+C8h] [rbp-250h] BYREF
  PVOID v56; // [rsp+D8h] [rbp-240h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-238h]
  PVOID v58; // [rsp+E8h] [rbp-230h]
  _SLIST_ENTRY v59; // [rsp+F0h] [rbp-228h] BYREF
  _BYTE v60[48]; // [rsp+100h] [rbp-218h] BYREF
  void *v61; // [rsp+130h] [rbp-1E8h]
  HANDLE v62; // [rsp+138h] [rbp-1E0h]
  PVOID Token; // [rsp+140h] [rbp-1D8h] BYREF
  PVOID v64; // [rsp+148h] [rbp-1D0h] BYREF
  HANDLE v65; // [rsp+150h] [rbp-1C8h] BYREF
  __int64 v66; // [rsp+158h] [rbp-1C0h]
  void *v67; // [rsp+160h] [rbp-1B8h]
  PVOID Object; // [rsp+168h] [rbp-1B0h] BYREF
  UNICODE_STRING v69; // [rsp+170h] [rbp-1A8h]
  _QWORD v70[12]; // [rsp+180h] [rbp-198h] BYREF
  _DWORD v71[60]; // [rsp+1E0h] [rbp-138h] BYREF

  v67 = a4;
  v66 = a2;
  v51 = a3;
  Handle = a5;
  v48 = a7;
  v61 = a9;
  v62 = a10;
  *(_DWORD *)v60 = 0;
  memset(&v60[8], 0, 0x28uLL);
  P = 0LL;
  v42 = 0;
  v13 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v43 = 0;
  RtlInitUnicodeString(&v55, 0LL);
  v44 = 0LL;
  BugCheckParameter4 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v14 = 0;
  v50 = 0LL;
  PoolWithQuotaTag = 0LL;
  memset(v71, 0, 0xE8uLL);
  v49 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, (__int64)v17, v18);
    v19 = -1073741431;
LABEL_3:
    v41 = v19;
    goto LABEL_95;
  }
  v14 = 1;
  v13 = 0;
  if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 || (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
    goto LABEL_5;
  v19 = CmCheckNoTxContext();
  v41 = v19;
  if ( v19 >= 0 )
  {
    if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v19 = -1073741727;
      goto LABEL_3;
    }
    if ( (a3 & 0x810) != 0 )
    {
      if ( !v48 )
      {
LABEL_16:
        v19 = -1073741579;
        goto LABEL_3;
      }
      if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
      {
LABEL_5:
        v19 = -1073741583;
        goto LABEL_3;
      }
    }
    else
    {
      if ( v48 )
        goto LABEL_16;
      if ( Handle )
      {
        v19 = -1073741581;
        goto LABEL_3;
      }
    }
    LOBYTE(v16) = PreviousMode;
    v19 = CmpNameFromAttributes(v66, v16, &v55);
    v41 = v19;
    if ( v19 >= 0 )
    {
      if ( PreviousMode == 1 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (a3 & 0x810) != 0 )
        {
          v20 = (__int64)v48;
          if ( (unsigned __int64)v48 >= 0x7FFFFFFF0000LL )
            v20 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v20 = 0LL;
        }
      }
      *(_OWORD *)v60 = *(_OWORD *)a1;
      *(_OWORD *)&v60[16] = *(_OWORD *)(a1 + 16);
      *(_OWORD *)&v60[32] = *(_OWORD *)(a1 + 32);
      if ( (a3 & 0x10) != 0 && *(_QWORD *)&v60[8] )
      {
        v19 = -1073741585;
        v41 = -1073741585;
        goto LABEL_95;
      }
      if ( PreviousMode == 1 )
      {
        v21 = *(_QWORD *)&v60[16];
        if ( *(_QWORD *)&v60[16] >= 0x7FFFFFFF0000uLL )
          v21 = 0x7FFFFFFF0000LL;
        v22 = *(_DWORD *)v21;
        *(_DWORD *)&v69.Length = v22;
        v23 = *(_QWORD *)(v21 + 8);
        v69.Buffer = (wchar_t *)v23;
        DestinationString = v69;
        if ( (_WORD)v22 )
        {
          if ( (v23 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v24 = v23 + (unsigned __int16)v22;
          if ( v24 > 0x7FFFFFFF0000LL || v24 < v23 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
      }
      Length = DestinationString.Length;
      if ( DestinationString.Length )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, DestinationString.Length, 0x6B624D43u);
        if ( !PoolWithQuotaTag )
        {
          v19 = -1073741670;
          v41 = -1073741670;
          v13 = 0;
          goto LABEL_95;
        }
        v26 = (wchar_t *)PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, DestinationString.Buffer, Length);
        DestinationString.Length = Length;
        DestinationString.MaximumLength = Length;
        DestinationString.Buffer = v26;
        v13 = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
      }
      *(_QWORD *)&v60[16] = &DestinationString;
      *(_QWORD *)&v60[32] = 0LL;
      if ( !v67 || (v19 = CmObReferenceObjectByHandle(v67, 0, v17, PreviousMode, &v44, 0LL), v41 = v19, v19 >= 0) )
      {
        if ( !Handle
          || (v19 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL),
              v50 = Object,
              v41 = v19,
              v19 >= 0) )
        {
          if ( !v61 || (v19 = CmObReferenceObjectByHandle(v61, 0, v17, PreviousMode, &v53, 0LL), v41 = v19, v19 >= 0) )
          {
            if ( v62 )
            {
              v19 = ObReferenceObjectByHandle(v62, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
              v49 = Token;
              v41 = v19;
              if ( v19 < 0 )
                goto LABEL_95;
              if ( SeTokenType(Token) != TokenImpersonation )
              {
                v19 = -1073741656;
                goto LABEL_3;
              }
            }
            v27 = KeGetCurrentThread();
            --v27->KernelApcDisable;
            v43 = 1;
            LOBYTE(v17) = PreviousMode;
            v19 = CmConvertHandleToKernelHandle(*(_QWORD *)&v60[8], v16, v17, 131097LL, &v52);
            v41 = v19;
            if ( v19 >= 0 )
            {
              v28 = v52;
              *(_QWORD *)&v60[8] = v52;
              v29 = 0LL;
              v58 = 0LL;
              memset(v70, 0, sizeof(v70));
              *((_QWORD *)&v59.Next + 1) = &v59;
              v59.Next = &v59;
              if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
              {
                if ( v28 )
                {
                  ObReferenceObjectByHandle(v28, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v64, 0LL);
                  v29 = v64;
                  v58 = v64;
                }
                v70[10] = 2LL;
                v70[0] = v29;
                v70[1] = &DestinationString;
                v70[2] = &v55;
                LODWORD(v70[3]) = a3;
                v70[4] = v44;
                v70[5] = v50;
                LODWORD(v70[6]) = DesiredAccess;
                v70[7] = v48;
                v70[11] = v49;
                v19 = CmpCallCallBacks(0x20u, (__int64)v70, 1, 0x21u, 0LL, &v59);
                v41 = v19;
              }
              if ( v19 < 0 )
              {
                if ( v19 == -1073740541 )
                {
                  v19 = 0;
                  v41 = 0;
                  v42 = 1;
                }
                v13 = 0;
              }
              else
              {
                CmpTraceHiveLoadStart(&v55, a3);
                v13 = 1;
                if ( (a3 & 0x10) != 0 )
                {
                  ExReleaseRundownProtection(&CmpShutdownRundown);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v31, v32, v33);
                  v14 = 0;
                  v30 = CmLoadAppKey(
                          v60,
                          &v55,
                          a3,
                          (__int64)v44,
                          (struct _KEVENT *)v50,
                          (POBJECT_HANDLE_INFORMATION)v49,
                          PreviousMode,
                          (__int64 *)&P,
                          (__int64 *)&BugCheckParameter4);
                  v29 = v58;
                }
                else
                {
                  v30 = CmLoadKey(v60, &v55, a3, v44, v53, v50, v49, PreviousMode, &P, &BugCheckParameter4);
                }
                v19 = CmPostCallbackNotification(33, (__int64)v29, v30, (__int64)v70, &v59);
                v41 = v19;
              }
              if ( v29 )
                ObfDereferenceObject(v29);
              if ( v44 )
              {
                ObfDereferenceObject(v44);
                v44 = 0LL;
              }
              if ( v19 >= 0 && (a3 & 0x810) != 0 && !v42 )
              {
                v56 = 0LL;
                v34 = v71[0];
                if ( (a3 & 0x10) != 0 )
                  v34 = 64;
                v71[0] = v34;
                p_DestinationString = &DestinationString;
                if ( P )
                  p_DestinationString = P;
                P = p_DestinationString;
                v19 = ObReferenceObjectByName(
                        (__int64)p_DestinationString,
                        64LL,
                        0LL,
                        0,
                        (__int64)CmKeyObjectType,
                        0,
                        (__int64)v71,
                        &v56);
                v41 = v19;
                if ( v19 >= 0 )
                {
                  v36 = v56;
                  ObDeleteCapturedInsertInfo(v56);
                  v19 = ObOpenObjectByPointer(
                          v36,
                          0x40u,
                          0LL,
                          DesiredAccess,
                          (POBJECT_TYPE)CmKeyObjectType,
                          PreviousMode,
                          &v65);
                  v41 = v19;
                  ObfDereferenceObject(v36);
                  if ( v19 >= 0 )
                    *v48 = v65;
                }
                if ( BugCheckParameter4 )
                {
                  if ( (a3 & 0x10) != 0 )
                    CmReleaseLoadKeyContext(BugCheckParameter4);
                  else
                    CmpDereferenceKeyControlBlock(BugCheckParameter4);
                  BugCheckParameter4 = 0LL;
                }
                if ( v19 < 0 && (a3 & 0x800) != 0 )
                {
                  v19 = 0;
                  v41 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_95:
  if ( BugCheckParameter4 )
    CmReleaseLoadKeyContext(BugCheckParameter4);
  if ( P && P != &DestinationString )
    CmpFreeTransientPoolWithTag(P, 0x624E4D43u);
  if ( v52 )
    ZwClose(v52);
  if ( v43 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, (__int64)v17, v18);
    v19 = v41;
  }
  if ( v49 )
    ObfDereferenceObject(v49);
  if ( v53 )
    ObfDereferenceObject(v53);
  if ( v50 )
    ObfDereferenceObject(v50);
  if ( v44 )
    ObfDereferenceObject(v44);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v55.Buffer )
    ExFreePoolWithTag(v55.Buffer, 0);
  CmpCleanupParseContext((__int64)v71, 0);
  if ( v14 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v37, v38, v39);
    v19 = v41;
  }
  if ( v13 )
    CmpTraceHiveLoadStop((unsigned int)v19);
  return (unsigned int)v19;
}
