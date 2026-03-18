/*
 * XREFs of RIMIDEResetPointerDeviceMaxCount @ 0x1C00D6E88
 * Callers:
 *     NtUserSetFeatureReportResponse @ 0x1C00BBA90 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     RIMCmFreePointerDeviceContacts @ 0x1C0006A40 (RIMCmFreePointerDeviceContacts.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C0006D58 (RIMCmAllocPointerDeviceContacts.c)
 *     Win32AllocPoolZInit @ 0x1C0037AC0 (Win32AllocPoolZInit.c)
 */

__int64 __fastcall RIMIDEResetPointerDeviceMaxCount(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi

  v2 = a2;
  v4 = 1;
  if ( *(_DWORD *)(a1 + 24) == 7 )
    v2 = a2 + 1;
  RIMCmFreePointerDeviceContacts(a1);
  if ( (int)RIMCmAllocPointerDeviceContacts(a1) >= 0 )
  {
    if ( Win32AllocPoolZInit(8LL * v2) )
    {
      *(_DWORD *)(a1 + 688) = v2;
      return v4;
    }
    RIMCmFreePointerDeviceContacts(a1);
  }
  return 0;
}
