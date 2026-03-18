/*
 * XREFs of ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00F0B1C
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C5B78 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01C5BCC (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 *     ??0tagMedianSmoother@Prediction@@QEAA@XZ @ 0x1C01C5C1C (--0tagMedianSmoother@Prediction@@QEAA@XZ.c)
 *     GetPointerDeviceContactState @ 0x1C01CCC50 (GetPointerDeviceContactState.c)
 *     GetPTPContactState @ 0x1C01D0F54 (GetPTPContactState.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02682E4 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  while ( --a3 >= 0 )
  {
    a4(a1);
    a1 += a2;
  }
}
