/*
 * XREFs of AcpiDiagTraceAmlError @ 0x1C0025778
 * Callers:
 *     SyncEvalObject @ 0x1C0001300 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     NewGlobalHeap @ 0x1C00059D0 (NewGlobalHeap.c)
 *     Load @ 0x1C0006050 (Load.c)
 *     LoadMemDDB @ 0x1C0006134 (LoadMemDDB.c)
 *     NewObjOwner @ 0x1C00066E4 (NewObjOwner.c)
 *     LoadDDB @ 0x1C0007080 (LoadDDB.c)
 *     PerformMutexDriverCallbacks @ 0x1C0007554 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C0007678 (InitMutex.c)
 *     Processor @ 0x1C000B270 (Processor.c)
 *     MapUnmapPhysMem @ 0x1C000B9CC (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C000BAC8 (AmlpValidateFirmwareMemoryAddress.c)
 *     OpRegion @ 0x1C000C520 (OpRegion.c)
 *     PushScope @ 0x1C000CB74 (PushScope.c)
 *     ParseString @ 0x1C001373C (ParseString.c)
 *     Index @ 0x1C0013FA0 (Index.c)
 *     AcquireGL @ 0x1C00142E0 (AcquireGL.c)
 *     CreateXField @ 0x1C0014688 (CreateXField.c)
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     Method @ 0x1C00149E0 (Method.c)
 *     ParseIntObj @ 0x1C0014BB0 (ParseIntObj.c)
 *     Store @ 0x1C0014E00 (Store.c)
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     ParseFieldList @ 0x1C0015620 (ParseFieldList.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0017B60 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     IfElse @ 0x1C0017FE0 (IfElse.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     PushTerm @ 0x1C0018668 (PushTerm.c)
 *     Return @ 0x1C00189D0 (Return.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     NewObjData @ 0x1C0018C10 (NewObjData.c)
 *     ExprOp2_64 @ 0x1C0018F80 (ExprOp2_64.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     Package @ 0x1C0019770 (Package.c)
 *     ParseName @ 0x1C00199B0 (ParseName.c)
 *     PushCall @ 0x1C0019B5C (PushCall.c)
 *     PushAccFieldObj @ 0x1C0019C90 (PushAccFieldObj.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     WriteField @ 0x1C001AFDC (WriteField.c)
 *     ParseRelease @ 0x1C001B120 (ParseRelease.c)
 *     AcquireASLMutex @ 0x1C001B320 (AcquireASLMutex.c)
 *     ParseAcquire @ 0x1C001B400 (ParseAcquire.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     ParsePackage @ 0x1C001BD20 (ParsePackage.c)
 *     ReadFieldObj @ 0x1C001C410 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C001CA40 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C001DC28 (GetFieldUnitRegionObj.c)
 *     ParseArg @ 0x1C001DCAC (ParseArg.c)
 *     ParseOpcode @ 0x1C001DD10 (ParseOpcode.c)
 *     WriteBuffField @ 0x1C001DF54 (WriteBuffField.c)
 *     ParseArgObj @ 0x1C001EC5C (ParseArgObj.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001EDE8 (ParseAndGetNameSpaceObject.c)
 *     ReadBuffField @ 0x1C001EF78 (ReadBuffField.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 *     WriteCookAccess @ 0x1C001FC00 (WriteCookAccess.c)
 *     NewLocalHeap @ 0x1C002039C (NewLocalHeap.c)
 *     PushFrame @ 0x1C00204F4 (PushFrame.c)
 *     Acquire @ 0x1C0020960 (Acquire.c)
 *     AMLIEvalPkgDataElement @ 0x1C0021FFC (AMLIEvalPkgDataElement.c)
 *     AMLIRegEventHandler @ 0x1C00228D4 (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C0022ABC (RegEventHandler.c)
 *     RegRSAccess @ 0x1C0022ADC (RegRSAccess.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     ParseNameTail @ 0x1C00234A0 (ParseNameTail.c)
 *     LogOp2_32 @ 0x1C0025478 (LogOp2_32.c)
 *     Buffer @ 0x1C0026AA0 (Buffer.c)
 *     CopyObjBuffer @ 0x1C0026B8C (CopyObjBuffer.c)
 *     Field @ 0x1C0026E10 (Field.c)
 *     ParseObjName @ 0x1C002745C (ParseObjName.c)
 *     ProcessIncDec @ 0x1C00279C0 (ProcessIncDec.c)
 *     Release @ 0x1C0028520 (Release.c)
 *     IndexField @ 0x1C0029B50 (IndexField.c)
 *     ObjTypeSizeOf @ 0x1C0029E70 (ObjTypeSizeOf.c)
 *     CreateField @ 0x1C002A4C0 (CreateField.c)
 *     InitEvent @ 0x1C002A958 (InitEvent.c)
 *     RegOpcodeHandler @ 0x1C005C7D0 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C005CBE0 (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C005CE00 (BankField.c)
 *     PowerRes @ 0x1C005D060 (PowerRes.c)
 *     RawFieldAccess @ 0x1C005DA7C (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C005DFF8 (NestAsyncEvalObject.c)
 *     Notify @ 0x1C005E560 (Notify.c)
 *     ResetSignal @ 0x1C005E690 (ResetSignal.c)
 *     SleepStall @ 0x1C005E7F0 (SleepStall.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C005EC30 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C005EE20 (CopyObject.c)
 *     LoadTable @ 0x1C005F290 (LoadTable.c)
 *     MidString @ 0x1C005FA00 (MidString.c)
 *     ProcessLoadTable @ 0x1C005FDA0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C00603C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0060760 (ToHexStr.c)
 *     ToString @ 0x1C0060A70 (ToString.c)
 *     Wait @ 0x1C0060C40 (Wait.c)
 *     ParseFieldConnection @ 0x1C00614D8 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00A6500 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00A69A8 (SyncLoadDDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagTraceAmlError(__int64 a1, int a2)
{
  int v3; // r10d
  int v4; // r9d
  __int64 v5; // rax
  char *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // r9
  __int16 v9; // ax
  __int64 v10; // rax
  char *v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int16 v14; // ax
  _DWORD v16[2]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v17[2]; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v19; // [rsp+50h] [rbp+7h]
  int v20; // [rsp+58h] [rbp+Fh]
  int v21; // [rsp+5Ch] [rbp+13h]
  int *v22; // [rsp+60h] [rbp+17h]
  __int64 v23; // [rsp+68h] [rbp+1Fh]
  __int64 v24; // [rsp+70h] [rbp+27h] BYREF
  __int16 v25; // [rsp+78h] [rbp+2Fh]
  __int64 v26; // [rsp+80h] [rbp+37h] BYREF
  __int16 v27; // [rsp+88h] [rbp+3Fh]
  int v28; // [rsp+B8h] [rbp+6Fh] BYREF

  v28 = a2;
  v27 = 0;
  v25 = 0;
  v26 = 0x41002F004ELL;
  v24 = 0x41002F004ELL;
  v3 = 3;
  LOBYTE(v17[0]) = 0;
  v4 = 3;
  *(_DWORD *)((char *)v17 + 1) = 0;
  LOBYTE(v16[0]) = 0;
  *(_DWORD *)((char *)v16 + 1) = 0;
  if ( a1 )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( v5 )
    {
      v6 = (char *)v16;
      v16[0] = *(_DWORD *)(v5 + 40);
      v7 = &v24;
      v8 = 4LL;
      do
      {
        v9 = *v6++;
        *(_WORD *)v7 = v9;
        v7 = (__int64 *)((char *)v7 + 2);
        --v8;
      }
      while ( v8 );
      v25 = 0;
      v4 = 5;
    }
    v10 = *(_QWORD *)(a1 + 72);
    if ( v10 )
    {
      v11 = (char *)v17;
      v17[0] = *(_DWORD *)(v10 + 40);
      v12 = &v26;
      v13 = 4LL;
      do
      {
        v14 = *v11++;
        *(_WORD *)v12 = v14;
        v12 = (__int64 *)((char *)v12 + 2);
        --v13;
      }
      while ( v13 );
      v27 = 0;
      v3 = 5;
    }
  }
  UserData.Ptr = (unsigned __int64)&v24;
  UserData.Reserved = 0;
  UserData.Size = 2 * v4;
  v21 = 0;
  v19 = &v26;
  v23 = 4LL;
  v20 = 2 * v3;
  v22 = &v28;
  return EtwWrite(*((REGHANDLE *)&WPP_MAIN_CB.Reserved + 1), &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
}
