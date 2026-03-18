/*
 * XREFs of ?Initialize@CScatterToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@W4TokenState@CTokenBase@@@Z @ 0x1C00E13E8
 * Callers:
 *     ?CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00E127C (-CreateCompleted@CScatterToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENT.c)
 * Callees:
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C004A3EC (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C00A4160 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 */

__int64 __fastcall CScatterToken::Initialize(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // esi
  unsigned int v6; // eax

  v4 = 0LL;
  v5 = CToken::Initialize(a1, 2);
  if ( v5 >= 0 )
  {
    *(_QWORD *)(a1 + 104) = *(_QWORD *)a2;
    *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 72);
    v6 = *(_DWORD *)(a2 + 136);
    if ( v6 )
    {
      if ( v6 > 0xC )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        do
        {
          CRegion::AddRect(*(CRegion **)(a1 + 80), (struct _RECTL *)(48 * v4 + a2 + 168));
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (unsigned int)v4 < *(_DWORD *)(a2 + 136) );
      }
    }
  }
  return (unsigned int)v5;
}
