/*
 * XREFs of ?Sqm@DXGKSQM_GLOBAL@@QEAAXXZ @ 0x1C014B66C
 * Callers:
 *     ??1DXGKSQM_GLOBAL@@QEAA@XZ @ 0x1C014B2DC (--1DXGKSQM_GLOBAL@@QEAA@XZ.c)
 *     ?SqmUpdate@DXGGLOBAL@@QEAAXXZ @ 0x1C014B788 (-SqmUpdate@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 */

void __fastcall DXGKSQM_GLOBAL::Sqm(DXGKSQM_GLOBAL *this)
{
  __int64 v2; // r9
  _QWORD *v3; // r14
  unsigned int v4; // esi
  unsigned int i; // edi
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-E0h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v8[8]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v9[136]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  v3 = (_QWORD *)((char *)this + 24);
  v4 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( !*v3 )
      break;
    RtlInitAnsiString(&DestinationString, (PCSZ)this + 32 * i);
    *(_DWORD *)&v6.Length = 2228224;
    v6.Buffer = &v9[17 * i];
    if ( RtlAnsiStringToUnicodeString(&v6, &DestinationString, 0) < 0 )
      RtlInitUnicodeString(&v6, L"<Unknown>");
    DxgkSqmCreateStringStreamEntry((__int64)&v8[v4++], v6.Buffer);
    v3 += 4;
  }
  if ( i )
    DxgkSqmAddToStream(6592LL, v4, (__int64)v8, v2);
}
