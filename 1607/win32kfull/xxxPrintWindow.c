/*
 * XREFs of xxxPrintWindow @ 0x1C01DE6D4
 * Callers:
 *     NtUserPrintWindow @ 0x1C0218650 (NtUserPrintWindow.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     GetRedirectionFlags @ 0x1C0053B04 (GetRedirectionFlags.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025F3CC (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v5; // r12d
  int v6; // r14d
  LONG v7; // r13d
  int v8; // r15d
  __int64 StyleWindow; // rax
  __int64 v10; // rcx
  HWND *v11; // rbx
  __int128 v12; // xmm0
  __m128i v13; // xmm0
  int v14; // eax
  HDC DCEx; // rbx
  int v17; // [rsp+68h] [rbp-19h]
  __int128 v18; // [rsp+70h] [rbp-11h] BYREF
  __int64 v19; // [rsp+80h] [rbp-1h] BYREF
  __int32 v20; // [rsp+88h] [rbp+7h]
  int v21; // [rsp+8Ch] [rbp+Bh]
  int v22; // [rsp+90h] [rbp+Fh] BYREF
  int v23; // [rsp+94h] [rbp+13h]
  int v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+9Ch] [rbp+1Bh]
  int v28; // [rsp+100h] [rbp+7Fh]

  v3 = 0;
  v28 = 0;
  v17 = a3 & 1;
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
    || (StyleWindow = GetStyleWindow((__int64)a1, 2568), (v11 = (HWND *)StyleWindow) == 0LL) )
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      if ( (int)SetRedirectedWindow(a1, 8) < 0 )
      {
        if ( (*((_BYTE *)a1 + 50) & 0x20) != 0 )
          return 1;
        return v3;
      }
      *((_DWORD *)a1 + 72) |= 4u;
      v28 = 1;
    }
    v3 = 1;
    xxxInternalUpdateWindow(a1, 1u);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v6, v8, DCEx, v5, v7, 0x80CC0020, 0, 0);
    _ReleaseDC(DCEx);
    if ( v28 && (*((_DWORD *)a1 + 72) & 4) != 0 )
    {
      UnsetRedirectedWindow(a1);
      *((_DWORD *)a1 + 72) &= ~4u;
    }
    return v3;
  }
  if ( (struct tagWND *)StyleWindow != a1 )
  {
    if ( v17 )
      v12 = *((_OWORD *)a1 + 8);
    else
      v12 = *((_OWORD *)a1 + 7);
    v18 = v12;
    v13 = *(__m128i *)(StyleWindow + 112);
    v14 = _mm_cvtsi128_si32(v13);
    HIDWORD(v18) -= v13.m128i_i32[1];
    DWORD1(v18) -= v13.m128i_i32[1];
    LODWORD(v18) = v18 - v14;
    DWORD2(v18) -= v14;
    v20 = v13.m128i_i32[2] - v14;
    v21 = v13.m128i_i32[3] - v13.m128i_i32[1];
    v19 = 0LL;
    v3 = IntersectRect(&v22, (int *)&v19, (int *)&v18);
    if ( !v3 )
      return v3;
    v5 = v22;
    v6 = v24 - v22;
    v7 = v23;
    v8 = v25 - v23;
  }
  if ( gdwInAtomicOperation )
  {
    v10 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation);
  v3 = GreSpDwmSyncCaptureSurfaceBits(*v11, a3, a2, v5, v7, v6, v8);
  EnterCrit(0LL, 1LL);
  return v3;
}
