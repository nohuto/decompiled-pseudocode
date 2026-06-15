/*
 * XREFs of _lambda_ee82c780731b3ceedd1db5bd5f3d58d6_::operator() @ 0x1800A7780
 * Callers:
 *     ??$ForEachCandidateFormatForMode@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@Z @ 0x1800A708C (--$ForEachCandidateFormatForMode@V_lambda_ee82c780731b3ceedd1db5bd5f3d58d6_@@@CEndpointCharacter.c)
 * Callees:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEAUtWAVEFORMATEX@@IIII@Z @ 0x1800671EC (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEAUtWAVEFORMATEX@@IIII@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAI666@Z @ 0x1800A7F00 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall lambda_ee82c780731b3ceedd1db5bd5f3d58d6_::operator()(__int64 a1, struct tWAVEFORMATEX *a2)
{
  struct _GUID v2; // xmm0
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v5; // edx
  struct _KSAUDIO_PACKETSIZE_CONSTRAINTS *v7; // rax
  CEndpointCharacteristics *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx
  char v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+30h] [rbp-58h]
  unsigned int v14[4]; // [rsp+60h] [rbp-28h] BYREF
  struct _GUID v15; // [rsp+70h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(struct _GUID *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 48);
  v12 = *(_BYTE *)(a1 + 40);
  v7 = *(struct _KSAUDIO_PACKETSIZE_CONSTRAINTS **)(a1 + 32);
  v8 = *(CEndpointCharacteristics **)a1;
  v15 = v2;
  v9 = CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
         v8,
         v5,
         &v15,
         a2,
         v7,
         v12,
         v13,
         v14,
         &v18,
         &v17,
         &v16);
  v10 = 0;
  if ( v9 < 0 )
  {
    if ( v9 == -2005139389 )
      *(_DWORD *)(*(_QWORD *)a1 + 408LL) = 1;
  }
  else
  {
    return (unsigned int)CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                           *(CConnectorProcessingModeCharacteristics **)(a1 + 56),
                           a2,
                           v14[0],
                           v18,
                           v17,
                           v16);
  }
  return v10;
}
