/*
 * XREFs of ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0105EDC
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C3FB8 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C400C (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??0tagMedianSmoother@Prediction@@QEAA@XZ @ 0x1C01C405C (--0tagMedianSmoother@Prediction@@QEAA@XZ.c)
 *     GetPointerDeviceContactState @ 0x1C01CB070 (GetPointerDeviceContactState.c)
 *     GetPTPContactState @ 0x1C01CF2F0 (GetPTPContactState.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02696C0 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  while ( --a3 >= 0 )
  {
    a4(a1);
    a1 += a2;
  }
}
