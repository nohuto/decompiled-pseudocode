/*
 * XREFs of ?QueryValueBoolean@KRegKey@@QEAAJPEBGPEAEW4BooleanDisposition@1@@Z @ 0x1C009D390
 * Callers:
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C009CC28 (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C009D2F8 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBoolean(
        KRegKey *this,
        wchar_t *a2,
        unsigned __int8 *a3,
        enum KRegKey::BooleanDisposition a4)
{
  __int64 v5; // rax
  wchar_t *v6; // r8
  struct _UNICODE_STRING v8; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)&v8.Length = 0;
  v8.Buffer = 0LL;
  if ( !a2 )
    return KRegKey::QueryValueBoolean(this, &v8, a3, a4);
  v5 = 0x7FFFLL;
  v6 = a2;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( v5 )
  {
    a4 = 0x7FFF - v5;
    v8.Buffer = a2;
    v8.Length = 2 * (0x7FFF - v5);
    v8.MaximumLength = v8.Length + 2;
    return KRegKey::QueryValueBoolean(this, &v8, a3, a4);
  }
  return 3221225485LL;
}
