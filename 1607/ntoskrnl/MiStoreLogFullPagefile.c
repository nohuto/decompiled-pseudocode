/*
 * XREFs of MiStoreLogFullPagefile @ 0x1401F4810
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 */

void MiStoreLogFullPagefile()
{
  UINT32 cData; // edx
  ULONG64 v1; // r8
  const struct _TlgProvider_t *v2; // r9
  const GUID *v3; // [rsp+20h] [rbp-40h]
  const GUID *v4; // [rsp+28h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v5; // [rsp+60h] [rbp+0h] BYREF

  if ( qword_1403277E0 && qword_1403277E0->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(qword_1403277E0, 2uLL) )
      TlgWriteEx(
        v2,
        &unk_14027CAF2,
        v1,
        (ULONG)v2,
        v3,
        v4,
        cData,
        (EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL));
  }
}
