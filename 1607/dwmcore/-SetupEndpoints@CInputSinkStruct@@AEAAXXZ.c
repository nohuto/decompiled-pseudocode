/*
 * XREFs of ?SetupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A683C
 * Callers:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800A68E4 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?OpenEndpoint@CInputSinkStruct@@AEAAJW4CompositionInputType@@PEAI@Z @ 0x180170980 (-OpenEndpoint@CInputSinkStruct@@AEAAJW4CompositionInputType@@PEAI@Z.c)
 */

void __fastcall CInputSinkStruct::SetupEndpoints(CInputSinkStruct *this)
{
  if ( (unsigned int)(*((_DWORD *)this + 7) - 3) <= 1 )
    CInputSinkStruct::OpenEndpoint(this, 1LL, this);
  if ( (unsigned int)(*((_DWORD *)this + 8) - 3) <= 1 )
    CInputSinkStruct::OpenEndpoint(this, 2LL, (char *)this + 4);
  if ( (unsigned int)(*((_DWORD *)this + 9) - 3) <= 1 )
    CInputSinkStruct::OpenEndpoint(this, 3LL, (char *)this + 8);
  if ( (unsigned int)(*((_DWORD *)this + 10) - 3) <= 1 )
    CInputSinkStruct::OpenEndpoint(this, 4LL, (char *)this + 12);
}
