/*
 * XREFs of ?GetTransform@CImageSource@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085240
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CImageSource::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 52) = 0LL;
  *(_QWORD *)(a2 + 44) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)(a2 + 40) = 1065353216;
  *(_DWORD *)(a2 + 20) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  if ( a3 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 112LL))(a1, 0LL, 0LL, a3);
  return 0;
}
