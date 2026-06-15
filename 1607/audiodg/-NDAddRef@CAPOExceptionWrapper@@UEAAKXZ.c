/*
 * XREFs of ?NDAddRef@CAPOExceptionWrapper@@UEAAKXZ @ 0x140017110
 * Callers:
 *     ?AddRef@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010830 (-AddRef@CAPOExceptionWrapper@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOExceptionWrapper::NDAddRef(CAPOExceptionWrapper *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
