/*
 * XREFs of _DeferWindowPosAndBand @ 0x1C0074600
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00755B0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowBand @ 0x1C00FDC60 (NtUserSetWindowBand.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     _DeferWindowPos @ 0x1C00750A4 (_DeferWindowPos.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     IsValidBandForProcess @ 0x1C0086DF0 (IsValidBandForProcess.c)
 *     IsValidBand @ 0x1C00FC920 (IsValidBand.c)
 */

__int64 __fastcall DeferWindowPosAndBand(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  int v10; // ebx
  unsigned int v15; // ecx
  unsigned int v16; // edi
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r10
  int v25; // ecx
  int v26; // eax
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rax

  v10 = 0;
  if ( !a10 )
  {
    v15 = a8;
    v16 = 0;
    goto LABEL_3;
  }
  v16 = a9;
  if ( a3 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v26 = *(_DWORD *)(a3 + 304);
    if ( v26 != a9 && *(_DWORD *)(a2 + 304) != v26 )
      goto LABEL_35;
  }
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    goto LABEL_35;
  if ( !(unsigned int)IsValidBand(a9, v22, v23) )
    goto LABEL_39;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v24 + 376), a9, 0LL) || a9 == 15 || *(_DWORD *)(a2 + 304) == 15 )
  {
LABEL_35:
    v25 = 5;
LABEL_40:
    UserSetLastError(v25);
    return 0LL;
  }
  if ( *(_QWORD *)(a2 + 88) != GetDesktopWindow(a2) || *(char *)(a2 + 44) < 0 )
    goto LABEL_39;
  if ( a3 > 1 )
  {
    if ( a3 + 2 > 1 )
    {
      if ( *(_DWORD *)(a3 + 304) == a9 )
        goto LABEL_33;
      v27 = *(_DWORD *)(a1 + 28) - 1;
      if ( v27 >= 0 )
      {
        v28 = *(_QWORD *)(a1 + 40);
        v29 = v27;
        v30 = (_QWORD *)(v28 + 168LL * v27);
        while ( *v30 != *(_QWORD *)a3 )
        {
          --v27;
          v30 -= 21;
          if ( --v29 < 0 )
            goto LABEL_51;
        }
        if ( *(_DWORD *)(168LL * v27 + v28 + 152) != a9 )
          goto LABEL_39;
      }
LABEL_51:
      if ( v27 != -1 )
        goto LABEL_33;
    }
    else if ( a9 == 1 )
    {
      goto LABEL_33;
    }
LABEL_39:
    v25 = 87;
    goto LABEL_40;
  }
LABEL_33:
  v15 = a8 & 0xFFF9FBFF | 0x60000;
LABEL_3:
  v17 = 66559;
  if ( a10 )
    v17 = 459775;
  if ( (~v17 & v15) != 0 )
    goto LABEL_39;
  if ( (v15 & 2) != 0 )
  {
    v18 = a5;
  }
  else
  {
    if ( a4 > 0x7FFF )
    {
      a4 = 0x7FFF;
    }
    else if ( a4 < -32768 )
    {
      a4 = -32768;
    }
    v18 = a5;
    if ( a5 > 0x7FFF )
    {
      v18 = 0x7FFF;
    }
    else if ( a5 < -32768 )
    {
      v18 = -32768;
    }
  }
  v19 = a6;
  if ( (v15 & 1) != 0 )
  {
    v10 = a7;
  }
  else
  {
    if ( a6 < 0 )
    {
      v19 = 0;
    }
    else if ( a6 > 0x7FFF )
    {
      v19 = 0x7FFF;
    }
    v20 = a7;
    if ( a7 >= 0 )
    {
      if ( a7 > 0x7FFF )
        v20 = 0x7FFF;
      v10 = v20;
    }
  }
  return DeferWindowPos(a1, a2, a3, a4, v18, v19, v10, v15, v16);
}
