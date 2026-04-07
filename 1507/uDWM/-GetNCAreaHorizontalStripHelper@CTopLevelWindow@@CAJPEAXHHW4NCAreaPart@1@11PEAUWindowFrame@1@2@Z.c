/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180041E44
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180041274 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800420A4 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHorizontalStripHelper(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r15
  int v9; // esi
  __int64 v10; // r12
  int v11; // r14d
  unsigned int v13; // edi
  int v14; // edx
  HRESULT ThemeRect; // eax
  unsigned int v16; // ebx
  LONG top; // ecx
  int v18; // eax
  int v19; // esi
  int v20; // edx
  __int64 v21; // rax
  int *v22; // r15
  struct tagRECT *v23; // r12
  unsigned int v24; // r14d
  __int64 v25; // rax
  int v26; // eax
  int v30; // [rsp+38h] [rbp-A9h]
  __int64 v31; // [rsp+50h] [rbp-91h]
  void *v32; // [rsp+58h] [rbp-89h]
  struct tagRECT v33; // [rsp+60h] [rbp-81h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-71h] BYREF
  struct tagRECT pRect; // [rsp+80h] [rbp-61h] BYREF
  _DWORD v36[4]; // [rsp+90h] [rbp-51h] BYREF
  _DWORD v37[12]; // [rsp+A0h] [rbp-41h] BYREF

  v8 = a7;
  v9 = a4;
  v10 = a8;
  v11 = a3;
  v32 = a1;
  if ( (dword_1800BC758 & 1) == 0 )
  {
    dword_1800BC708 = -2147023728;
    dword_1800BC758 |= 1u;
  }
  v13 = 0;
  while ( 1 )
  {
    v14 = a2;
    if ( v13 == 1 )
    {
      switch ( a2 )
      {
        case 1:
          v14 = 50;
          break;
        case 47:
          v14 = 49;
          break;
        case 53:
          v14 = 61;
          break;
        case 54:
          v14 = 62;
          break;
      }
    }
    ThemeRect = GetThemeRect(a1, v14, 0, 8002, &pRect);
    v16 = ThemeRect;
    if ( ThemeRect < 0 && (_WORD)ThemeRect != 1168 )
      break;
    if ( (_WORD)ThemeRect == 1168 )
    {
      v16 = 0;
    }
    else
    {
      top = pRect.top;
      v18 = pRect.bottom - pRect.top;
      v36[0] = v9;
      v19 = 0;
      if ( pRect.bottom - pRect.top < 0 )
        v18 = 0;
      v20 = v18 / 2;
      v30 = v18 / 2;
      v36[1] = a5;
      v36[2] = a6;
      while ( 2 )
      {
        v21 = v10;
        if ( !v19 )
          v21 = v8;
        v31 = v21;
        rc.left = pRect.left;
        rc.right = pRect.right;
        rc.top = top + v20 * v19;
        rc.bottom = v20 + rc.top;
        InflateRect(&rc, -1, -1);
        v22 = v36;
        v23 = (struct tagRECT *)v37;
        v37[0] = rc.left;
        v37[1] = rc.top;
        v37[2] = v11 + rc.left;
        v37[4] = v11 + rc.left;
        v37[3] = rc.bottom;
        v37[6] = rc.right - v11;
        v37[8] = rc.right - v11;
        v24 = 0;
        v37[5] = rc.top;
        v37[7] = rc.bottom;
        v37[9] = rc.top;
        v37[10] = rc.right;
        v37[11] = rc.bottom;
        do
        {
          v25 = *v22;
          v33 = *v23;
          v26 = CBitmapSource::Create(
                  CTopLevelWindow::s_pbsNonClientAtlas,
                  &v33,
                  0LL,
                  (struct CBitmapSource **)(v31 + 8 * (v13 + 2 * v25 + 98)));
          v16 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1800BC708, 1LL, v26, 0x4C5u);
            return v16;
          }
          ++v24;
          ++v23;
          ++v22;
        }
        while ( v24 < 3 );
        v11 = a3;
        ++v19;
        v8 = a7;
        v10 = a8;
        if ( v19 < 2 )
        {
          top = pRect.top;
          v20 = v30;
          continue;
        }
        break;
      }
      v9 = a4;
    }
    if ( ++v13 >= 2 )
      return v16;
    a1 = v32;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1800BC708, 1LL, ThemeRect, 0x499u);
  return v16;
}
