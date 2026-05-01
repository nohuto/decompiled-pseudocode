/*
 * XREFs of _lambda_2f8a0e5b6c19c55ac3d2ed9ce9f7470d_::operator() @ 0x180003E2C
 * Callers:
 *     _lambda_2f8a0e5b6c19c55ac3d2ed9ce9f7470d_::_lambda_invoker_cdecl_ @ 0x180003F60 (_lambda_2f8a0e5b6c19c55ac3d2ed9ce9f7470d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

void __fastcall lambda_2f8a0e5b6c19c55ac3d2ed9ce9f7470d_::operator()(__int64 a1, __int64 a2)
{
  const unsigned __int16 *v2; // r8
  const unsigned __int16 *v3; // rcx
  __int64 v4; // rax
  const unsigned __int16 *v5; // r9
  const unsigned __int16 *v6; // rcx
  void *v7; // rcx
  void *v8; // rdx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  const unsigned __int16 *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  const unsigned __int16 *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  void *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  if ( hProvider > 5u )
  {
    v2 = &word_1800359D5;
    v3 = *(const unsigned __int16 **)(a2 + 48);
    v9 = *(_DWORD *)(a2 + 4);
    v12 = 4LL;
    v11 = &v9;
    LODWORD(v4) = 0;
    v5 = &word_1800359D5;
    if ( v3 )
    {
      v5 = v3;
      v4 = -1LL;
      do
        ++v4;
      while ( *((_BYTE *)v3 + v4) );
    }
    v6 = *(const unsigned __int16 **)(a2 + 40);
    v14 = v4 + 1;
    v16 = a2 + 56;
    LODWORD(v4) = 0;
    v13 = v5;
    v15 = 0;
    v17 = 4LL;
    if ( v6 )
    {
      v2 = v6;
      v4 = -1LL;
      do
        ++v4;
      while ( *((_BYTE *)v6 + v4) );
    }
    v7 = *(void **)(a2 + 16);
    v19 = v4 + 1;
    LODWORD(v4) = 0;
    v18 = v2;
    v8 = &unk_1800359D8;
    v20 = 0;
    if ( v7 )
    {
      v8 = v7;
      v4 = -1LL;
      do
        ++v4;
      while ( *((_WORD *)v7 + v4) );
    }
    v21 = v8;
    v22 = 2 * v4 + 2;
    v23 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180041A81, 0LL, 0LL, 7u, &pData);
  }
}
