/*
 * XREFs of ?CleanupEndpoints@CInputSinkStruct@@AEAAXXZ @ 0x1800A8748
 * Callers:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800A879C (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??_GCInputSinkStruct@@QEAAPEAXI@Z @ 0x1800A887C (--_GCInputSinkStruct@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseEndpoint@CInputSinkStruct@@AEAAJPEAI@Z @ 0x180143240 (-CloseEndpoint@CInputSinkStruct@@AEAAJPEAI@Z.c)
 */

void __fastcall CInputSinkStruct::CleanupEndpoints(CInputSinkStruct *this)
{
  if ( (unsigned int)(*((_DWORD *)this + 7) - 3) <= 1 )
    CInputSinkStruct::CloseEndpoint(this, (unsigned int *)this);
  if ( (unsigned int)(*((_DWORD *)this + 8) - 3) <= 1 )
    CInputSinkStruct::CloseEndpoint(this, (unsigned int *)this + 1);
  if ( (unsigned int)(*((_DWORD *)this + 9) - 3) <= 1 )
    CInputSinkStruct::CloseEndpoint(this, (unsigned int *)this + 2);
  if ( (unsigned int)(*((_DWORD *)this + 10) - 3) <= 1 )
    CInputSinkStruct::CloseEndpoint(this, (unsigned int *)this + 3);
}
