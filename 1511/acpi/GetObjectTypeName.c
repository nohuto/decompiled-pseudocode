/*
 * XREFs of GetObjectTypeName @ 0x1C0044A2C
 * Callers:
 *     Release @ 0x1C0005520 (Release.c)
 *     Acquire @ 0x1C00055F0 (Acquire.c)
 *     CopyObjBuffer @ 0x1C000D384 (CopyObjBuffer.c)
 *     ValidateTarget @ 0x1C000E694 (ValidateTarget.c)
 *     ExprOp2_64 @ 0x1C000E9D0 (ExprOp2_64.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     ValidateArgTypes @ 0x1C0011BC0 (ValidateArgTypes.c)
 *     WriteField @ 0x1C00147DC (WriteField.c)
 *     NewObjData @ 0x1C0015090 (NewObjData.c)
 *     AMLIEvalPkgDataElement @ 0x1C0016B08 (AMLIEvalPkgDataElement.c)
 *     ReadField @ 0x1C0016EB0 (ReadField.c)
 *     AMLIEvalPackageElement @ 0x1C001AFE8 (AMLIEvalPackageElement.c)
 *     ProcessIncDec @ 0x1C0020AA0 (ProcessIncDec.c)
 *     ObjTypeSizeOf @ 0x1C0022FD0 (ObjTypeSizeOf.c)
 *     PrintObject @ 0x1C0043DFC (PrintObject.c)
 *     DumpObject @ 0x1C0045C44 (DumpObject.c)
 *     ResetSignal @ 0x1C0046E90 (ResetSignal.c)
 *     Concat @ 0x1C0047120 (Concat.c)
 *     Wait @ 0x1C0049180 (Wait.c)
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
  if ( off_1C0058EF8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C0058EF0 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C0058EF0 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C0058EF0 + 2 * v2 + 1);
  }
  return result;
}
