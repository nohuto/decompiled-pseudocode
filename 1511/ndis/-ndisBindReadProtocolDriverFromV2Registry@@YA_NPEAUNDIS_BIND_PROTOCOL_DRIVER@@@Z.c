/*
 * XREFs of ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A10F0
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A7A04 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001EC60 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ??$QueryValueBlob@V_lambda_bda0f7bc0266b7b66b074c6ffb303b8e_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_bda0f7bc0266b7b66b074c6ffb303b8e_@@@Z @ 0x1C00A19B8 (--$QueryValueBlob@V_lambda_bda0f7bc0266b7b66b074c6ffb303b8e_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C00A1D4C (-QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A2098 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV2Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  char v2; // r14
  Rtl::KString *p; // rax
  _UNICODE_STRING *v4; // rdx
  enum KRegKey::BooleanDisposition v5; // r9d
  unsigned __int8 v7[8]; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v8; // [rsp+80h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v10; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int16 v11; // [rsp+94h] [rbp-74h]
  unsigned __int16 v12; // [rsp+96h] [rbp-72h]
  unsigned __int8 v13; // [rsp+98h] [rbp-70h]
  unsigned __int8 v14; // [rsp+99h] [rbp-6Fh]
  unsigned __int8 v15; // [rsp+9Ah] [rbp-6Eh]
  unsigned __int8 v16; // [rsp+9Bh] [rbp-6Dh]
  unsigned __int8 v17; // [rsp+9Ch] [rbp-6Ch]
  unsigned __int8 v18; // [rsp+9Dh] [rbp-6Bh]
  unsigned __int8 v19; // [rsp+9Eh] [rbp-6Ah]
  unsigned __int8 v20; // [rsp+9Fh] [rbp-69h]
  wchar_t Dest[304]; // [rsp+A8h] [rbp-60h] BYREF

  a1->ProtocolBindFlags = 0;
  v8 = 0LL;
  v2 = 1;
  if ( (int)KRegKey::Open(
              (KRegKey *)&v8,
              1u,
              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\Lookup",
              0LL) < 0
    || ((p = a1->Name._p) == 0LL ? (v4 = 0LL) : (v4 = &p->_UNICODE_STRING),
        (int)KRegKey::QueryValueBlob<_lambda_bda0f7bc0266b7b66b074c6ffb303b8e_>(&v8, v4, &v10) < 0
     || (int)RtlStringCchPrintfW(
               Dest,
               300LL,
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\Protocols\\{%08x-%04x-%04x-%02x%0"
                "2x-%02x%02x%02x%02x%02x%02x}\\Kernel",
               v10,
               v11,
               v12,
               v13,
               v14,
               v15,
               v16,
               v17,
               v18,
               v19,
               v20) < 0) )
  {
    v2 = 0;
  }
  else
  {
    Handle = 0LL;
    if ( (int)KRegKey::Open((KRegKey *)&Handle, 1u, Dest, 0LL) < 0
      || (v7[0] = 0, (int)KRegKey::QueryValueBoolean((KRegKey *)&Handle, L"NoStartAtBoot", v7, v5) < 0) )
    {
      v2 = 0;
    }
    else if ( !v7[0] )
    {
      a1->ProtocolBindFlags |= 1u;
    }
    if ( Handle )
      ZwClose(Handle);
  }
  if ( v8 )
    ZwClose(v8);
  return v2;
}
