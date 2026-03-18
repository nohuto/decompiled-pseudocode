/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x1404FA078
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     PfIoPowerEventNotify @ 0x1404F7B0C (PfIoPowerEventNotify.c)
 */

__int64 __fastcall PopUmpoSendLegacyEvent(__int128 *a1, __int64 a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  int v6; // edi
  void *v7; // rcx
  int Src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+48h] [rbp-40h]

  v2 = *((_BYTE *)a1 + 12) == 0;
  v4 = *a1;
  Src = 7;
  v5 = *((_QWORD *)a1 + 2);
  v10 = v4;
  v11 = v5;
  if ( !v2 )
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
