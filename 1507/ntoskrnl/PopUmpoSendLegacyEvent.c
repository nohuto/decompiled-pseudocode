/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x14056C170
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PopUmpoSendPowerMessage @ 0x1400D11BC (PopUmpoSendPowerMessage.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PfIoPowerEventNotify @ 0x140566798 (PfIoPowerEventNotify.c)
 */

__int64 __fastcall PopUmpoSendLegacyEvent(__int128 *a1, __int64 a2)
{
  bool v3; // zf
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  int v6; // edi
  void *v7; // rcx
  int Src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+48h] [rbp-40h]

  if ( (PoDebug & 0x10000000) != 0 )
    DbgPrint("%s: Sending legacy event to UMPO, code=%d\n", "PopUmpoSendLegacyEvent", *((_DWORD *)a1 + 1));
  v3 = *((_BYTE *)a1 + 12) == 0;
  v4 = *a1;
  Src = 7;
  v5 = *((_QWORD *)a1 + 2);
  v10 = v4;
  v11 = v5;
  if ( !v3 )
    PfIoPowerEventNotify(*((_DWORD *)a1 + 1), a2, 0);
  v6 = PopUmpoSendPowerMessage(&Src, 0x48uLL);
  if ( v6 >= 0 )
  {
    v7 = (void *)*((_QWORD *)a1 + 2);
    if ( v7 )
      KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
  }
  return (unsigned int)v6;
}
