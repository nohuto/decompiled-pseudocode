/*
 * XREFs of EnsureDpiServerInfoForDpi @ 0x1402A648C
 * Callers:
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 * Callees:
 *     GreTextInitialized @ 0x1400CE928 (GreTextInitialized.c)
 *     DeleteMetricsFont @ 0x14010FB44 (DeleteMetricsFont.c)
 *     CreateScaledFont @ 0x1401D0CC4 (CreateScaledFont.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

_UNKNOWN **__fastcall EnsureDpiServerInfoForDpi(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  INT v3; // edi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  struct HLFONT__ *v11; // rcx
  struct HLFONT__ *v12; // rcx
  int v13; // edi
  _BYTE v14[8]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v15; // [rsp+50h] [rbp-11h] BYREF
  int v16; // [rsp+58h] [rbp-9h] BYREF
  int v17; // [rsp+5Ch] [rbp-5h] BYREF
  __int64 v18; // [rsp+60h] [rbp-1h] BYREF
  int v19; // [rsp+68h] [rbp+7h] BYREF
  int v20; // [rsp+6Ch] [rbp+Bh] BYREF
  _BYTE v21[72]; // [rsp+70h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  result = &retaddr;
  v3 = a2;
  if ( !*(_DWORD *)a1 )
  {
    v5 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
    if ( (unsigned int)GreTextInitialized(v7, v6, v8) )
    {
      memset_0(v14, 0, 0x68uLL);
      if ( (unsigned int)CreateScaledFont(*(Gre::Base **)(v5 + 5208), &v15, v9, v3, &v16, &v17, 0LL) )
      {
        v11 = *(struct HLFONT__ **)(a1 + 8);
        *(_DWORD *)(a1 + 16) = v16;
        *(_DWORD *)(a1 + 20) = v17;
        *(_QWORD *)(a1 + 8) = v15;
        DeleteMetricsFont(v11);
      }
      if ( (unsigned int)CreateScaledFont(*(Gre::Base **)(v5 + 5224), &v18, v10, v3, &v19, &v20, (__int64)v21) )
      {
        v12 = *(struct HLFONT__ **)(a1 + 24);
        *(_DWORD *)(a1 + 32) = v19;
        *(_DWORD *)(a1 + 36) = v20;
        *(_QWORD *)(a1 + 24) = v18;
        DeleteMetricsFont(v12);
      }
      *(_DWORD *)a1 = 1;
    }
    v13 = *(_DWORD *)(v5 + 5204) * v3 + 48;
    result = (_UNKNOWN **)((unsigned int)((unsigned __int64)(715827883LL * v13) >> 32) >> 31);
    *(_DWORD *)(a1 + 4) = v13 / 96;
  }
  return result;
}
