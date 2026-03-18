/*
 * XREFs of LogError @ 0x1C0043CD8
 * Callers:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     AMLIRegEventHandler @ 0x1C0004B14 (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C0004CFC (RegEventHandler.c)
 *     RegRSAccess @ 0x1C0004D1C (RegRSAccess.c)
 *     Release @ 0x1C0005520 (Release.c)
 *     Acquire @ 0x1C00055F0 (Acquire.c)
 *     Processor @ 0x1C0005920 (Processor.c)
 *     PushScope @ 0x1C0005DD0 (PushScope.c)
 *     NewObjOwner @ 0x1C0005EB8 (NewObjOwner.c)
 *     PerformMutexDriverCallbacks @ 0x1C000601C (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C00060F8 (InitMutex.c)
 *     NewGlobalHeap @ 0x1C0006190 (NewGlobalHeap.c)
 *     Load @ 0x1C0006210 (Load.c)
 *     LoadMemDDB @ 0x1C00062EC (LoadMemDDB.c)
 *     LoadDDB @ 0x1C00065EC (LoadDDB.c)
 *     ParseAndGetNameSpaceObject @ 0x1C000CD58 (ParseAndGetNameSpaceObject.c)
 *     ParseString @ 0x1C000CDDC (ParseString.c)
 *     ParseNameTail @ 0x1C000D050 (ParseNameTail.c)
 *     CopyObjBuffer @ 0x1C000D384 (CopyObjBuffer.c)
 *     Index @ 0x1C000DC80 (Index.c)
 *     CreateXField @ 0x1C000DF7C (CreateXField.c)
 *     ParseArgObj @ 0x1C000E12C (ParseArgObj.c)
 *     ParsePackage @ 0x1C000E2B0 (ParsePackage.c)
 *     ParseIntObj @ 0x1C000E4C0 (ParseIntObj.c)
 *     ValidateTarget @ 0x1C000E694 (ValidateTarget.c)
 *     Package @ 0x1C000E850 (Package.c)
 *     ExprOp2_64 @ 0x1C000E9D0 (ExprOp2_64.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     ParseFieldList @ 0x1C000EE64 (ParseFieldList.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0010F50 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0011120 (ParseSuperName.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     IfElse @ 0x1C0011950 (IfElse.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     PushTerm @ 0x1C0011D74 (PushTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseName @ 0x1C0012EF0 (ParseName.c)
 *     PushCall @ 0x1C001308C (PushCall.c)
 *     PushAccFieldObj @ 0x1C00131C0 (PushAccFieldObj.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     Method @ 0x1C0014540 (Method.c)
 *     WriteField @ 0x1C00147DC (WriteField.c)
 *     ParseRelease @ 0x1C0014940 (ParseRelease.c)
 *     AcquireASLMutex @ 0x1C0014B54 (AcquireASLMutex.c)
 *     ParseAcquire @ 0x1C0014C50 (ParseAcquire.c)
 *     PushFrame @ 0x1C0014DD4 (PushFrame.c)
 *     Return @ 0x1C0014E50 (Return.c)
 *     DupObjData @ 0x1C0014F70 (DupObjData.c)
 *     NewObjData @ 0x1C0015090 (NewObjData.c)
 *     ReadFieldObj @ 0x1C0015970 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C0016130 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C001643C (GetFieldUnitRegionObj.c)
 *     ParseArg @ 0x1C0016648 (ParseArg.c)
 *     ParseOpcode @ 0x1C00166B0 (ParseOpcode.c)
 *     AMLIEvalPkgDataElement @ 0x1C0016B08 (AMLIEvalPkgDataElement.c)
 *     ReadField @ 0x1C0016EB0 (ReadField.c)
 *     AcquireGL @ 0x1C0017278 (AcquireGL.c)
 *     ReadBuffField @ 0x1C0018188 (ReadBuffField.c)
 *     WriteBuffField @ 0x1C00182BC (WriteBuffField.c)
 *     NewLocalHeap @ 0x1C0018C98 (NewLocalHeap.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     OpRegion @ 0x1C001FC60 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C001FD98 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C001FE98 (AmlpValidateFirmwareMemoryAddress.c)
 *     WriteCookAccess @ 0x1C001FF40 (WriteCookAccess.c)
 *     Buffer @ 0x1C0020230 (Buffer.c)
 *     Field @ 0x1C0020510 (Field.c)
 *     ParseObjName @ 0x1C0020940 (ParseObjName.c)
 *     ProcessIncDec @ 0x1C0020AA0 (ProcessIncDec.c)
 *     IndexField @ 0x1C0022AA0 (IndexField.c)
 *     ObjTypeSizeOf @ 0x1C0022FD0 (ObjTypeSizeOf.c)
 *     CreateField @ 0x1C0023570 (CreateField.c)
 *     InitEvent @ 0x1C0023928 (InitEvent.c)
 *     RegOpcodeHandler @ 0x1C0045010 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C0045510 (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0045710 (BankField.c)
 *     PowerRes @ 0x1C0045950 (PowerRes.c)
 *     RawFieldAccess @ 0x1C004635C (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C0046868 (NestAsyncEvalObject.c)
 *     Notify @ 0x1C0046D70 (Notify.c)
 *     ResetSignal @ 0x1C0046E90 (ResetSignal.c)
 *     SleepStall @ 0x1C0046FE0 (SleepStall.c)
 *     Concat @ 0x1C0047120 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0047370 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0047550 (CopyObject.c)
 *     LoadTable @ 0x1C0047990 (LoadTable.c)
 *     MidString @ 0x1C0048060 (MidString.c)
 *     ProcessLoadTable @ 0x1C00483D0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C0048990 (ToDecStr.c)
 *     ToHexStr @ 0x1C0048D10 (ToHexStr.c)
 *     ToString @ 0x1C0049000 (ToString.c)
 *     Wait @ 0x1C0049180 (Wait.c)
 *     ParseFieldConnection @ 0x1C0049A00 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00851A0 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C0086180 (SyncLoadDDB.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DE8 (RtlStringCchPrintfA.c)
 */

void __fastcall LogError(int a1)
{
  int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rax

  v1 = 0;
  dword_1C005A228 = a1;
  if ( off_1C0058BC8 )
  {
    v2 = 0LL;
    v3 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C0058BC0 + v3) )
    {
      ++v2;
      ++v1;
      v3 = 16 * v2;
      if ( !*((_QWORD *)&unk_1C0058BC0 + 2 * v2 + 1) )
        return;
    }
    RtlStringCchPrintfA(
      byte_1C005A22C,
      0x100uLL,
      "AMLI_ERROR(%08x): %s",
      a1,
      *((const char **)&unk_1C0058BC0 + 2 * v1 + 1));
  }
}
