/*
 * XREFs of IovpCallDriver1 @ 0x1406BE838
 * Callers:
 *     VfBeforeCallDriver @ 0x1406BFA50 (VfBeforeCallDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MdlInvariantPreProcessing1 @ 0x14020B6C0 (MdlInvariantPreProcessing1.c)
 *     ViErrorReport1 @ 0x14020BBA4 (ViErrorReport1.c)
 *     IovpAdvanceStackDownwards @ 0x1406BE6C8 (IovpAdvanceStackDownwards.c)
 *     IovpExamineDevObjForwarding @ 0x1406BF638 (IovpExamineDevObjForwarding.c)
 *     IovpExamineIrpStackForwarding @ 0x1406BF6C8 (IovpExamineIrpStackForwarding.c)
 *     VfGetPristineDispatchRoutine @ 0x1406BF80C (VfGetPristineDispatchRoutine.c)
 *     VfPendingFinishLogging @ 0x1406C0E8C (VfPendingFinishLogging.c)
 *     VfPendingShouldForce @ 0x1406C10C4 (VfPendingShouldForce.c)
 *     VfPendingStartLogging @ 0x1406C11D0 (VfPendingStartLogging.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1406C16C0 (VfDevObjMarkDeviceRemoved.c)
 *     IovUtilGetBottomDeviceObject @ 0x1406C1F2C (IovUtilGetBottomDeviceObject.c)
 *     IovUtilGetLowerDeviceObject @ 0x1406C1F84 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1406C201C (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsInFdoStack @ 0x1406C2068 (IovUtilIsInFdoStack.c)
 *     VfMajorIsNewRequest @ 0x1406C2454 (VfMajorIsNewRequest.c)
 *     VfMajorVerifyIrpStackDownward @ 0x1406C26B8 (VfMajorVerifyIrpStackDownward.c)
 *     VfMajorVerifyNewIrp @ 0x1406C2838 (VfMajorVerifyNewIrp.c)
 *     VfMajorVerifyNewRequest @ 0x1406C28DC (VfMajorVerifyNewRequest.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1406C806C (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1406C81E4 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCallDriver @ 0x1406C84E0 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1406C8E70 (IovpSessionDataCreate.c)
 *     IovpSessionDataReference @ 0x1406C8FE0 (IovpSessionDataReference.c)
 *     VfPacketCreateAndLock @ 0x1406C8FF4 (VfPacketCreateAndLock.c)
 *     VfIrpLogRecordEvent @ 0x1406CAA5C (VfIrpLogRecordEvent.c)
 */

__int64 __fastcall IovpCallDriver1(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // rbp
  int v7; // ecx
  __int64 v8; // r15
  unsigned __int8 *v9; // r15
  unsigned int ShouldForce; // eax
  __int64 v11; // r12
  unsigned int v12; // ecx
  _QWORD *v13; // r13
  int v14; // eax
  int v15; // edi
  __int64 v16; // rbx
  void *BottomDeviceObject; // rdi
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rdi
  int v21; // ebx
  void *LowerDeviceObject; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  void *v26; // rax
  bool v27; // zf
  __int64 v28; // rbx
  int v29; // ebx
  char v30; // al
  __int64 v31; // [rsp+28h] [rbp-80h]
  __int64 v32; // [rsp+40h] [rbp-68h] BYREF
  __int64 v33; // [rsp+48h] [rbp-60h] BYREF
  __int64 started; // [rsp+50h] [rbp-58h]
  int v35; // [rsp+B0h] [rbp+8h]
  unsigned int v36; // [rsp+B8h] [rbp+10h]
  int IsNewRequest; // [rsp+B8h] [rbp+10h]
  int v38; // [rsp+C0h] [rbp+18h] BYREF
  const void *v39; // [rsp+C8h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 168);
  CurrentIrql = KeGetCurrentIrql();
  result = *(_DWORD *)(v2 + 16) & 0xC0000000;
  if ( (*(_DWORD *)(v2 + 16) & 0xC0000000) != 0 )
  {
    if ( (_DWORD)result != 0x40000000 )
      return result;
    result = VfIrpDatabaseEntryFindAndLock(*(_QWORD *)(a1 + 168));
    v6 = result;
  }
  else
  {
    result = VfIrpDatabaseEntryFindAndLock(*(_QWORD *)(a1 + 168));
    v6 = result;
    if ( result || (result = VfPacketCreateAndLock(v2), (v6 = result) != 0) )
      *(_DWORD *)(v2 + 16) |= 0x40000000u;
    else
      *(_DWORD *)(v2 + 16) |= 0x80000000;
  }
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 232);
    *(_BYTE *)(v6 + 61) = CurrentIrql;
    *(_BYTE *)(v6 + 60) = CurrentIrql;
    LOBYTE(v5) = CurrentIrql;
    v8 = *(_QWORD *)(v2 + 184);
    started = 0LL;
    v9 = (unsigned __int8 *)(v8 - 72);
    v39 = *(const void **)(a1 + 176);
    ShouldForce = VfPendingShouldForce(v7, v5, v2, (_DWORD)v9, v6, (__int64)v39);
    v11 = *(_QWORD *)(v6 + 240);
    v12 = ShouldForce;
    v13 = *(_QWORD **)(a1 + 160);
    v36 = ShouldForce;
    if ( v11 || (v14 = *(_DWORD *)(v6 + 56), (v14 & 1) != 0) )
    {
      v15 = 0;
      v35 = 0;
    }
    else
    {
      v15 = 1;
      *(_DWORD *)(v6 + 56) = v14 | 1;
      v35 = 1;
      v11 = IovpSessionDataCreate(v13, v6, v12);
    }
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 16) = v6;
    if ( v11 )
    {
      v16 = MEMORY[0xFFFFF78000000014];
      if ( v15 )
      {
        BottomDeviceObject = (void *)IovUtilGetBottomDeviceObject(v13);
        VfIrpLogRecordEvent(*(unsigned int *)(v6 + 232), BottomDeviceObject, v2);
        ObfDereferenceObject(BottomDeviceObject);
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
        ++*(_DWORD *)(v6 + 24);
        IovpSessionDataReference(v11);
        v15 = v35;
      }
      if ( *(_QWORD *)(v2 + 104) )
      {
        ViErrorReport1(0x203u, v39, (const void *)v2);
        *(_QWORD *)(v2 + 104) = 0LL;
      }
      if ( (*(_DWORD *)(v6 + 56) & 0x10) != 0 )
        ViErrorReport1(0x205u, v39, (const void *)v2);
      if ( *(_BYTE *)(v2 + 67) <= *(_BYTE *)(v2 + 66)
        && (unsigned __int8)(*v9 - 3) <= 1u
        && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
        && (MmVerifierData & 0x6000) != 0 )
      {
        MdlInvariantPreProcessing1(a1, v6, (__int64)v9);
      }
      *(_DWORD *)(v11 + 56) = IovpExamineDevObjForwarding(v13, *(_QWORD *)(v11 + 48));
      IovpExamineIrpStackForwarding(v6, v15, v18, v2, (__int64)v39, (__int64)v9, (__int64)&v32, (__int64)&v38);
      if ( v36 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
        ++*(_DWORD *)(v6 + 24);
        *(_QWORD *)(v6 + 216) = v9;
        started = VfPendingStartLogging(v2);
      }
      IsNewRequest = VfMajorIsNewRequest(v32, v9);
      v19 = IovpAdvanceStackDownwards(v11 + 80, *(_BYTE *)(v2 + 67), (__int64)v9, v32, v38, IsNewRequest, 1, &v33);
      v20 = v33;
      *(_QWORD *)(v33 + 48) = v16;
      if ( v19 )
      {
        v21 = v35;
      }
      else
      {
        *(_DWORD *)(a1 + 24) |= 0x4000000u;
        *(_QWORD *)(a1 + 40) = a1 + 32;
        *(_QWORD *)(a1 + 32) = a1 + 32;
        *(_QWORD *)(v20 + 56) = v16;
        v20 = v33;
        v21 = v35;
        *(_QWORD *)(v33 + 112) = KeGetCurrentThread();
        if ( IsNewRequest )
        {
          *(_OWORD *)(v20 + 80) = *(_OWORD *)(v2 + 48);
          *(_OWORD *)(v20 + 96) = *(_OWORD *)(v2 + 48);
          if ( v35 )
            *(_DWORD *)(v20 + 4) |= 0x8000000u;
        }
      }
      LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(v13);
      if ( LowerDeviceObject )
        ObfDereferenceObject(LowerDeviceObject);
      else
        *(_DWORD *)(v20 + 4) |= 0x10000000u;
      *(_QWORD *)(v20 + 40) = VfGetPristineDispatchRoutine(v13[1], *v9);
      v23 = a1 + 32;
      *(_DWORD *)(v20 + 4) &= ~0x40000000u;
      v24 = *(_QWORD *)(v20 + 16);
      *(_QWORD *)(a1 + 32) = v24;
      *(_QWORD *)(a1 + 40) = v20 + 16;
      if ( *(_QWORD *)(v24 + 8) != v20 + 16 )
        __fastfail(3u);
      *(_QWORD *)(v24 + 8) = v23;
      *(_QWORD *)(v20 + 16) = v23;
      *(_QWORD *)(a1 + 8) = v20;
      *(_QWORD *)(a1 + 72) = v2;
      v25 = *(_QWORD *)(v2 + 184);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(v25 - 72);
      *(_OWORD *)(a1 + 96) = *(_OWORD *)(v25 - 56);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(v25 - 40);
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(v25 - 24);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v25 - 8);
      if ( (v9[3] & 1) != 0 )
        *(_DWORD *)(a1 + 24) |= 0x1000000u;
      if ( *v9 == 27 && v9[1] == 2 )
      {
        *(_DWORD *)(a1 + 24) |= 0x20000000u;
        v26 = (void *)IovUtilGetBottomDeviceObject(v13);
        *(_QWORD *)(a1 + 64) = v26;
        ObfDereferenceObject(v26);
        if ( (unsigned int)IovUtilIsInFdoStack(v13) && !(unsigned int)IovUtilIsDeviceObjectMarked(v13, 3LL) )
          *(_DWORD *)(a1 + 24) |= 0x10000000u;
        VfDevObjMarkDeviceRemoved(v13);
      }
      v27 = v21 == 0;
      v28 = (__int64)v39;
      if ( !v27 )
        VfMajorVerifyNewIrp(v6, v2, (_DWORD)v9, v20, (__int64)v39);
      if ( !IsNewRequest || (*(_DWORD *)(v6 + 56) & 0x80000) != 0 )
      {
        v29 = v32;
      }
      else
      {
        v31 = v28;
        v29 = v32;
        VfMajorVerifyNewRequest(v6, (_DWORD)v13, v32, (_DWORD)v9, v20, v31);
      }
      VfMajorVerifyIrpStackDownward(v6, (_DWORD)v13, v29, (_DWORD)v9, v20, (__int64)v39);
      *(_QWORD *)(v11 + 48) = v13;
      *(_BYTE *)(v6 + 186) = *(_BYTE *)(v2 + 67);
      *(_OWORD *)(*(_QWORD *)(v20 + 8) + 96LL) = *(_OWORD *)(v2 + 48);
      v30 = *(_BYTE *)(v2 + 67);
      if ( v30 > 2 )
      {
        *(_QWORD *)(v2 + 184) -= 72LL;
        *(_BYTE *)(v2 + 67) = v30 - 1;
        *(_BYTE *)(*(_QWORD *)(v2 + 184) - 69LL) |= 0x10u;
        ++*(_BYTE *)(v2 + 67);
        *(_QWORD *)(v2 + 184) += 72LL;
      }
      IovpSessionDataReference(v11);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
      if ( VfWdCancelTimeoutTicks )
        ViWdBeforeCallDriver(v2, *(_QWORD *)(a1 + 48), v6 + 248);
    }
    VfIrpDatabaseEntryReleaseLock(v6);
    result = started;
    if ( started )
      return VfPendingFinishLogging(started);
  }
  return result;
}
