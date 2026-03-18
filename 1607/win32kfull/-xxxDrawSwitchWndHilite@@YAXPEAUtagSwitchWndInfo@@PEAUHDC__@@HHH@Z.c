/*
 * XREFs of ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F7A6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F8078 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     TextCopy @ 0x1C0067E84 (TextCopy.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     RtlInitLargeUnicodeString @ 0x1C009D208 (RtlInitLargeUnicodeString.c)
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     DrawFrame @ 0x1C0123204 (DrawFrame.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     DrawTextExWorker @ 0x1C0247624 (DrawTextExWorker.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

void __fastcall xxxDrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // r15d
  int v10; // ecx
  int v11; // esi
  int v12; // r12d
  int v13; // r13d
  __int64 v14; // rax
  unsigned __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27[4]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-A0h] BYREF
  RECT v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v31[3]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v32[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v33[16]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v34[256]; // [rsp+D0h] [rbp-30h] BYREF

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
  v10 = *((_DWORD *)a1 + 29);
  v11 = *((_DWORD *)a1 + 22) + v10 * a4;
  v27[0] = *((_DWORD *)a1 + 21) + v10 * a3;
  v27[1] = v11;
  v27[2] = v27[0] + v10;
  v27[3] = v11 + v10;
  DrawFrame(DCEx, v27, 2, 8 * (a5 != 0 ? 13 : 15));
  if ( a5 )
  {
    BugCheckParameter3[0] = 0LL;
    v12 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 5032LL));
    v13 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 5020LL));
    GetDPIServerInfo();
    v14 = GreSelectFontInternal(DCEx);
    v15 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    LOBYTE(v16) = 1;
    BugCheckParameter3[1] = v14;
    v19 = HMValidateHandleNoSecure(*v15, v16, v17, v18);
    v20 = v19;
    if ( v19 )
    {
      if ( *(_DWORD *)(v19 + 216) )
        TextCopy(v19 + 216, v34, 256);
      else
        v34[0] = 0;
      v29 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v29, *(HBRUSH *)(gpsi + 5208LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22, v23);
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 712LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 440) & 1) != 0 )
      {
        LODWORD(v30[0]) = 20;
        v30[1] = 0LL;
        DrawTextExWorker(DCEx, 34848, (__int64)v30);
      }
      else
      {
        RtlInitLargeUnicodeString((__int64)v33, (__int64)v34);
        *(RECT *)v32 = v29;
        v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v31;
        ++*(_DWORD *)(v20 + 8);
        v31[1] = v20;
        xxxSendTransformableMessageTimeout(
          (struct tagWND *)v20,
          140LL,
          (__int64)DCEx,
          (__int64)v32,
          2,
          100,
          (__int64 *)BugCheckParameter3,
          1,
          0);
        ThreadUnlock1(v26, v25);
      }
    }
    GreSelectFontInternal(DCEx);
    GreSetBkColor(DCEx, v13);
    GreSetTextColor(DCEx, v12);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
