/*
 * XREFs of EtwTraceLayoutChangeStop @ 0x1C007B860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     Template_qqzz @ 0x1C00AF3A8 (Template_qqzz.c)
 *     _GetClientRect @ 0x1C00D50F4 (_GetClientRect.c)
 */

void __fastcall EtwTraceLayoutChangeStop(__int64 a1, int a2, __int64 a3)
{
  PEPROCESS *v5; // rcx
  PACCESS_TOKEN v6; // rbx
  int v7; // edx
  int v8; // r8d
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v11[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v12; // [rsp+58h] [rbp-A8h]
  unsigned __int16 v13; // [rsp+5Ch] [rbp-A4h]
  _WORD v14[72]; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v15[128]; // [rsp+F0h] [rbp-10h] BYREF

  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000LL) != 0 )
  {
    memset(v15, 0, sizeof(v15));
    memset(v14, 0, 132);
    v5 = *(PEPROCESS **)(a1 + 376);
    v10 = 256LL;
    v9 = 132LL;
    v6 = PsReferencePrimaryToken(*v5);
    if ( v6 )
    {
      RtlQueryPackageIdentity(v6, v15, &v10, v14, &v9, 0LL);
      GetClientRect(a3, v11);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000LL) != 0 )
        Template_qqzz(v12 | (v13 << 16), v7, v8, a2, v12, (__int64)v14, (__int64)v15);
      PsDereferencePrimaryToken(v6);
    }
  }
}
