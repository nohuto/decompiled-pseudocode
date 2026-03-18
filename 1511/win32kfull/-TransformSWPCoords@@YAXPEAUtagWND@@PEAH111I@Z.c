/*
 * XREFs of ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C014D494
 * Callers:
 *     NtUserSetWindowPos @ 0x1C0074CF0 (NtUserSetWindowPos.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00755B0 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall TransformSWPCoords(struct tagWND *a1, int *a2, int *a3, int *a4, int *a5, char a6)
{
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ebx
  unsigned __int16 v13; // ax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+24h] [rbp-24h]
  int v22; // [rsp+28h] [rbp-20h]
  int v23; // [rsp+2Ch] [rbp-1Ch]

  if ( (a6 & 3) == 0 )
  {
    v15 = *a2;
    v16 = *a3;
    v20 = v15;
    v22 = *a4 + v15;
    v17 = v16 + *a5;
    v21 = v16;
    v23 = v17;
    TransformRectBetweenCoordinateSpaces(&v20, &v20, a1, 0LL);
    v18 = v21;
    v19 = v22 - v20;
    *a2 = v20;
    *a3 = v18;
    *a4 = v19;
    v14 = v23 - v18;
    goto LABEL_6;
  }
  if ( (a6 & 2) == 0 )
  {
    v20 = *a2;
    v21 = *a3;
    TransformPointBetweenCoordinateSpaces(&v20, &v20, a1, 0LL);
    *a2 = v20;
    *a3 = v21;
    return;
  }
  if ( (a6 & 1) == 0 )
  {
    v10 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 44));
    v11 = v10;
    if ( v10 )
    {
      v12 = (unsigned __int16)MonitorDpiFromProcess(v10, *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL));
      v13 = MonitorDpiFromProcess(v11, 0LL);
      *a4 = v12 * *a4 / v13;
      v14 = v12 * *a5 / v13;
LABEL_6:
      *a5 = v14;
    }
  }
}
