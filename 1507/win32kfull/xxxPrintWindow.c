/*
 * XREFs of xxxPrintWindow @ 0x1C01E7A14
 * Callers:
 *     NtUserPrintWindow @ 0x1C021EC20 (NtUserPrintWindow.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     GetRedirectionFlags @ 0x1C005945C (GetRedirectionFlags.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00DF658 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0263280 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v5; // r12d
  int v6; // r14d
  LONG v7; // r13d
  int v8; // r15d
  __int64 StyleWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  HWND *v12; // rbx
  __int128 v13; // xmm0
  __m128i v14; // xmm0
  int v15; // eax
  struct tagWND *v16; // rcx
  HDC DCEx; // rbx
  int v19; // [rsp+68h] [rbp-19h]
  __int128 v20; // [rsp+70h] [rbp-11h] BYREF
  __int64 v21; // [rsp+80h] [rbp-1h] BYREF
  __int32 v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+8Ch] [rbp+Bh]
  int v24; // [rsp+90h] [rbp+Fh] BYREF
  int v25; // [rsp+94h] [rbp+13h]
  int v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+9Ch] [rbp+1Bh]
  int v30; // [rsp+100h] [rbp+7Fh]

  v3 = 0;
  v30 = 0;
  v19 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v5 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 28);
    v6 = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
    v7 = *((_DWORD *)a1 + 33) - *((_DWORD *)a1 + 29);
    v8 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
  }
  else
  {
    v5 = 0;
    v6 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
    v7 = 0;
    v8 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
  }
  if ( (a3 & 2) == 0
    || !(unsigned int)IsWindowDesktopComposed(a1)
    || (StyleWindow = GetStyleWindow((__int64)a1, 2568), (v12 = (HWND *)StyleWindow) == 0LL) )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      if ( (int)SetRedirectedWindow(v16, 8) < 0 )
      {
        if ( (*((_BYTE *)a1 + 50) & 0x20) != 0 )
          return 1;
        return v3;
      }
      *((_DWORD *)a1 + 72) |= 4u;
      v30 = 1;
    }
    v3 = 1;
    xxxInternalUpdateWindow(a1, 1u);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v6, v8, DCEx, v5, v7, 0x80CC0020, 0, 0);
    _ReleaseDC(DCEx);
    if ( v30 && (*((_DWORD *)a1 + 72) & 4) != 0 )
    {
      UnsetRedirectedWindow(a1);
      *((_DWORD *)a1 + 72) &= ~4u;
    }
    return v3;
  }
  if ( (struct tagWND *)StyleWindow == a1 )
  {
LABEL_13:
    UserSessionSwitchLeaveCrit(v11, v10);
    v3 = GreSpDwmSyncCaptureSurfaceBits(*v12, a3, a2, v5, v7, v6, v8);
    EnterCrit(1LL);
    return v3;
  }
  if ( v19 )
    v13 = *((_OWORD *)a1 + 8);
  else
    v13 = *((_OWORD *)a1 + 7);
  v20 = v13;
  v14 = *(__m128i *)(StyleWindow + 112);
  v15 = _mm_cvtsi128_si32(v14);
  HIDWORD(v20) -= v14.m128i_i32[1];
  DWORD1(v20) -= v14.m128i_i32[1];
  LODWORD(v20) = v20 - v15;
  DWORD2(v20) -= v15;
  v22 = v14.m128i_i32[2] - v15;
  v23 = v14.m128i_i32[3] - v14.m128i_i32[1];
  v21 = 0LL;
  v3 = IntersectRect(&v24, (int *)&v21, (int *)&v20);
  if ( v3 )
  {
    v5 = v24;
    v6 = v26 - v24;
    v7 = v25;
    v8 = v27 - v25;
    goto LABEL_13;
  }
  return v3;
}
