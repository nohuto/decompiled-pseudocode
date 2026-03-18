/*
 * XREFs of ?DisableAdapter@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18013AC68
 * Callers:
 *     ?TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ @ 0x18008F704 (-TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z @ 0x18013ACC8 (-FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CD3DRegistryDatabase::DisableAdapter(struct _LUID a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = 0;
  if ( CD3DRegistryDatabase::FindAdapter(a1, &v3) )
  {
    *(_DWORD *)(CD3DRegistryDatabase::m_rgAdapterErrorCounts + 12LL * v3 + 8) = 5;
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6Au);
  }
  return v1;
}
