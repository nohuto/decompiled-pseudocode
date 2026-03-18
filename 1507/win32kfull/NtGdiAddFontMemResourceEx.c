/*
 * XREFs of NtGdiAddFontMemResourceEx @ 0x1C02A6150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     GreAddFontMemResourceEx @ 0x1C027ED0C (GreAddFontMemResourceEx.c)
 *     GreRemoveFontMemResourceEx @ 0x1C027FE70 (GreRemoveFontMemResourceEx.c)
 */

__int64 __fastcall NtGdiAddFontMemResourceEx(
        struct tagDOWNLOADFONTHEADER *a1,
        int a2,
        _BYTE *a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v5; // r15
  _BYTE *v6; // r10
  int v9; // edi
  __int64 v10; // rsi
  unsigned int *v11; // r14
  unsigned int v13; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE *v14; // [rsp+40h] [rbp-B8h]
  unsigned int v15[2]; // [rsp+48h] [rbp-B0h]
  int v16; // [rsp+50h] [rbp-A8h]
  struct tagDOWNLOADFONTHEADER *v17; // [rsp+58h] [rbp-A0h]
  _BYTE v18[4]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-94h]

  v5 = a4;
  v6 = a3;
  v17 = a1;
  v16 = a2;
  v14 = a3;
  v13 = a4;
  v9 = 1;
  v10 = 0LL;
  if ( !a2 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  v11 = a5;
  if ( !a5 )
    return 0LL;
  if ( a4 )
  {
    if ( a4 > 0x48 )
      goto LABEL_9;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v6 = (_BYTE *)W32UserProbeAddress;
    memmove(v18, v6, a4);
    v6 = v18;
    v14 = v18;
    if ( v5 != 4LL * v19 + 8 )
LABEL_9:
      v9 = 0;
  }
  else
  {
    v6 = 0LL;
    v14 = 0LL;
  }
  if ( v9 )
  {
    v10 = GreAddFontMemResourceEx(a1, a2, (struct tagDESIGNVECTOR *)v6, v5, &v13);
    *(_QWORD *)v15 = v10;
    if ( v10 )
    {
      if ( (unsigned __int64)a5 >= W32UserProbeAddress )
        v11 = (unsigned int *)W32UserProbeAddress;
      *v11 = v13;
    }
  }
  return v10;
}
