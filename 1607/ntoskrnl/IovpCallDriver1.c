/*
 * XREFs of IovpCallDriver1 @ 0x14070A8C0
 * Callers:
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MdlInvariantPreProcessing1 @ 0x140222FA8 (MdlInvariantPreProcessing1.c)
 *     ViErrorReport1 @ 0x14022348C (ViErrorReport1.c)
 *     IovpAdvanceStackDownwards @ 0x14070A750 (IovpAdvanceStackDownwards.c)
 *     IovpExamineDevObjForwarding @ 0x14070B6C0 (IovpExamineDevObjForwarding.c)
 *     IovpExamineIrpStackForwarding @ 0x14070B750 (IovpExamineIrpStackForwarding.c)
 *     VfGetPristineDispatchRoutine @ 0x14070B894 (VfGetPristineDispatchRoutine.c)
 *     VfPendingFinishLogging @ 0x14070CF24 (VfPendingFinishLogging.c)
 *     VfPendingShouldForce @ 0x14070D15C (VfPendingShouldForce.c)
 *     VfPendingStartLogging @ 0x14070D268 (VfPendingStartLogging.c)
 *     VfDevObjMarkDeviceRemoved @ 0x14070D758 (VfDevObjMarkDeviceRemoved.c)
 *     IovUtilGetBottomDeviceObject @ 0x14070DFEC (IovUtilGetBottomDeviceObject.c)
 *     IovUtilGetLowerDeviceObject @ 0x14070E044 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x14070E0DC (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsInFdoStack @ 0x14070E128 (IovUtilIsInFdoStack.c)
 *     VfMajorIsNewRequest @ 0x14070E514 (VfMajorIsNewRequest.c)
 *     VfMajorVerifyIrpStackDownward @ 0x14070E778 (VfMajorVerifyIrpStackDownward.c)
 *     VfMajorVerifyNewIrp @ 0x14070E8F8 (VfMajorVerifyNewIrp.c)
 *     VfMajorVerifyNewRequest @ 0x14070E99C (VfMajorVerifyNewRequest.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140716A10 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCallDriver @ 0x140716E88 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x140717840 (IovpSessionDataCreate.c)
 *     IovpSessionDataReference @ 0x1407179AC (IovpSessionDataReference.c)
 *     VfPacketCreateAndLock @ 0x1407179C0 (VfPacketCreateAndLock.c)
 *     VfIrpLogRecordEvent @ 0x14071946C (VfIrpLogRecordEvent.c)
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
  _QWORD *v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  void *v27; // rax
  bool v28; // zf
  __int64 v29; // rbx
  int v30; // ebx
  char v31; // al
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+40h] [rbp-68h] BYREF
  __int64 v34; // [rsp+48h] [rbp-60h] BYREF
  __int64 started; // [rsp+50h] [rbp-58h]
  int v36; // [rsp+B0h] [rbp+8h]
  unsigned int v37; // [rsp+B8h] [rbp+10h]
  int IsNewRequest; // [rsp+B8h] [rbp+10h]
  int v39; // [rsp+C0h] [rbp+18h] BYREF
  const void *v40; // [rsp+C8h] [rbp+20h]

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
    v40 = *(const void **)(a1 + 176);
    ShouldForce = VfPendingShouldForce(v7, v5, v2, (_DWORD)v9, v6, (__int64)v40);
    v11 = *(_QWORD *)(v6 + 240);
    v12 = ShouldForce;
    v13 = *(_QWORD **)(a1 + 160);
    v37 = ShouldForce;
    if ( v11 || (v14 = *(_DWORD *)(v6 + 56), (v14 & 1) != 0) )
    {
      v15 = 0;
      v36 = 0;
    }
    else
    {
      v15 = 1;
      *(_DWORD *)(v6 + 56) = v14 | 1;
      v36 = 1;
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
        v15 = v36;
      }
      if ( *(_QWORD *)(v2 + 104) )
      {
        ViErrorReport1(0x203u, v40, (const void *)v2);
        *(_QWORD *)(v2 + 104) = 0LL;
      }
      if ( (*(_DWORD *)(v6 + 56) & 0x10) != 0 )
        ViErrorReport1(0x205u, v40, (const void *)v2);
      if ( *(_BYTE *)(v2 + 67) <= *(_BYTE *)(v2 + 66)
        && (unsigned __int8)(*v9 - 3) <= 1u
        && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
        && (MmVerifierData & 0x6000) != 0 )
      {
        MdlInvariantPreProcessing1(a1, v6, (__int64)v9);
      }
      *(_DWORD *)(v11 + 56) = IovpExamineDevObjForwarding(v13, *(_QWORD *)(v11 + 48));
      IovpExamineIrpStackForwarding(v6, v15, v18, v2, (__int64)v40, (__int64)v9, (__int64)&v33, (__int64)&v39);
      if ( v37 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
        ++*(_DWORD *)(v6 + 24);
        *(_QWORD *)(v6 + 216) = v9;
        started = VfPendingStartLogging(v2);
      }
      IsNewRequest = VfMajorIsNewRequest(v33, v9);
      v19 = IovpAdvanceStackDownwards(v11 + 80, *(_BYTE *)(v2 + 67), (__int64)v9, v33, v39, IsNewRequest, 1, &v34);
      v20 = v34;
      *(_QWORD *)(v34 + 48) = v16;
      if ( v19 )
      {
        v21 = v36;
      }
      else
      {
        *(_DWORD *)(a1 + 24) |= 0x4000000u;
        *(_QWORD *)(a1 + 40) = a1 + 32;
        *(_QWORD *)(a1 + 32) = a1 + 32;
        *(_QWORD *)(v20 + 56) = v16;
        v20 = v34;
        v21 = v36;
        *(_QWORD *)(v34 + 112) = KeGetCurrentThread();
        if ( IsNewRequest )
        {
          *(_OWORD *)(v20 + 80) = *(_OWORD *)(v2 + 48);
          *(_OWORD *)(v20 + 96) = *(_OWORD *)(v2 + 48);
          if ( v36 )
            *(_DWORD *)(v20 + 4) |= 0x8000000u;
        }
      }
      LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(v13);
      if ( LowerDeviceObject )
        ObfDereferenceObject(LowerDeviceObject);
      else
        *(_DWORD *)(v20 + 4) |= 0x10000000u;
      *(_QWORD *)(v20 + 40) = VfGetPristineDispatchRoutine(v13[1], *v9);
      v23 = (_QWORD *)(a1 + 32);
      *(_DWORD *)(v20 + 4) &= ~0x40000000u;
      v24 = (_QWORD *)(v20 + 16);
      v25 = *(_QWORD *)(v20 + 16);
      if ( *(_QWORD *)(v25 + 8) != v20 + 16 )
        __fastfail(3u);
      *v23 = v25;
      *(_QWORD *)(a1 + 40) = v24;
      *(_QWORD *)(v25 + 8) = v23;
      *v24 = v23;
      *(_QWORD *)(a1 + 8) = v20;
      *(_QWORD *)(a1 + 72) = v2;
      v26 = *(_QWORD *)(v2 + 184);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(v26 - 72);
      *(_OWORD *)(a1 + 96) = *(_OWORD *)(v26 - 56);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(v26 - 40);
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(v26 - 24);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v26 - 8);
      if ( (v9[3] & 1) != 0 )
        *(_DWORD *)(a1 + 24) |= 0x1000000u;
      if ( *v9 == 27 && v9[1] == 2 )
      {
        *(_DWORD *)(a1 + 24) |= 0x20000000u;
        v27 = (void *)IovUtilGetBottomDeviceObject(v13);
        *(_QWORD *)(a1 + 64) = v27;
        ObfDereferenceObject(v27);
        if ( (unsigned int)IovUtilIsInFdoStack(v13) && !(unsigned int)IovUtilIsDeviceObjectMarked(v13, 3LL) )
          *(_DWORD *)(a1 + 24) |= 0x10000000u;
        VfDevObjMarkDeviceRemoved(v13);
      }
      v28 = v21 == 0;
      v29 = (__int64)v40;
      if ( !v28 )
        VfMajorVerifyNewIrp(v6, v2, (_DWORD)v9, v20, (__int64)v40);
      if ( !IsNewRequest || (*(_DWORD *)(v6 + 56) & 0x80000) != 0 )
      {
        v30 = v33;
      }
      else
      {
        v32 = v29;
        v30 = v33;
        VfMajorVerifyNewRequest(v6, (_DWORD)v13, v33, (_DWORD)v9, v20, v32);
      }
      VfMajorVerifyIrpStackDownward(v6, (_DWORD)v13, v30, (_DWORD)v9, v20, (__int64)v40);
      *(_QWORD *)(v11 + 48) = v13;
      *(_BYTE *)(v6 + 186) = *(_BYTE *)(v2 + 67);
      *(_OWORD *)(*(_QWORD *)(v20 + 8) + 96LL) = *(_OWORD *)(v2 + 48);
      v31 = *(_BYTE *)(v2 + 67);
      if ( v31 > 2 )
      {
        *(_QWORD *)(v2 + 184) -= 72LL;
        *(_BYTE *)(v2 + 67) = v31 - 1;
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
