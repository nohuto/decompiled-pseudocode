/*
 * XREFs of ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01D7290
 * Callers:
 *     DelegateReleasePointerMessage @ 0x1C01D7470 (DelegateReleasePointerMessage.c)
 * Callees:
 *     _DelegateCapturePointers @ 0x1C01D7AF4 (_DelegateCapturePointers.c)
 *     ?DelegateCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREDATA@@H@Z @ 0x1C01F38E4 (-DelegateCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREDATA@@H@Z.c)
 */

__int64 __fastcall DelegateCapturePointerImplicit(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // r9d
  struct tagWND *v3; // rax
  int v4; // r9d
  __int16 v5; // r10
  int v6; // r11d
  int v7; // ecx
  _WORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+24h] [rbp-24h]
  struct tagWND *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 24);
    v9[0] = *(_WORD *)(v1 + 20);
    v10 = v2;
    v3 = DelegateCaptureInt((struct tagPOINTERCAPTUREDATA *)v1, 1);
    v7 = v6;
    v11 = v3;
    LOBYTE(v7) = v3 != 0LL;
    v12 = v7;
  }
  else
  {
    v3 = v11;
    v4 = v10;
    v5 = v9[0];
  }
  if ( v5 && v4 && v3 )
    return DelegateCapturePointers(1LL, v9);
  else
    return 0LL;
}
