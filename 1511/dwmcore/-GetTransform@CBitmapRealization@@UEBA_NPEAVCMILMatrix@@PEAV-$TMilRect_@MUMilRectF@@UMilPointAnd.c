/*
 * XREFs of ?GetTransform@CBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015C7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  float v5; // xmm1_4
  int v7; // [rsp+48h] [rbp+10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)(a2 + 52) = 0LL;
  *(_QWORD *)(a2 + 44) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_DWORD *)(a2 + 40) = 1065353216;
  *(_DWORD *)(a2 + 20) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  if ( a3 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)a1 + 24LL))(a1, &v7, &v8);
    v4 = v7;
    *(_QWORD *)a3 = 0LL;
    v5 = (float)v8;
    *(float *)(a3 + 8) = (float)v4;
    *(float *)(a3 + 12) = v5;
  }
  return 0;
}
