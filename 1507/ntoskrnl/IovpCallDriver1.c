/*
 * XREFs of IovpCallDriver1 @ 0x14073F69C
 * Callers:
 *     VfBeforeCallDriver @ 0x1407410A4 (VfBeforeCallDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     MdlInvariantPreProcessing1 @ 0x14025AC9C (MdlInvariantPreProcessing1.c)
 *     VfRandomGetNumber @ 0x140737648 (VfRandomGetNumber.c)
 *     IovpAdvanceStackDownwards @ 0x14073F52C (IovpAdvanceStackDownwards.c)
 *     IovpExamineDevObjForwarding @ 0x140740A0C (IovpExamineDevObjForwarding.c)
 *     IovpExamineIrpStackForwarding @ 0x140740A9C (IovpExamineIrpStackForwarding.c)
 *     VfGetPristineDispatchRoutine @ 0x140740D70 (VfGetPristineDispatchRoutine.c)
 *     VfPendingFinishLogging @ 0x1407426CC (VfPendingFinishLogging.c)
 *     VfPendingStartLogging @ 0x14074292C (VfPendingStartLogging.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140742EEC (VfDevObjMarkDeviceRemoved.c)
 *     IovUtilGetBottomDeviceObject @ 0x1407437CC (IovUtilGetBottomDeviceObject.c)
 *     IovUtilGetLowerDeviceObject @ 0x140743824 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1407438BC (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsInFdoStack @ 0x140743908 (IovUtilIsInFdoStack.c)
 *     VfMajorIsNewRequest @ 0x140743CF4 (VfMajorIsNewRequest.c)
 *     VfMajorVerifyIrpStackDownward @ 0x140743F58 (VfMajorVerifyIrpStackDownward.c)
 *     VfMajorVerifyNewIrp @ 0x1407440D8 (VfMajorVerifyNewIrp.c)
 *     VfMajorVerifyNewRequest @ 0x14074417C (VfMajorVerifyNewRequest.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfTargetDriversIsEnabled @ 0x140745810 (VfTargetDriversIsEnabled.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14074AAB0 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCallDriver @ 0x14074AFA4 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x14074BA70 (IovpSessionDataCreate.c)
 *     IovpSessionDataReference @ 0x14074BBE0 (IovpSessionDataReference.c)
 *     VfPacketCreateAndLock @ 0x14074BBF4 (VfPacketCreateAndLock.c)
 *     VfIrpLogRecordEvent @ 0x14074E138 (VfIrpLogRecordEvent.c)
 */

__int64 __fastcall IovpCallDriver1(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r14
  unsigned int v8; // r12d
  unsigned __int64 v9; // rcx
  unsigned __int8 *v10; // r13
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rcx
  PVOID v18; // rdi
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  void *BottomDeviceObject; // rdi
  int v23; // r8d
  int v24; // eax
  __int64 v25; // rdi
  _QWORD *v26; // rbx
  void *LowerDeviceObject; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  void *v31; // rax
  char v32; // al
  int v33; // [rsp+48h] [rbp-C0h]
  const void *v34; // [rsp+50h] [rbp-B8h]
  int IsNewRequest; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object; // [rsp+78h] [rbp-90h]
  __int64 started; // [rsp+80h] [rbp-88h]
  __int64 v41; // [rsp+88h] [rbp-80h] BYREF
  char pszDest[64]; // [rsp+98h] [rbp-70h] BYREF
  CHAR Format[64]; // [rsp+D8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 168);
  CurrentIrql = KeGetCurrentIrql();
  result = *(_DWORD *)(v2 + 16) & 0xC0000000;
  if ( (*(_DWORD *)(v2 + 16) & 0xC0000000) != 0 )
  {
    if ( (_DWORD)result != 0x40000000 )
      return result;
    result = VfIrpDatabaseEntryFindAndLock(*(_QWORD *)(a1 + 168));
    v7 = result;
  }
  else
  {
    result = VfIrpDatabaseEntryFindAndLock(*(_QWORD *)(a1 + 168));
    v7 = result;
    if ( result || (result = VfPacketCreateAndLock(v2), (v7 = result) != 0) )
      *(_DWORD *)(v2 + 16) |= 0x40000000u;
    else
      *(_DWORD *)(v2 + 16) |= 0x80000000;
  }
  if ( v7 )
  {
    *(_BYTE *)(v7 + 61) = CurrentIrql;
    *(_BYTE *)(v7 + 60) = CurrentIrql;
    v8 = 0;
    v9 = *(_QWORD *)(a1 + 176);
    v10 = (unsigned __int8 *)(*(_QWORD *)(v2 + 184) - 72LL);
    v16 = (*(_DWORD *)(v7 + 232) & 0x200) == 0;
    started = 0LL;
    v34 = (const void *)v9;
    if ( v16
      || CurrentIrql >= 2u
      || *(_QWORD *)(v7 + 216)
      || ViDriverKernelBase && v9 >= ViDriverKernelBase && v9 < ViDriverKernelEnd
      || !(unsigned int)VfTargetDriversIsEnabled()
      || (*(_DWORD *)(v2 + 16) & 0xC0) != 0
      || *(_BYTE *)(v2 + 65)
      || (unsigned int)VfRandomGetNumber(0, 0x64u) >= ViPendingProbability )
    {
LABEL_37:
      v17 = *(_QWORD *)(v7 + 240);
      v18 = *(PVOID *)(a1 + 160);
      v36 = v17;
      Object = v18;
      if ( v17 || (v19 = *(_DWORD *)(v7 + 56), (v19 & 1) != 0) )
      {
        v20 = 0;
        v33 = 0;
      }
      else
      {
        v33 = 1;
        *(_DWORD *)(v7 + 56) = v19 | 1;
        v17 = IovpSessionDataCreate(v18, v7, v8);
        v36 = v17;
        v20 = 1;
      }
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 16) = v7;
      if ( v17 )
      {
        v21 = MEMORY[0xFFFFF78000000014];
        if ( v20 )
        {
          BottomDeviceObject = (void *)IovUtilGetBottomDeviceObject(v18);
          VfIrpLogRecordEvent(*(unsigned int *)(v7 + 232), BottomDeviceObject, v2);
          ObfDereferenceObject(BottomDeviceObject);
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 20));
          ++*(_DWORD *)(v7 + 24);
          IovpSessionDataReference(v36);
          v18 = Object;
        }
        if ( *(_QWORD *)(v2 + 104) )
        {
          ViErrorDisplayDescription(515LL, v5, v6);
          if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v34, (const void *)v2) >= 0 )
            VfUtilDbgPrint(pszDest);
          ViErrorFinishReport(515LL, v34, v2, 0LL);
          *(_QWORD *)(v2 + 104) = 0LL;
        }
        if ( (*(_DWORD *)(v7 + 56) & 0x10) != 0 )
        {
          ViErrorDisplayDescription(517LL, v5, v6);
          if ( RtlStringCbPrintfA(Format, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v34, (const void *)v2) >= 0 )
            VfUtilDbgPrint(Format);
          ViErrorFinishReport(517LL, v34, v2, 0LL);
        }
        if ( *(_BYTE *)(v2 + 67) <= *(_BYTE *)(v2 + 66)
          && (unsigned __int8)(*v10 - 3) <= 1u
          && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
          && (MmVerifierData & 0x6000) != 0 )
        {
          MdlInvariantPreProcessing1(a1, v7, (__int64)v10);
        }
        *(_DWORD *)(v36 + 56) = IovpExamineDevObjForwarding(v18, *(_QWORD *)(v36 + 48));
        IovpExamineIrpStackForwarding(v7, v33, v23, v2, (__int64)v34, (__int64)v10, (__int64)&v37, (__int64)&v38);
        if ( v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v7 + 20));
          ++*(_DWORD *)(v7 + 24);
          *(_QWORD *)(v7 + 216) = v10;
          started = VfPendingStartLogging(v2);
        }
        IsNewRequest = VfMajorIsNewRequest(v37, v10);
        v24 = IovpAdvanceStackDownwards(v36 + 80, *(_BYTE *)(v2 + 67), (__int64)v10, v37, v38, IsNewRequest, 1, &v41);
        v25 = v41;
        *(_QWORD *)(v41 + 48) = v21;
        if ( !v24 )
        {
          *(_DWORD *)(a1 + 24) |= 0x4000000u;
          *(_QWORD *)(a1 + 40) = a1 + 32;
          *(_QWORD *)(a1 + 32) = a1 + 32;
          *(_QWORD *)(v25 + 56) = v21;
          v25 = v41;
          *(_QWORD *)(v41 + 112) = KeGetCurrentThread();
          if ( IsNewRequest )
          {
            *(_OWORD *)(v25 + 80) = *(_OWORD *)(v2 + 48);
            *(_OWORD *)(v25 + 96) = *(_OWORD *)(v2 + 48);
            if ( v33 )
              *(_DWORD *)(v25 + 4) |= 0x8000000u;
          }
        }
        v26 = Object;
        LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(Object);
        if ( LowerDeviceObject )
          ObfDereferenceObject(LowerDeviceObject);
        else
          *(_DWORD *)(v25 + 4) |= 0x10000000u;
        *(_QWORD *)(v25 + 40) = VfGetPristineDispatchRoutine(v26[1], *v10);
        v28 = a1 + 32;
        *(_DWORD *)(v25 + 4) &= ~0x40000000u;
        v29 = *(_QWORD *)(v25 + 16);
        *(_QWORD *)(a1 + 32) = v29;
        *(_QWORD *)(a1 + 40) = v25 + 16;
        if ( *(_QWORD *)(v29 + 8) != v25 + 16 )
          __fastfail(3u);
        *(_QWORD *)(v29 + 8) = v28;
        *(_QWORD *)(v25 + 16) = v28;
        *(_QWORD *)(a1 + 8) = v25;
        *(_QWORD *)(a1 + 72) = v2;
        v30 = *(_QWORD *)(v2 + 184);
        *(_OWORD *)(a1 + 80) = *(_OWORD *)(v30 - 72);
        *(_OWORD *)(a1 + 96) = *(_OWORD *)(v30 - 56);
        *(_OWORD *)(a1 + 112) = *(_OWORD *)(v30 - 40);
        *(_OWORD *)(a1 + 128) = *(_OWORD *)(v30 - 24);
        *(_QWORD *)(a1 + 144) = *(_QWORD *)(v30 - 8);
        if ( (v10[3] & 1) != 0 )
          *(_DWORD *)(a1 + 24) |= 0x1000000u;
        if ( *v10 == 27 && v10[1] == 2 )
        {
          *(_DWORD *)(a1 + 24) |= 0x20000000u;
          v31 = (void *)IovUtilGetBottomDeviceObject(v26);
          *(_QWORD *)(a1 + 64) = v31;
          ObfDereferenceObject(v31);
          if ( (unsigned int)IovUtilIsInFdoStack(v26) && !(unsigned int)IovUtilIsDeviceObjectMarked(v26, 3LL) )
            *(_DWORD *)(a1 + 24) |= 0x10000000u;
          VfDevObjMarkDeviceRemoved(v26);
        }
        if ( v33 )
          VfMajorVerifyNewIrp(v7, v2, (_DWORD)v10, v25, (__int64)v34);
        if ( IsNewRequest && (*(_DWORD *)(v7 + 56) & 0x80000) == 0 )
          VfMajorVerifyNewRequest(v7, (_DWORD)v26, v37, (_DWORD)v10, v25, (__int64)v34);
        VfMajorVerifyIrpStackDownward(v7, (_DWORD)v26, v37, (_DWORD)v10, v25, (__int64)v34);
        *(_QWORD *)(v36 + 48) = v26;
        *(_BYTE *)(v7 + 186) = *(_BYTE *)(v2 + 67);
        *(_OWORD *)(*(_QWORD *)(v25 + 8) + 96LL) = *(_OWORD *)(v2 + 48);
        v32 = *(_BYTE *)(v2 + 67);
        if ( v32 > 2 )
        {
          *(_QWORD *)(v2 + 184) -= 72LL;
          *(_BYTE *)(v2 + 67) = v32 - 1;
          *(_BYTE *)(*(_QWORD *)(v2 + 184) - 69LL) |= 0x10u;
          ++*(_BYTE *)(v2 + 67);
          *(_QWORD *)(v2 + 184) += 72LL;
        }
        IovpSessionDataReference(v36);
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 20));
        if ( VfWdCancelTimeoutTicks )
          ViWdBeforeCallDriver(v2, *(_QWORD *)(a1 + 48), v7 + 248);
      }
      VfIrpDatabaseEntryReleaseLock(v7);
      result = started;
      if ( started )
        return VfPendingFinishLogging(started);
      return result;
    }
    v11 = *v10;
    if ( v11 == 13 )
      v12 = *((_DWORD *)v10 + 6);
    else
      v12 = v10[1];
    v13 = v11 - 12;
    if ( !v13 )
    {
      if ( v12 != 2 )
        v8 = 1;
      goto LABEL_37;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 4;
      if ( v15 )
      {
        if ( v15 != 10 )
        {
LABEL_28:
          v8 = 1;
          goto LABEL_37;
        }
        v16 = v12 == 2;
      }
      else
      {
        v16 = v12 == 1;
      }
    }
    else
    {
      if ( v12 == 589916 )
        goto LABEL_37;
      if ( v12 == 589904 )
        goto LABEL_37;
      if ( (unsigned int)(v12 - 589824) <= 0x14 )
      {
        v5 = 1118481LL;
        if ( _bittest((const int *)&v5, v12 - 589824) )
          goto LABEL_37;
      }
      v16 = v12 == 590400;
    }
    if ( v16 )
      goto LABEL_37;
    goto LABEL_28;
  }
  return result;
}
