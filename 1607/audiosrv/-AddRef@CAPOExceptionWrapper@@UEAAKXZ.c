/*
 * XREFs of ?AddRef@CAPOExceptionWrapper@@UEAAKXZ @ 0x18008C030
 * Callers:
 *     ?AddRef@CAPOExceptionWrapper@@W7EAAKXZ @ 0x180039800 (-AddRef@CAPOExceptionWrapper@@W7EAAKXZ.c)
 *     ?AddRef@CAPOExceptionWrapper@@WBA@EAAKXZ @ 0x180039810 (-AddRef@CAPOExceptionWrapper@@WBA@EAAKXZ.c)
 *     ?AddRef@CAPOExceptionWrapper@@WBI@EAAKXZ @ 0x180039820 (-AddRef@CAPOExceptionWrapper@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOExceptionWrapper::AddRef(CAPOExceptionWrapper *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 10);
  if ( !v2 )
    v2 = (char *)this - 8;
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
}
