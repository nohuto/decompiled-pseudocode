/*
 * XREFs of ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180023950
 * Callers:
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180023950 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800283E0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000E7FC (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18000EA8C (-D3DXVec2TransformCoord@@YAPEAUD2DVector2@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x180023950 (-DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x18009E854 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 */

bool __fastcall CVisual::DoHitTest(CVisual *this, const struct tagPOINT *a2, struct CVisual **a3, unsigned int *a4)
{
  unsigned int *v5; // r10
  struct CVisual **v6; // r9
  const struct tagPOINT *v7; // r8
  struct CVisual *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  char v11; // di
  CVisual *v12; // rcx
  bool v13; // al
  int v15; // ecx
  float *v16; // rdx
  struct D2DMatrix *v17; // rax
  struct tagPOINT v18; // [rsp+20h] [rbp-59h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-51h] BYREF
  float x; // [rsp+30h] [rbp-49h] BYREF
  float y; // [rsp+34h] [rbp-45h]
  struct CVisual *v22; // [rsp+38h] [rbp-41h] BYREF
  CVisual *v23; // [rsp+40h] [rbp-39h]
  unsigned int *v24; // [rsp+48h] [rbp-31h]
  const struct tagPOINT *v25; // [rsp+50h] [rbp-29h]
  struct CVisual **v26; // [rsp+58h] [rbp-21h]
  bool (__fastcall *v27)(CVisual *__hidden, const struct tagPOINT *, struct CVisual **, unsigned int *); // [rsp+60h] [rbp-19h]
  _BYTE v28[64]; // [rsp+70h] [rbp-9h] BYREF

  v24 = a4;
  v5 = a4;
  v26 = a3;
  v6 = a3;
  v25 = a2;
  v7 = a2;
  v8 = 0LL;
  v22 = 0LL;
  v9 = 0;
  v19 = 0;
  if ( *((_QWORD *)this + 3) && ((*((_BYTE *)this + 84) & 4) == 0 || *((_DWORD *)this + 46) == -1) )
    goto LABEL_16;
  LODWORD(v10) = -1;
  v11 = 0;
  while ( 1 )
  {
    if ( !v11 )
    {
      LODWORD(v10) = *((_DWORD *)this + 18);
      v11 = 1;
    }
    v10 = (unsigned int)(v10 - 1);
    if ( (_DWORD)v10 == -1 )
      break;
    v12 = *(CVisual **)(*((_QWORD *)this + 6) + 8 * v10);
    v18 = *v7;
    v23 = v12;
    v18.x -= *((_DWORD *)v12 + 26);
    v18.y -= *((_DWORD *)v12 + 27);
    if ( (*((_BYTE *)v12 + 84) & 2) != 0 )
    {
      CVisual::GetCurrentTransform(v12, (struct D2DMatrix *)v28);
      v17 = D2DMatrixInverse((struct D2DMatrix *)v28, v16, (const struct D2DMatrix *)v28);
      v7 = v25;
      if ( v17 )
      {
        x = (float)v18.x;
        y = (float)v18.y;
        D3DXVec2TransformCoord((struct D2DVector2 *)&x, (const struct D2DVector2 *)&x, (const struct D2DMatrix *)v28);
        v12 = v23;
        v18.y = (int)y;
        v18.x = (int)x;
        goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      v27 = *(bool (__fastcall **)(CVisual *__hidden, const struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v12 + 112LL);
      if ( v27 == CVisual::DoHitTest )
        v13 = CVisual::DoHitTest(v12, &v18, &v22, &v19);
      else
        v13 = v27(v23, &v18, &v22, &v19);
      v7 = v25;
      if ( v13 )
        break;
    }
  }
  v8 = v22;
  if ( v22 || v7->x < 0 || v7->x >= *((_DWORD *)this + 28) || (v15 = v7->y, v15 < 0) || v15 >= *((_DWORD *)this + 29) )
  {
    v9 = v19;
  }
  else
  {
    v9 = *((_DWORD *)this + 46);
    v8 = this;
  }
  v5 = v24;
  v6 = v26;
LABEL_16:
  *v6 = v8;
  *v5 = v9;
  return v8 != 0LL;
}
