/*
 * XREFs of GetObjectTypeName @ 0x1C005C1C8
 * Callers:
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     Store @ 0x1C0014E00 (Store.c)
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     NewObjData @ 0x1C0018C10 (NewObjData.c)
 *     ExprOp2_64 @ 0x1C0018F80 (ExprOp2_64.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     WriteField @ 0x1C001AFDC (WriteField.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 *     Acquire @ 0x1C0020960 (Acquire.c)
 *     AMLIEvalPkgDataElement @ 0x1C0021FFC (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0022C00 (AMLIEvalPackageElement.c)
 *     CopyObjBuffer @ 0x1C0026B8C (CopyObjBuffer.c)
 *     ProcessIncDec @ 0x1C00279C0 (ProcessIncDec.c)
 *     Release @ 0x1C0028520 (Release.c)
 *     ObjTypeSizeOf @ 0x1C0029E70 (ObjTypeSizeOf.c)
 *     PrintObject @ 0x1C005B45C (PrintObject.c)
 *     DumpObject @ 0x1C005D364 (DumpObject.c)
 *     ResetSignal @ 0x1C005E690 (ResetSignal.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 *     Wait @ 0x1C0060C40 (Wait.c)
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
  if ( off_1C0073138 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C0073130 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C0073130 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C0073130 + 2 * v2 + 1);
  }
  return result;
}
