/*
 * XREFs of ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x180092594
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180080990 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?HandleScreenRotation@CWindowList@@AEAAJHH@Z @ 0x180080AF8 (-HandleScreenRotation@CWindowList@@AEAAJHH@Z.c)
 * Callees:
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18000DC60 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetCenter@CVisual@@QEAAXNN@Z @ 0x18007E684 (-SetCenter@CVisual@@QEAAXNN@Z.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x18007E92C (-SetRotation@CVisual@@QEAAXN@Z.c)
 */

void __fastcall CScreenRotation::UpdateAngle(CScreenRotation *this, int a2, int a3)
{
  int v4; // r9d
  LONG v6; // r14d
  LONG v7; // edi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[20]; // [rsp+20h] [rbp-30h] BYREF
  float v12; // [rsp+34h] [rbp-1Ch]
  float v13; // [rsp+38h] [rbp-18h]
  struct tagPOINT v14; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h]

  v4 = a2;
  if ( *((_BYTE *)this + 314) )
  {
    v4 = (a3 - *((_DWORD *)this + 81)) % 360;
  }
  else
  {
    *((_BYTE *)this + 314) = 1;
    *((_DWORD *)this + 81) = a2 + a3;
  }
  if ( v4 == -270 )
  {
    *((_DWORD *)this + 79) = 90;
  }
  else if ( v4 == 270 )
  {
    *((_DWORD *)this + 79) = -90;
  }
  else if ( abs32(v4) == 360 )
  {
    *((_DWORD *)this + 79) = 0;
  }
  else
  {
    *((_DWORD *)this + 79) = v4;
  }
  v14 = (struct tagPOINT)*((_QWORD *)this + 14);
  v6 = v14.y >> 1;
  v7 = v14.x >> 1;
  CVisual::SetCenter(this, (double)(v14.x >> 1), (double)(v14.y >> 1));
  CVisual::SetRotation(this, (double)*((int *)this + 79));
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 79));
  v9 = *((_QWORD *)this + 37);
  v14.x = 0;
  v14.y = 0;
  v12 = 0.0;
  v13 = 0.0;
  *(_DWORD *)(v9 + 924) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( abs32(*((_DWORD *)this + 79)) == 180 || !*((_DWORD *)this + 79) )
  {
    if ( !*((_BYTE *)this + 314) )
      *((_BYTE *)this + 313) = 1;
  }
  else
  {
    v14.x = v6 - v7;
    v10 = *((_QWORD *)this + 37);
    v14.y = v7 - v6;
    v15 = *(_QWORD *)(v10 + 120);
    v13 = (float)(((int)v15 >> 1) - (SHIDWORD(v15) >> 1));
    v12 = (float)((SHIDWORD(v15) >> 1) - ((int)v15 >> 1));
  }
  CAnimatedTransitionVisual::Translate2D(
    *((CAnimatedTransitionVisual **)this + 37),
    (const struct TA_TRANSFORM_2D *)v11);
  CVisual::SetOffset((struct tagPOINT *)this, &v14);
  *((_DWORD *)this + 82) = a3;
}
