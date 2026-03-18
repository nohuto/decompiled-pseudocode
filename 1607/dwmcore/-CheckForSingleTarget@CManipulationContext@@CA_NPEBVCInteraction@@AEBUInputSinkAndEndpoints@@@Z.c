/*
 * XREFs of ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x180008878
 * Callers:
 *     ?OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z @ 0x180007D78 (-OnNewContact@CManipulationContext@@QEAAJPEAVCInteractionChain@@IK_N@Z.c)
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x180008878 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180171590 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     ?CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z @ 0x180008878 (-CheckForSingleTarget@CManipulationContext@@CA_NPEBVCInteraction@@AEBUInputSinkAndEndpoints@@@Z.c)
 */

bool __fastcall CManipulationContext::CheckForSingleTarget(
        const struct CInteraction *a1,
        const struct InputSinkAndEndpoints *a2)
{
  const struct CInteraction *v3; // rdi
  bool result; // al

  if ( *((_QWORD *)a1 + 15) != *(_QWORD *)a2
    || *((_QWORD *)a1 + 16) != *((_QWORD *)a2 + 1)
    || *((_QWORD *)a1 + 17) != *((_QWORD *)a2 + 2)
    || *((_QWORD *)a1 + 18) != *((_QWORD *)a2 + 3)
    || *((_DWORD *)a1 + 38) != *((_DWORD *)a2 + 8)
    || *((_DWORD *)a1 + 39) != *((_DWORD *)a2 + 9)
    || *((_DWORD *)a1 + 40) != *((_DWORD *)a2 + 10)
    || *((_DWORD *)a1 + 41) != *((_DWORD *)a2 + 11) )
  {
    return 0;
  }
  v3 = (const struct CInteraction *)*((_QWORD *)a1 + 38);
  result = 1;
  do
  {
    if ( !v3 )
      break;
    result = CManipulationContext::CheckForSingleTarget(v3, a2);
    v3 = (const struct CInteraction *)*((_QWORD *)v3 + 36);
  }
  while ( result );
  return result;
}
