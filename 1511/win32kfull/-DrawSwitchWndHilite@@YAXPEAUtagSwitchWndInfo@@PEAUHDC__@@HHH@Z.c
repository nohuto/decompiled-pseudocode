/*
 * XREFs of ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FF50C
 * Callers:
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C0200250 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C0200D50 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     RtlInitLargeUnicodeString @ 0x1C00900B8 (RtlInitLargeUnicodeString.c)
 *     DrawFrame @ 0x1C00CC21C (DrawFrame.c)
 *     TextCopy @ 0x1C00E5268 (TextCopy.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     DrawTextExWorker @ 0x1C024B318 (DrawTextExWorker.c)
 */

void __fastcall DrawSwitchWndHilite(struct tagSwitchWndInfo *a1, HDC a2, int a3, int a4, int a5)
{
  HDC DCEx; // rdi
  int v9; // esi
  int v10; // ecx
  int v11; // r12d
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 DPIServerInfo; // rax
  __int64 v17; // rax
  unsigned __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  RECT v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  __int64 v28[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v29[3]; // [rsp+98h] [rbp-68h] BYREF
  RECT v30; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v31[16]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v32[256]; // [rsp+D0h] [rbp-30h] BYREF

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
  v24[0] = *((_DWORD *)a1 + 21) + 43 * a3;
  v10 = *((_DWORD *)a1 + 22) + 43 * a4;
  v24[2] = v24[0] + 43;
  v24[1] = v10;
  v24[3] = v10 + 43;
  DrawFrame(DCEx, v24, 2, 8 * (a5 != 0 ? 13 : 15));
  if ( a5 )
  {
    v27 = 0LL;
    v11 = GreSetTextColor(DCEx, *(_DWORD *)(gpsi + 3640LL));
    v12 = GreSetBkColor(DCEx, *(_DWORD *)(gpsi + 3628LL));
    DPIServerInfo = GetDPIServerInfo(v14, v13, v15);
    v17 = GreSelectFont((__int64)DCEx, *(_QWORD *)(DPIServerInfo + 8));
    v18 = (unsigned __int64 *)*((_QWORD *)a1 + 4);
    v26 = v17;
    v19 = HMValidateHandleNoSecure(*v18, 1);
    v20 = v19;
    if ( v19 )
    {
      if ( *(_DWORD *)(v19 + 216) )
        TextCopy(v19 + 216, v32, 256);
      else
        v32[0] = 0;
      v25 = *(RECT *)((char *)a1 + 92);
      FillRect(DCEx, &v25, *(HBRUSH *)(gpsi + 3816LL));
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( (*(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 376) + 720LL) & 0xF) == 0
        || (*(_DWORD *)(ThreadWin32Thread + 440) & 1) != 0 )
      {
        LODWORD(v28[0]) = 20;
        v28[1] = 0LL;
        DrawTextExWorker(DCEx, 34848, (__int64)v28);
      }
      else
      {
        RtlInitLargeUnicodeString((__int64)v31, (__int64)v32);
        v30 = v25;
        v29[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v29;
        ++*(_DWORD *)(v20 + 8);
        v29[1] = v20;
        xxxSendTransformableMessageTimeout(
          (struct tagWND *)v20,
          140LL,
          (unsigned __int64)DCEx,
          (__int64)&v30,
          2,
          100,
          &v27,
          1,
          0);
        ThreadUnlock1(v23, v22);
      }
    }
    GreSelectFont((__int64)DCEx, v26);
    GreSetBkColor(DCEx, v12);
    GreSetTextColor(DCEx, v11);
  }
  if ( v9 )
    _ReleaseDC(DCEx);
}
