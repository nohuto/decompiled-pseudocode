/*
 * XREFs of ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FFBA8
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01FFE60 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C02009B0 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     RtlInitLargeUnicodeString @ 0x1C0052BC8 (RtlInitLargeUnicodeString.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     TextCopy @ 0x1C00E38A8 (TextCopy.c)
 *     DrawFrame @ 0x1C00F9D40 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     DrawTextExWorker @ 0x1C024B358 (DrawTextExWorker.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

void __fastcall xxxDrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // esi
  int v10; // ecx
  int v11; // r12d
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  RECT v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h] BYREF
  __int64 v27[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[3]; // [rsp+98h] [rbp-68h] BYREF
  RECT v29; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v30[16]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v31[256]; // [rsp+D0h] [rbp-30h] BYREF

  DCEx = a2;
  if ( a2 )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    DCEx = (HDC)_GetDCEx(gspwndAltTab, 0LL, 0x10000LL);
  }
  v23[0] = *((_DWORD *)a1 + 21) + 43 * a3;
  v10 = *((_DWORD *)a1 + 22) + 43 * a4;
  v23[2] = v23[0] + 43;
  v23[1] = v10;
  v23[3] = v10 + 43;
  DrawFrame(DCEx, v23, 2, 8 * (a5 != 0 ? 13 : 15));
  if ( a5 )
  {
    v26 = 0LL;
    v11 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 3640LL));
    v12 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 3628LL));
    GetDPIServerInfo(v14, v13, v15);
    v16 = GreSelectFontInternal(DCEx);
    v17 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    v25 = v16;
    v18 = HMValidateHandleNoSecure(*v17, 1);
    v19 = v18;
    if ( v18 )
    {
      if ( *(_DWORD *)(v18 + 216) )
        TextCopy(v18 + 216, v31, 256);
      else
        v31[0] = 0;
      v24 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v24, *(HBRUSH *)(gpsi + 3816LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 384) + 720LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 448) & 1) != 0 )
      {
        LODWORD(v27[0]) = 20;
        v27[1] = 0LL;
        DrawTextExWorker(DCEx, 34848, (__int64)v27);
      }
      else
      {
        RtlInitLargeUnicodeString((__int64)v30, (__int64)v31);
        v29 = v24;
        v28[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v28;
        ++*(_DWORD *)(v19 + 8);
        v28[1] = v19;
        xxxSendTransformableMessageTimeout(
          (struct tagWND *)v19,
          0x8Cu,
          (unsigned __int64)DCEx,
          (struct _LARGE_STRING *)&v29,
          2,
          100,
          &v26,
          1,
          0);
        ThreadUnlock1(v22, v21);
      }
    }
    GreSelectFontInternal(DCEx);
    GreSetBkColor(DCEx, v12);
    GreSetTextColor(DCEx, v11);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
