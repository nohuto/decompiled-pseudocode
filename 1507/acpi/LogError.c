/*
 * XREFs of LogError @ 0x1C00442B8
 * Callers:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     AMLIRegEventHandler @ 0x1C0004604 (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C00047EC (RegEventHandler.c)
 *     RegRSAccess @ 0x1C000480C (RegRSAccess.c)
 *     Release @ 0x1C00055C0 (Release.c)
 *     Acquire @ 0x1C0005690 (Acquire.c)
 *     NewObjOwner @ 0x1C0005AC0 (NewObjOwner.c)
 *     PerformMutexDriverCallbacks @ 0x1C0005C1C (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C0005CF8 (InitMutex.c)
 *     NewGlobalHeap @ 0x1C0005D90 (NewGlobalHeap.c)
 *     Load @ 0x1C0005E10 (Load.c)
 *     LoadMemDDB @ 0x1C0005EEC (LoadMemDDB.c)
 *     LoadDDB @ 0x1C000623C (LoadDDB.c)
 *     ParseAndGetNameSpaceObject @ 0x1C000C7C8 (ParseAndGetNameSpaceObject.c)
 *     ParseArgObj @ 0x1C000C84C (ParseArgObj.c)
 *     ParseString @ 0x1C000C8B4 (ParseString.c)
 *     ParseNameTail @ 0x1C000C990 (ParseNameTail.c)
 *     ParseArg @ 0x1C000D8A8 (ParseArg.c)
 *     ParseOpcode @ 0x1C000D910 (ParseOpcode.c)
 *     ParseFieldList @ 0x1C000DC80 (ParseFieldList.c)
 *     ParseField @ 0x1C000DD70 (ParseField.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C000FF00 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C00100D0 (ParseSuperName.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     ParseName @ 0x1C00107B0 (ParseName.c)
 *     ParsePackage @ 0x1C0010950 (ParsePackage.c)
 *     ParseIntObj @ 0x1C0010B60 (ParseIntObj.c)
 *     Method @ 0x1C0010C60 (Method.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     PushAccFieldObj @ 0x1C0012040 (PushAccFieldObj.c)
 *     PushCall @ 0x1C0012168 (PushCall.c)
 *     Store @ 0x1C00122A0 (Store.c)
 *     Package @ 0x1C0012430 (Package.c)
 *     ExprOp2_64 @ 0x1C00128C0 (ExprOp2_64.c)
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     IfElse @ 0x1C0012F10 (IfElse.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     PushTerm @ 0x1C0013334 (PushTerm.c)
 *     WriteField @ 0x1C00138DC (WriteField.c)
 *     ParseRelease @ 0x1C0013A10 (ParseRelease.c)
 *     AcquireASLMutex @ 0x1C0013C24 (AcquireASLMutex.c)
 *     ParseAcquire @ 0x1C0013D20 (ParseAcquire.c)
 *     PushFrame @ 0x1C0013EA4 (PushFrame.c)
 *     Return @ 0x1C0013F20 (Return.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     NewObjData @ 0x1C0014160 (NewObjData.c)
 *     ReadFieldObj @ 0x1C0014A40 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C0015020 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C001532C (GetFieldUnitRegionObj.c)
 *     CreateXField @ 0x1C0015538 (CreateXField.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     PushScope @ 0x1C00156E0 (PushScope.c)
 *     ReadField @ 0x1C0015DD0 (ReadField.c)
 *     AcquireGL @ 0x1C0016198 (AcquireGL.c)
 *     Index @ 0x1C0016200 (Index.c)
 *     AMLIEvalPkgDataElement @ 0x1C001634C (AMLIEvalPkgDataElement.c)
 *     CopyObjBuffer @ 0x1C0016958 (CopyObjBuffer.c)
 *     ReadBuffField @ 0x1C0016DA0 (ReadBuffField.c)
 *     Buffer @ 0x1C0016F20 (Buffer.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     WriteBuffField @ 0x1C0017F14 (WriteBuffField.c)
 *     NewLocalHeap @ 0x1C00186B8 (NewLocalHeap.c)
 *     AMLIEvalPackageElement @ 0x1C001AD78 (AMLIEvalPackageElement.c)
 *     OpRegion @ 0x1C001EFB0 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C001F0E8 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C001F1E8 (AmlpValidateFirmwareMemoryAddress.c)
 *     WriteCookAccess @ 0x1C001F3B0 (WriteCookAccess.c)
 *     Field @ 0x1C001FF40 (Field.c)
 *     ParseObjName @ 0x1C0020370 (ParseObjName.c)
 *     ProcessIncDec @ 0x1C0020540 (ProcessIncDec.c)
 *     Processor @ 0x1C0020ED0 (Processor.c)
 *     IndexField @ 0x1C0022320 (IndexField.c)
 *     ObjTypeSizeOf @ 0x1C0022850 (ObjTypeSizeOf.c)
 *     CreateField @ 0x1C0022DF0 (CreateField.c)
 *     InitEvent @ 0x1C0023258 (InitEvent.c)
 *     RegOpcodeHandler @ 0x1C00455E0 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C0045ACC (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0045CD0 (BankField.c)
 *     PowerRes @ 0x1C0045F10 (PowerRes.c)
 *     RawFieldAccess @ 0x1C0046A3C (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C0046F48 (NestAsyncEvalObject.c)
 *     Notify @ 0x1C0047460 (Notify.c)
 *     ResetSignal @ 0x1C0047580 (ResetSignal.c)
 *     SleepStall @ 0x1C00476D0 (SleepStall.c)
 *     Concat @ 0x1C0047810 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0047A60 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0047C40 (CopyObject.c)
 *     LoadTable @ 0x1C0048080 (LoadTable.c)
 *     MidString @ 0x1C0048750 (MidString.c)
 *     ProcessLoadTable @ 0x1C0048AC0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C0049080 (ToDecStr.c)
 *     ToHexStr @ 0x1C0049400 (ToHexStr.c)
 *     ToString @ 0x1C00496F0 (ToString.c)
 *     Wait @ 0x1C0049870 (Wait.c)
 *     ParseFieldConnection @ 0x1C004A0F0 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00851A0 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C0086164 (SyncLoadDDB.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0003DB8 (RtlStringCchPrintfA.c)
 */

void __fastcall LogError(int a1)
{
  int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rax

  v1 = 0;
  dword_1C005A218 = a1;
  if ( off_1C0058BD8 )
  {
    v2 = 0LL;
    v3 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C0058BD0 + v3) )
    {
      ++v2;
      ++v1;
      v3 = 16 * v2;
      if ( !*((_QWORD *)&unk_1C0058BD0 + 2 * v2 + 1) )
        return;
    }
    RtlStringCchPrintfA(
      byte_1C005A21C,
      0x100uLL,
      "AMLI_ERROR(%08x): %s",
      a1,
      *((const char **)&unk_1C0058BD0 + 2 * v1 + 1));
  }
}
