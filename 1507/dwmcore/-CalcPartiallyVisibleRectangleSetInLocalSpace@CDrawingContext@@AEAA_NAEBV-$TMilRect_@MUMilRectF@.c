/*
 * XREFs of ?CalcPartiallyVisibleRectangleSetInLocalSpace@CDrawingContext@@AEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@PEAI@Z @ 0x18002ABCC
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18000CD00 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x18000CDFC (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18002AD28 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::CalcPartiallyVisibleRectangleSetInLocalSpace(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int v4; // ebx
  char *v7; // rcx
  char *v8; // rax
  __int64 v10; // r8
  int v11; // r8d
  char v12; // r11
  const struct CBaseMatrix *TopByReference; // rax
  unsigned int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  unsigned int i; // r10d
  int v19; // r10d
  __int64 v20; // rax
  unsigned int v21; // [rsp+30h] [rbp-89h] BYREF
  __int128 v22; // [rsp+38h] [rbp-81h] BYREF
  int v23; // [rsp+48h] [rbp-71h]
  int v24; // [rsp+4Ch] [rbp-6Dh]
  _BYTE v25[24]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v26; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v27[2]; // [rsp+78h] [rbp-41h] BYREF
  char v28; // [rsp+88h] [rbp-31h] BYREF
  __int128 v29; // [rsp+A0h] [rbp-19h] BYREF
  char v30; // [rsp+B0h] [rbp-9h] BYREF
  char v31; // [rsp+C0h] [rbp+7h] BYREF

  v4 = 0;
  v27[0] = &v29;
  v27[1] = &v30;
  v7 = &v31;
  v8 = &v28;
  v10 = 2LL;
  do
  {
    *(_QWORD *)v8 = v7;
    v7 += 16;
    v8 += 8;
    --v10;
  }
  while ( v10 );
  v11 = *(_DWORD *)(a1 + 5752);
  v21 = 4;
  v12 = CDrawingContext::CalcPartiallyVisibleRectangleSet(a1, a2, v11, (unsigned int)v27, (__int64)&v21);
  if ( v12 )
  {
    TopByReference = CBaseMatrixStack::GetTopByReference((CBaseMatrixStack *)(a1 + 456));
    v15 = *((_DWORD *)TopByReference + 1);
    LODWORD(v22) = *(_DWORD *)TopByReference;
    *(_QWORD *)((char *)&v22 + 4) = __PAIR64__(*((_DWORD *)TopByReference + 4), v15);
    v16 = *((_DWORD *)TopByReference + 12);
    HIDWORD(v22) = *((_DWORD *)TopByReference + 5);
    v17 = *((_DWORD *)TopByReference + 13);
    v23 = v16;
    v24 = v17;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)v25, (const struct MILMatrix3x2 *)&v22);
    for ( i = 0; i < v21; i = v19 + 1 )
    {
      v22 = *(&v29 + i);
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v25, (const struct MilRectF *)&v22, (struct MilRectF *)&v26);
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v26) )
      {
        v20 = 2LL * v4++;
        *(_OWORD *)(a3 + 8 * v20) = v26;
      }
    }
    *a4 = v4;
  }
  return v12;
}
