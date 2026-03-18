/*
 * XREFs of ?GetNumBackBuffers@CSwapChainBase@@MEBAIXZ @ 0x18008EE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainBase::GetNumBackBuffers(CSwapChainBase *this)
{
  unsigned int v1; // eax

  if ( *((_DWORD *)this + 47) == 1 && (v1 = *((_DWORD *)this + 42), v1 > 1) )
    return v1 - 1;
  else
    return *((unsigned int *)this + 42);
}
