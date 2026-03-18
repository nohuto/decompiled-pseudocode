/*
 * XREFs of ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x1800F9CB4
 * Callers:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18015E558 (-CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x18015E9A0 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Rotate180@CBaseMatrix@@QEAAXXZ @ 0x180138E38 (-Rotate180@CBaseMatrix@@QEAAXXZ.c)
 *     ?Rotate270@CBaseMatrix@@QEAAXXZ @ 0x180138EAC (-Rotate270@CBaseMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CBaseMatrix@@QEAAXXZ @ 0x180138F24 (-Rotate90@CBaseMatrix@@QEAAXXZ.c)
 */

char __fastcall CBitmapRealization::CalcRotationTransform(
        CBitmapRealization *this,
        float a2,
        float a3,
        struct CMILMatrix *a4)
{
  char v4; // si
  int v6; // eax
  int v7; // eax
  float v8; // xmm7_4
  float v9; // xmm7_4
  float v10; // xmm6_4

  v4 = 0;
  *(_QWORD *)((char *)a4 + 52) = 0LL;
  *((_DWORD *)a4 + 15) = 1065353216;
  *((_DWORD *)a4 + 10) = 1065353216;
  *((_DWORD *)a4 + 5) = 1065353216;
  *(_DWORD *)a4 = 1065353216;
  *(_QWORD *)((char *)a4 + 44) = 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  *((_QWORD *)a4 + 3) = 0LL;
  *(_QWORD *)((char *)a4 + 12) = 0LL;
  *(_QWORD *)((char *)a4 + 4) = 0LL;
  if ( *((_DWORD *)this + 74) == 2 && !*((_DWORD *)this + 48) )
  {
    v6 = (*(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 104LL))(this) - 2;
    if ( !v6 )
    {
      CBaseMatrix::Rotate270(a4);
      v10 = a2 + *((float *)a4 + 13);
      *((float *)a4 + 12) = *((float *)a4 + 12) + 0.0;
      *((float *)a4 + 13) = v10;
      return 1;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      CBaseMatrix::Rotate180(a4);
      v9 = a3 + *((float *)a4 + 13);
      *((float *)a4 + 12) = a2 + *((float *)a4 + 12);
      *((float *)a4 + 13) = v9;
      return 1;
    }
    if ( v7 == 1 )
    {
      CBaseMatrix::Rotate90(a4);
      v8 = a3 + *((float *)a4 + 12);
      *((float *)a4 + 13) = *((float *)a4 + 13) + 0.0;
      *((float *)a4 + 12) = v8;
      return 1;
    }
  }
  return v4;
}
