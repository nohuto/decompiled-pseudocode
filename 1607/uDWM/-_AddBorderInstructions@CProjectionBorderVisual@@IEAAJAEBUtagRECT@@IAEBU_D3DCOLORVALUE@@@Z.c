/*
 * XREFs of ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x18007D44C
 * Callers:
 *     ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x18007D6A8 (-_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007D594 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_AddBorderInstructions(
        CProjectionBorderVisual *this,
        const struct tagRECT *a2,
        int a3,
        const struct _D3DCOLORVALUE *a4)
{
  unsigned int v5; // ebx
  LONG right; // r8d
  int v10; // edx
  LONG left; // r9d
  int v12; // eax
  LONG bottom; // r10d
  LONG top; // ecx
  int v15; // eax
  LONG v16; // edx
  int v17; // ecx
  struct tagRECT *v18; // rdi
  int v19; // eax
  int v20; // eax
  struct tagRECT v22; // [rsp+30h] [rbp-50h] BYREF
  LONG v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+44h] [rbp-3Ch]
  LONG v25; // [rsp+48h] [rbp-38h]
  LONG v26; // [rsp+4Ch] [rbp-34h]
  LONG v27; // [rsp+50h] [rbp-30h]
  LONG v28; // [rsp+54h] [rbp-2Ch]
  int v29; // [rsp+58h] [rbp-28h]
  int v30; // [rsp+5Ch] [rbp-24h]
  int v31; // [rsp+60h] [rbp-20h]
  LONG v32; // [rsp+64h] [rbp-1Ch]
  LONG v33; // [rsp+68h] [rbp-18h]
  int v34; // [rsp+6Ch] [rbp-14h]
  __int64 v35; // [rsp+70h] [rbp-10h] BYREF

  v5 = 0;
  if ( !IsRectEmpty(a2) )
  {
    right = a2->right;
    v10 = 2 * a3;
    left = a2->left;
    v12 = right - a2->left;
    if ( v12 < 0 )
      v12 = 0;
    if ( v12 < v10 )
      goto LABEL_13;
    bottom = a2->bottom;
    top = a2->top;
    v15 = bottom - top;
    if ( bottom - top < 0 )
      v15 = 0;
    if ( v15 < v10 )
    {
LABEL_13:
      v20 = CProjectionBorderVisual::_AddRectInstruction(this, (const struct tagRECT *)((char *)this + 264), a4);
      v5 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x48u);
    }
    else
    {
      v16 = top + a3;
      v22.top = a2->top;
      v22.left = left;
      v29 = left + a3;
      v17 = bottom - a3;
      v22.right = right;
      v22.bottom = v16;
      v23 = left;
      v31 = right - a3;
      v18 = &v22;
      v24 = v17;
      v25 = right;
      v26 = bottom;
      v27 = left;
      v28 = v16;
      v30 = v17;
      v32 = v16;
      v33 = right;
      v34 = v17;
      while ( 1 )
      {
        v19 = CProjectionBorderVisual::_AddRectInstruction(this, v18, a4);
        v5 = v19;
        if ( v19 < 0 )
          break;
        if ( ++v18 == (struct tagRECT *)&v35 )
          return v5;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x55u);
    }
  }
  return v5;
}
