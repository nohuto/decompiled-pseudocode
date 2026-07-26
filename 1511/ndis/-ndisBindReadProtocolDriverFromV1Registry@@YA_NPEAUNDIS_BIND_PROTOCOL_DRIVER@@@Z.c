/*
 * XREFs of ?ndisBindReadProtocolDriverFromV1Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00DCE90
 * Callers:
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A7A04 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C001EC60 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00A1F54 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBGPEAX@Z @ 0x1C00A2098 (-Open@KRegKey@@QEAAJKPEBGPEAX@Z.c)
 */

char __fastcall ndisBindReadProtocolDriverFromV1Registry(struct NDIS_BIND_PROTOCOL_DRIVER *a1)
{
  int v1; // edi
  Rtl::KString *p; // rax
  _UNICODE_STRING *v4; // r9
  __int64 v6; // [rsp+20h] [rbp-288h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-280h] BYREF
  wchar_t Dest[304]; // [rsp+30h] [rbp-278h] BYREF

  a1->ProtocolBindFlags = 0;
  v1 = 1;
  p = a1->Name._p;
  LODWORD(v6) = 1;
  if ( p )
    v4 = &p->_UNICODE_STRING;
  else
    v4 = 0LL;
  if ( (int)RtlStringCchPrintfW(Dest, 300LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\%wZ", v4, v6) < 0 )
    goto LABEL_10;
  Handle = 0LL;
  if ( (int)KRegKey::Open((KRegKey *)&Handle, 1u, Dest, 0LL) >= 0 )
  {
    KRegKey::QueryValueUlong((KRegKey *)&Handle, (wchar_t *)L"NdisBootStart", (unsigned int *)&v6);
    v1 = v6;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v1 )
LABEL_10:
    a1->ProtocolBindFlags |= 1u;
  return 1;
}
