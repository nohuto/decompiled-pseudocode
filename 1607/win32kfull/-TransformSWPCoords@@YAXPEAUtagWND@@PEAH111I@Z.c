/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C02109F8
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00A5A00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C00A62F0 (NtUserSetWindowPos.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int16 v24; // ax
  int v25; // [rsp+20h] [rbp-28h] BYREF
  int v26; // [rsp+24h] [rbp-24h]
  int v27; // [rsp+28h] [rbp-20h]
  int v28; // [rsp+2Ch] [rbp-1Ch]

  if ( (a6 & 3) == 0 )
  {
    v10 = *a2;
    v11 = *a3;
    v25 = v10;
    v27 = *a4 + v10;
    v12 = v11 + *a5;
    v26 = v11;
    v28 = v12;
    TransformRectBetweenCoordinateSpaces(&v25, &v25, a1, 0LL);
    v13 = v26;
    v14 = v27 - v25;
    *a2 = v25;
    *a3 = v13;
    *a4 = v14;
    v15 = v28 - v13;
LABEL_8:
    *a5 = v15;
    return;
  }
  if ( (a6 & 2) == 0 )
  {
    v25 = *a2;
    v26 = *a3;
    TransformPointBetweenCoordinateSpaces(&v25, &v25, a1, 0LL);
    *a2 = v25;
    *a3 = v26;
    return;
  }
  if ( (a6 & 1) == 0 )
  {
    v16 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 43));
    v17 = v16;
    if ( v16 )
    {
      v18 = (unsigned __int16)MonitorDpiFromDpiAwarenessContext(v16, *((unsigned int *)a1 + 88));
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22);
      v24 = MonitorDpiFromDpiAwarenessContext(v17, CurrentThreadDpiAwarenessContext);
      *a4 = v18 * *a4 / v24;
      v15 = v18 * *a5 / v24;
      goto LABEL_8;
    }
  }
}
