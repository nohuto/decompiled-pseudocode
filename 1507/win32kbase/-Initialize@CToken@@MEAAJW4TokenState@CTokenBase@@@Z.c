/*
 * XREFs of ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C00A4160
 * Callers:
 *     ?Initialize@CScatterToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@W4TokenState@CTokenBase@@@Z @ 0x1C00E13E8 (-Initialize@CScatterToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@W4TokenState@CTokenBa.c)
 * Callees:
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C0047AD0 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CToken::Initialize(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 24) = a2;
  result = CRegion::Create((struct CRegion **)(a1 + 80));
  if ( (int)result < 0 )
    *(_DWORD *)(a1 + 24) = 6;
  return result;
}
