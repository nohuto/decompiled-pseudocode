/*
 * XREFs of xxxPrintWindow @ 0x1C01E7E84
 * Callers:
 *     NtUserPrintWindow @ 0x1C021EA20 (NtUserPrintWindow.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     GetRedirectionFlags @ 0x1C006BF30 (GetRedirectionFlags.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00964A8 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0261A78 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v5; // r12d
  int v6; // r14d
  int v7; // r13d
  int v8; // r15d
  __int64 StyleWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  HWND *v12; // rbx
  __int128 v13; // xmm0
  __m128i v14; // xmm0
  int v15; // eax
  HDC DCEx; // rbx
  int v18; // [rsp+68h] [rbp-19h]
  __int128 v19; // [rsp+70h] [rbp-11h] BYREF
  __int64 v20; // [rsp+80h] [rbp-1h] BYREF
  __int32 v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+8Ch] [rbp+Bh]
  int v23; // [rsp+90h] [rbp+Fh] BYREF
  int v24; // [rsp+94h] [rbp+13h]
  int v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+9Ch] [rbp+1Bh]
  int v29; // [rsp+100h] [rbp+7Fh]

  v3 = 0;
  v29 = 0;
  v18 = a3 & 1;
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
      if ( (int)SetRedirectedWindow(a1, 8) < 0 )
      {
        if ( (*((_BYTE *)a1 + 50) & 0x20) != 0 )
          return 1;
        return v3;
      }
      *((_DWORD *)a1 + 72) |= 4u;
      v29 = 1;
    }
    v3 = 1;
    xxxInternalUpdateWindow(a1, 1u);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v6, v8, DCEx, v5, v7, 0x80CC0020, 0, 0);
    _ReleaseDC(DCEx);
    if ( v29 && (*((_DWORD *)a1 + 72) & 4) != 0 )
    {
      UnsetRedirectedWindow((HWND *)a1);
      *((_DWORD *)a1 + 72) &= ~4u;
    }
    return v3;
  }
  if ( (struct tagWND *)StyleWindow == a1 )
  {
LABEL_13:
    UserSessionSwitchLeaveCrit(v11, v10);
    v3 = GreSpDwmSyncCaptureSurfaceBits(*v12, a3, a2, v5, v7, v6, v8);
    EnterCrit(0LL, 1LL);
    return v3;
  }
  if ( v18 )
    v13 = *((_OWORD *)a1 + 8);
  else
    v13 = *((_OWORD *)a1 + 7);
  v19 = v13;
  v14 = *(__m128i *)(StyleWindow + 112);
  v15 = _mm_cvtsi128_si32(v14);
  HIDWORD(v19) -= v14.m128i_i32[1];
  DWORD1(v19) -= v14.m128i_i32[1];
  LODWORD(v19) = v19 - v15;
  DWORD2(v19) -= v15;
  v21 = v14.m128i_i32[2] - v15;
  v22 = v14.m128i_i32[3] - v14.m128i_i32[1];
  v20 = 0LL;
  v3 = IntersectRect(&v23, (int *)&v20, (int *)&v19);
  if ( v3 )
  {
    v5 = v23;
    v6 = v25 - v23;
    v7 = v24;
    v8 = v26 - v24;
    goto LABEL_13;
  }
  return v3;
}
