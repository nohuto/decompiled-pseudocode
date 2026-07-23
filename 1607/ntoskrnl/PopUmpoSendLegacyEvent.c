/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x140548C70
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400F94C4 (PopUmpoSendPowerMessage.c)
 *     PfIoPowerEventNotify @ 0x140530C88 (PfIoPowerEventNotify.c)
 */

__int64 __fastcall PopUmpoSendLegacyEvent(__int128 *a1, __int64 a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  int Src; // [rsp+20h] [rbp-58h] BYREF
  __int128 v7; // [rsp+28h] [rbp-50h]

  v2 = *((_BYTE *)a1 + 12) == 0;
  v4 = *a1;
  Src = 7;
  v7 = v4;
  if ( !v2 )
    PfIoPowerEventNotify(*((_DWORD *)a1 + 1), a2, 0);
  return PopUmpoSendPowerMessage(&Src, 0x48uLL, *((_BYTE *)a1 + 13));
}
