/*
 * XREFs of ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x18017B0E8
 * Callers:
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B9058 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800B9B18 (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<_DWMIndirectMetaData,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4++;
        v8 = 6 * v7;
        v9 = *(_OWORD *)(v6 + 48LL * v4 + 16);
        *(_OWORD *)(v6 + 8 * v8) = *(_OWORD *)(v6 + 48LL * v4);
        v10 = *(_OWORD *)(v6 + 48LL * v4 + 32);
        *(_OWORD *)(v6 + 8 * v8 + 16) = v9;
        *(_OWORD *)(v6 + 8 * v8 + 32) = v10;
      }
      while ( v4 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  return v3;
}
