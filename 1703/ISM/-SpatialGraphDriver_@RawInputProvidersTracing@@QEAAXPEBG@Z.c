/*
 * XREFs of ?SpatialGraphDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z @ 0x180076650
 * Callers:
 *     _lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_::operator() @ 0x18007A1C0 (_lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall RawInputProvidersTracing::SpatialGraphDriver_(
        RawInputProvidersTracing *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // rcx
  const unsigned __int16 *v4; // rdx
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const unsigned __int16 *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v3 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u && (*(_BYTE *)(v3 + 16) & 2) != 0 && (*(_QWORD *)(v3 + 24) & 2LL) == *(_QWORD *)(v3 + 24) )
  {
    v4 = (const unsigned __int16 *)&unk_1800AE6CC;
    LODWORD(v5) = 0;
    if ( a2 )
    {
      v4 = a2;
      v5 = -1LL;
      do
        ++v5;
      while ( a2[v5] );
    }
    v7 = v4;
    v8 = 2 * v5 + 2;
    v9 = 0;
    TlgWrite((TraceLoggingHProvider)v3, &unk_1800B9CF9, 0LL, 0LL, 3u, &pData);
  }
}
