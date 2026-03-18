/*
 * XREFs of ?AddDirtyRect@CGdiSpriteBitmap@@UEAAJAEBUtagRECT@@@Z @ 0x18002B5E0
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180084E80 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A30CC (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddDirtyRect(CGdiSpriteBitmap *this, const struct tagRECT *a2)
{
  __int64 v2; // r9
  unsigned int v5; // ebx
  bool v6; // sf
  __int64 v7; // r8
  LONG top; // edx
  LONG bottom; // eax
  LONG v10; // edx
  LONG right; // ecx
  int v12; // ecx
  LONG v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  bool v16; // cc
  __int64 (__fastcall ***v17)(_QWORD, GUID *, CBitmap **); // r9
  int v18; // eax
  __int64 (__fastcall *v19)(CBitmap *__hidden, const struct tagRECT *); // rax
  int v20; // eax
  CBitmap *v22; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v23; // [rsp+38h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this - 1);
  v22 = 0LL;
  v5 = 0;
  if ( v2 )
  {
    v6 = a2->left - *((_DWORD *)this + 14) < 0;
    v7 = (unsigned int)(a2->left - *((_DWORD *)this + 14));
    top = a2->top;
    bottom = a2->bottom;
    if ( v6 )
      v7 = 0LL;
    v10 = top - *((_DWORD *)this + 16);
    right = a2->right;
    if ( v10 < 0 )
      v10 = 0;
    v23.left = v7;
    v12 = right - a2->left;
    v23.top = v10;
    if ( v12 < 0 )
      v12 = 0;
    v13 = v7 + v12;
    v14 = bottom - a2->top;
    if ( v14 < 0 )
      v14 = 0;
    v15 = (unsigned int)(v14 + v10);
    if ( *((_DWORD *)this - 4) < v13 )
      v13 = *((_DWORD *)this - 4);
    v16 = *((_DWORD *)this - 3) < (int)v15;
    v23.right = v13;
    if ( v16 )
      v15 = *((unsigned int *)this - 3);
    v23.bottom = v15;
    if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v23, v15, v7, v2) )
    {
      v18 = (**v17)(v17, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v22);
      v5 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x246u);
      }
      else
      {
        v19 = *(__int64 (__fastcall **)(CBitmap *__hidden, const struct tagRECT *))(*(_QWORD *)v22 + 40LL);
        if ( v19 == CBitmap::AddDirtyRect )
          v20 = CBitmap::AddDirtyRect(v22, &v23);
        else
          v20 = v19(v22, &v23);
        v5 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x248u);
      }
      if ( v22 )
        (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  return v5;
}
