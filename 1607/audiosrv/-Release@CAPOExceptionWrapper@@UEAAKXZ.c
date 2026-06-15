/*
 * XREFs of ?Release@CAPOExceptionWrapper@@UEAAKXZ @ 0x18008CB80
 * Callers:
 *     ?Release@CAPOExceptionWrapper@@W7EAAKXZ @ 0x180039870 (-Release@CAPOExceptionWrapper@@W7EAAKXZ.c)
 *     ?Release@CAPOExceptionWrapper@@WBA@EAAKXZ @ 0x180039880 (-Release@CAPOExceptionWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CAPOExceptionWrapper@@WBI@EAAKXZ @ 0x180039890 (-Release@CAPOExceptionWrapper@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOExceptionWrapper::Release(CAPOExceptionWrapper *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 10);
  if ( !v2 )
    v2 = (char *)this - 8;
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
}
