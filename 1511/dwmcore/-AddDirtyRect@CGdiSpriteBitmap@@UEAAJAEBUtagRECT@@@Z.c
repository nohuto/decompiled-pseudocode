/*
 * XREFs of ?AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z @ 0x18001B6A0
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180065E68 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180088BC0 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddDirtyRect(CGdiSpriteBitmap *this, const struct tagRECT *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, CBitmap **); // rsi
  unsigned int v5; // edi
  bool v6; // sf
  LONG v7; // r8d
  LONG top; // edx
  LONG bottom; // eax
  LONG v10; // edx
  LONG right; // ecx
  int v12; // ecx
  LONG v13; // ecx
  int v14; // eax
  LONG v15; // edx
  bool v16; // cc
  int v17; // eax
  __int64 (__fastcall *v18)(CBitmap *__hidden, const struct tagRECT *); // rdi
  int v19; // eax
  CBitmap *v21; // [rsp+30h] [rbp-38h] BYREF
  struct tagRECT v22; // [rsp+38h] [rbp-30h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, CBitmap **))*((_QWORD *)this - 1);
  v21 = 0LL;
  v5 = 0;
  if ( v2 )
  {
    v6 = a2->left - *((_DWORD *)this + 14) < 0;
    v7 = a2->left - *((_DWORD *)this + 14);
    top = a2->top;
    bottom = a2->bottom;
    if ( v6 )
      v7 = 0;
    v10 = top - *((_DWORD *)this + 16);
    right = a2->right;
    if ( v10 < 0 )
      v10 = 0;
    v22.left = v7;
    v12 = right - a2->left;
    v22.top = v10;
    if ( v12 < 0 )
      v12 = 0;
    v13 = v7 + v12;
    v14 = bottom - a2->top;
    if ( v14 < 0 )
      v14 = 0;
    v15 = v14 + v10;
    if ( *((_DWORD *)this - 4) < v13 )
      v13 = *((_DWORD *)this - 4);
    v16 = *((_DWORD *)this - 3) < v15;
    v22.right = v13;
    if ( v16 )
      v15 = *((_DWORD *)this - 3);
    v22.bottom = v15;
    if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v22) )
    {
      v17 = (**v2)(v2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v21);
      v5 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x246u);
      }
      else
      {
        v18 = *(__int64 (__fastcall **)(CBitmap *__hidden, const struct tagRECT *))(*(_QWORD *)v21 + 40LL);
        if ( v18 == CBitmap::AddDirtyRect )
          v19 = CBitmap::AddDirtyRect(v21, &v22);
        else
          v19 = v18(v21, &v22);
        v5 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x248u);
      }
      if ( v21 )
        (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  return v5;
}
