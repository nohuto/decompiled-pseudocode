/*
 * XREFs of ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F9BDC
 * Callers:
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x18015E9A0 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CBitmapRealization::GetSourceRect(__int64 a1, __int64 a2)
{
  char v2; // bp
  int v4; // edx
  float v5; // xmm1_4
  int v6; // ecx
  char result; // al
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a1 + 296) != 2
    || *(_DWORD *)(a1 + 192)
    || (v4 = *(_DWORD *)(a1 + 196), *(_DWORD *)(a1 + 204) <= v4)
    || *(_DWORD *)(a1 + 208) <= *(_DWORD *)(a1 + 200) )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(a1 + 112) + 24LL))(a1 + 112, &v8, &v9);
    v6 = v8;
    *(_QWORD *)a2 = 0LL;
    v5 = (float)v9;
    *(float *)(a2 + 8) = (float)v6;
  }
  else
  {
    v2 = 1;
    *(float *)a2 = (float)v4;
    *(float *)(a2 + 4) = (float)*(int *)(a1 + 200);
    *(float *)(a2 + 8) = (float)*(int *)(a1 + 204);
    v5 = (float)*(int *)(a1 + 208);
  }
  result = v2;
  *(float *)(a2 + 12) = v5;
  return result;
}
