/*
 * XREFs of ?RmpEnforcementEmptySignalAbort@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032A58
 * Callers:
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpEnforcementEmptySignalAbort(HANDLE *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  HANDLE v6; // rax
  HANDLE v7; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  HANDLE *v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+60h] [rbp-28h]
  int v11; // [rsp+64h] [rbp-24h]

  NtSetEvent(a1[111], 0LL);
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v2, 1uLL) )
    {
      v6 = a1[3];
      v11 = 0;
      v7 = v6;
      v9 = &v7;
      v10 = 8;
      TlgWrite(v3, &unk_180042572, v4, v5, 3u, &pData);
    }
  }
}
