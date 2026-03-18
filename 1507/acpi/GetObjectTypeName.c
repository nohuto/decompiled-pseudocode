/*
 * XREFs of GetObjectTypeName @ 0x1C0044FFC
 * Callers:
 *     Release @ 0x1C00055C0 (Release.c)
 *     Acquire @ 0x1C0005690 (Acquire.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     Store @ 0x1C00122A0 (Store.c)
 *     ExprOp2_64 @ 0x1C00128C0 (ExprOp2_64.c)
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     WriteField @ 0x1C00138DC (WriteField.c)
 *     NewObjData @ 0x1C0014160 (NewObjData.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     ReadField @ 0x1C0015DD0 (ReadField.c)
 *     AMLIEvalPkgDataElement @ 0x1C001634C (AMLIEvalPkgDataElement.c)
 *     CopyObjBuffer @ 0x1C0016958 (CopyObjBuffer.c)
 *     AMLIEvalPackageElement @ 0x1C001AD78 (AMLIEvalPackageElement.c)
 *     ProcessIncDec @ 0x1C0020540 (ProcessIncDec.c)
 *     ObjTypeSizeOf @ 0x1C0022850 (ObjTypeSizeOf.c)
 *     PrintObject @ 0x1C00443DC (PrintObject.c)
 *     DumpObject @ 0x1C0046324 (DumpObject.c)
 *     ResetSignal @ 0x1C0047580 (ResetSignal.c)
 *     Concat @ 0x1C0047810 (Concat.c)
 *     Wait @ 0x1C0049870 (Wait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetObjectTypeName(int a1)
{
  __int64 result; // rax
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rdx

  result = 0LL;
  v2 = 0;
  if ( off_1C0058F08 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C0058F00 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C0058F00 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C0058F00 + 2 * v2 + 1);
  }
  return result;
}
