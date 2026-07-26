/*
 * XREFs of ndisOpenIndicatePMCapabilities @ 0x1C0045010
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisUpdatePMCurrentParameters @ 0x1C00458C4 (ndisUpdatePMCurrentParameters.c)
 */

__int64 __fastcall ndisOpenIndicatePMCapabilities(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  unsigned int v4; // edx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int64 v7; // xmm1_8
  int v8; // eax
  _OWORD v9[4]; // [rsp+20h] [rbp-40h] BYREF

  memset(v9, 0, 60);
  v2 = *(_DWORD *)(a2 + 56);
  result = *(_QWORD *)(a2 + 48);
  if ( v2 >= 0x34 )
  {
    v4 = *(unsigned __int16 *)(result + 2);
    if ( v2 >= v4 )
    {
      v5 = *(_OWORD *)(result + 16);
      v9[0] = *(_OWORD *)result;
      v6 = *(_OWORD *)(result + 32);
      v9[1] = v5;
      v9[2] = v6;
      if ( v4 >= 0x3C )
      {
        v7 = *(_QWORD *)(result + 48);
        v8 = *(_DWORD *)(result + 56);
        *(_QWORD *)&v9[3] = v7;
        DWORD2(v9[3]) = v8;
      }
      else
      {
        LODWORD(v9[3]) = *(_DWORD *)(result + 48);
      }
      return ndisUpdatePMCurrentParameters(v9, a1 + 308);
    }
  }
  return result;
}
