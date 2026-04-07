/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x1800482D4
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180047A4C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x1800484E4 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
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
  unsigned int v12; // edi
  HRESULT ThemeRect; // eax
  unsigned int v14; // ebx
  LONG top; // ecx
  int v16; // eax
  int v17; // esi
  int v18; // edx
  __int64 v19; // r13
  int *v20; // r15
  struct tagRECT *v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // rax
  int v24; // eax
  int v27; // [rsp+34h] [rbp-9Dh]
  int v29; // [rsp+3Ch] [rbp-95h]
  void *v30; // [rsp+50h] [rbp-81h]
  struct tagRECT v31; // [rsp+58h] [rbp-79h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-69h] BYREF
  struct tagRECT pRect; // [rsp+78h] [rbp-59h] BYREF
  _DWORD v34[4]; // [rsp+88h] [rbp-49h] BYREF
  _DWORD v35[6]; // [rsp+98h] [rbp-39h] BYREF
  int v36; // [rsp+B0h] [rbp-21h]
  LONG bottom; // [rsp+B4h] [rbp-1Dh]
  int v38; // [rsp+B8h] [rbp-19h]
  LONG v39; // [rsp+BCh] [rbp-15h]
  LONG right; // [rsp+C0h] [rbp-11h]
  LONG v41; // [rsp+C4h] [rbp-Dh]

  v8 = a7;
  v9 = a4;
  v10 = a8;
  v11 = a3;
  v29 = a2;
  v30 = a1;
  if ( (dword_1800BE768 & 1) == 0 )
  {
    dword_1800BE718 = -2147023728;
    dword_1800BE768 |= 1u;
  }
  v12 = 0;
  while ( 1 )
  {
    ThemeRect = GetThemeRect(a1, a2, 0, 8002, &pRect);
    v14 = ThemeRect;
    if ( ThemeRect < 0 && (_WORD)ThemeRect != 1168 )
      break;
    if ( (_WORD)ThemeRect == 1168 )
    {
      v14 = 0;
    }
    else
    {
      top = pRect.top;
      v16 = pRect.bottom - pRect.top;
      v34[0] = v9;
      v17 = 0;
      if ( pRect.bottom - pRect.top < 0 )
        v16 = 0;
      v18 = v16 / 2;
      v27 = v16 / 2;
      v34[1] = a5;
      v34[2] = a6;
      while ( 2 )
      {
        rc.left = pRect.left;
        v19 = v10;
        if ( !v17 )
          v19 = v8;
        rc.right = pRect.right;
        rc.top = top + v18 * v17;
        rc.bottom = v18 + rc.top;
        InflateRect(&rc, -1, -1);
        v20 = v34;
        v21 = (struct tagRECT *)v35;
        v35[0] = rc.left;
        v35[1] = rc.top;
        v35[2] = v11 + rc.left;
        v35[4] = v11 + rc.left;
        v35[3] = rc.bottom;
        v36 = rc.right - v11;
        v22 = 0;
        v38 = v36;
        v35[5] = rc.top;
        bottom = rc.bottom;
        v39 = rc.top;
        right = rc.right;
        v41 = rc.bottom;
        do
        {
          v23 = *v20;
          v31 = *v21;
          v24 = CBitmapSource::Create(
                  CTopLevelWindow::s_pbsNonClientAtlas,
                  &v31,
                  0LL,
                  (struct CBitmapSource **)(v19 + 8 * (v12 + 2 * v23) + 1488));
          v14 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1800BE718, 1LL, v24, 0x4BEu);
            return v14;
          }
          ++v22;
          ++v21;
          ++v20;
        }
        while ( v22 < 3 );
        v11 = a3;
        ++v17;
        v8 = a7;
        v10 = a8;
        if ( v17 < 2 )
        {
          top = pRect.top;
          v18 = v27;
          continue;
        }
        break;
      }
      v9 = a4;
    }
    if ( ++v12 >= 2 )
      return v14;
    a1 = v30;
    a2 = v29;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1800BE718, 1LL, ThemeRect, 0x492u);
  return v14;
}
