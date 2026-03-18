/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C013B00C
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C4CE0 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C4D34 (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0266614 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}
