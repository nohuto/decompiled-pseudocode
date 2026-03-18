/*
 * XREFs of ?vReleaseRao@DC@@QEAAXXZ @ 0x1C002D750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DC::vReleaseRao(DC *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 9) |= 0x10u;
  *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v1 + 15) |= 4u;
}
