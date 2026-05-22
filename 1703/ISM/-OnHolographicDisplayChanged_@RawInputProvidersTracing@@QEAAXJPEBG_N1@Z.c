/*
 * XREFs of ?OnHolographicDisplayChanged_@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z @ 0x180076544
 * Callers:
 *     _lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_::operator() @ 0x18007A1C0 (_lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::OnHolographicDisplayChanged_(
        RawInputProvidersTracing *this,
        int a2,
        const unsigned __int16 *a3,
        char a4,
        bool a5)
{
  __int64 v7; // rcx
  const unsigned __int16 *v8; // rdx
  __int64 v9; // rax
  char v10; // [rsp+38h] [rbp-41h] BYREF
  bool v11; // [rsp+39h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  const unsigned __int16 *v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+70h] [rbp-9h]
  int v15; // [rsp+74h] [rbp-5h]
  char *v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  bool *v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  int *v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+E0h] [rbp+67h] BYREF

  v22 = a2;
  v7 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 2) != 0 && (*(_QWORD *)(v7 + 24) & 2LL) == *(_QWORD *)(v7 + 24) )
  {
    v8 = (const unsigned __int16 *)&unk_1800AE6CC;
    LODWORD(v9) = 0;
    if ( a3 )
    {
      v8 = a3;
      v9 = -1LL;
      do
        ++v9;
      while ( a3[v9] );
    }
    v13 = v8;
    v14 = 2 * v9 + 2;
    v16 = &v10;
    v11 = a5;
    v18 = &v11;
    v20 = &v22;
    v15 = 0;
    v10 = a4;
    v17 = 1LL;
    v19 = 1LL;
    v21 = 4LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_1800B9CA0, 0LL, 0LL, 6u, &pData);
  }
}
