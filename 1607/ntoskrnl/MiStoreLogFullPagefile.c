/*
 * XREFs of MiStoreLogFullPagefile @ 0x1401F49E4
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E12FC (_TlgWriteEx.c)
 */

void MiStoreLogFullPagefile()
{
  UINT32 cData; // edx
  ULONG64 v1; // r8
  const struct _TlgProvider_t *v2; // r9
  const GUID *v3; // [rsp+20h] [rbp-40h]
  const GUID *v4; // [rsp+28h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v5; // [rsp+60h] [rbp+0h] BYREF

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
      TlgWriteEx(
        v2,
        &unk_14027C9F2,
        v1,
        (ULONG)v2,
        v3,
        v4,
        cData,
        (EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL));
  }
}
