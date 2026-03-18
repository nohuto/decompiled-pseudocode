/*
 * XREFs of MiStoreLogWriteDisabled @ 0x140231778
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 */

void MiStoreLogWriteDisabled()
{
  __int64 v0; // r8
  __int64 v1; // r9
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 2uLL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = v2;
      v6 = 4;
      MmTlgWrite(v1, (unsigned __int8 *)dword_1402A47F0, v0, v1, 3u, &v4);
    }
  }
}
