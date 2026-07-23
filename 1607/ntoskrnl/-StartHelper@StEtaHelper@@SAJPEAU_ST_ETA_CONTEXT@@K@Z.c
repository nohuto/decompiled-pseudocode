/*
 * XREFs of ?StartHelper@StEtaHelper@@SAJPEAU_ST_ETA_CONTEXT@@K@Z @ 0x1400057A0
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140005158 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmcCacheStart @ 0x14069A334 (SmcCacheStart.c)
 * Callees:
 *     StEtaStart @ 0x140005860 (StEtaStart.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall StEtaHelper::StartHelper(struct _ST_ETA_CONTEXT *a1, unsigned int a2)
{
  _DWORD *v2; // rax
  unsigned int *v4; // rax
  __int64 v5; // [rsp+20h] [rbp-19h] BYREF
  _QWORD *v6; // [rsp+28h] [rbp-11h] BYREF
  _DWORD *v7; // [rsp+30h] [rbp-9h]
  _DWORD v8[2]; // [rsp+38h] [rbp-1h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp+7h] BYREF
  _DWORD v10[2]; // [rsp+48h] [rbp+Fh] BYREF
  _QWORD v11[5]; // [rsp+50h] [rbp+17h] BYREF
  int v12; // [rsp+78h] [rbp+3Fh]
  int v13; // [rsp+7Ch] [rbp+43h]

  v11[1] = 4096LL;
  v11[2] = 0x2000LL;
  v11[3] = 0x4000LL;
  v11[4] = 0x8000LL;
  v11[0] = 2048LL;
  v12 = -1;
  v13 = 0;
  v8[0] = -1;
  v8[1] = 100000000;
  v9[0] = -1;
  v9[1] = 0;
  v10[0] = -1;
  v10[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    v4 = (unsigned int *)v11;
    if ( a2 > 0x800 )
    {
      do
        v4 += 2;
      while ( *v4 < a2 );
    }
    *v4 = -1;
    v6 = v11;
    v2 = v8;
  }
  else
  {
    v6 = v9;
    v2 = v10;
  }
  v7 = v2;
  v5 = 983104LL;
  return StEtaStart(a1, &v6, &v5);
}
