/*
 * XREFs of ?QueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008CB50
 * Callers:
 *     ?QueryInterface@CAPOExceptionWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039840 (-QueryInterface@CAPOExceptionWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOExceptionWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039850 (-QueryInterface@CAPOExceptionWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOExceptionWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039860 (-QueryInterface@CAPOExceptionWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOExceptionWrapper::QueryInterface(CAPOExceptionWrapper *this, const struct _GUID *a2, void **a3)
{
  char *v4; // rcx

  v4 = (char *)*((_QWORD *)this + 10);
  if ( !v4 )
    v4 = (char *)this - 8;
  return (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v4)(v4, a2, a3);
}
