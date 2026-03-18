/*
 * XREFs of ?Sqm@DXGKSQM_GLOBAL@@QEAAXXZ @ 0x1C01503BC
 * Callers:
 *     ??1DXGKSQM_GLOBAL@@QEAA@XZ @ 0x1C0150030 (--1DXGKSQM_GLOBAL@@QEAA@XZ.c)
 *     ?SqmUpdate@DXGGLOBAL@@QEAAXXZ @ 0x1C01504D8 (-SqmUpdate@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001F830 (DxgkSqmCreateStringStreamEntry.c)
 *     DxgkSqmAddToStream @ 0x1C00E7550 (DxgkSqmAddToStream.c)
 */

void __fastcall DXGKSQM_GLOBAL::Sqm(DXGKSQM_GLOBAL *this)
{
  _QWORD *v2; // r14
  unsigned int v3; // esi
  unsigned int i; // edi
  struct _UNICODE_STRING v5; // [rsp+20h] [rbp-E0h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v7[8]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v8[136]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = (_QWORD *)((char *)this + 24);
  v3 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( !*v2 )
      break;
    RtlInitAnsiString(&DestinationString, (PCSZ)this + 32 * i);
    *(_DWORD *)&v5.Length = 2228224;
    v5.Buffer = &v8[17 * i];
    if ( RtlAnsiStringToUnicodeString(&v5, &DestinationString, 0) < 0 )
      RtlInitUnicodeString(&v5, L"<Unknown>");
    DxgkSqmCreateStringStreamEntry((__int64)&v7[v3++], v5.Buffer);
    v2 += 4;
  }
  if ( i )
    DxgkSqmAddToStream(6592LL, v3, (__int64)v7);
}
