/*
 * XREFs of ndisFilterIndicatePMCapabilities @ 0x1C0048FF0
 * Callers:
 *     ndisFIndicateStatusInternal @ 0x1C00156C0 (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     ndisUpdatePMCurrentParameters @ 0x1C004AE9C (ndisUpdatePMCurrentParameters.c)
 */

__int64 __fastcall ndisFilterIndicatePMCapabilities(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  __int64 result; // rax
  unsigned int v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  int v10; // eax
  _OWORD v11[4]; // [rsp+20h] [rbp-40h] BYREF

  memset(v11, 0, 0x3CuLL);
  v4 = *(_DWORD *)(a2 + 56);
  result = *(_QWORD *)(a2 + 48);
  if ( v4 >= 0x34 )
  {
    v6 = *(unsigned __int16 *)(result + 2);
    if ( v4 >= v6 )
    {
      v7 = *(_OWORD *)(result + 16);
      v11[0] = *(_OWORD *)result;
      v8 = *(_OWORD *)(result + 32);
      v11[1] = v7;
      v11[2] = v8;
      if ( (unsigned __int16)v6 >= 0x3Cu )
      {
        v9 = *(_QWORD *)(result + 48);
        v10 = *(_DWORD *)(result + 56);
        *(_QWORD *)&v11[3] = v9;
        DWORD2(v11[3]) = v10;
      }
      else
      {
        LODWORD(v11[3]) = *(_DWORD *)(result + 48);
      }
      return ndisUpdatePMCurrentParameters(v11, a1 + 872);
    }
  }
  return result;
}
