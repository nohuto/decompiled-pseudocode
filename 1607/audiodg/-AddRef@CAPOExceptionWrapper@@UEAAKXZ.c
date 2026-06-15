/*
 * XREFs of ?AddRef@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010830
 * Callers:
 *     ?AddRef@CAPOExceptionWrapper@@W7EAAKXZ @ 0x140019FE0 (-AddRef@CAPOExceptionWrapper@@W7EAAKXZ.c)
 *     ?AddRef@CAPOExceptionWrapper@@WBA@EAAKXZ @ 0x140019FF0 (-AddRef@CAPOExceptionWrapper@@WBA@EAAKXZ.c)
 *     ?AddRef@CAPOExceptionWrapper@@WBI@EAAKXZ @ 0x14001A000 (-AddRef@CAPOExceptionWrapper@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAPOExceptionWrapper::AddRef(CAPOExceptionWrapper *this)
{
  __int64 v2; // rcx
  CAPOExceptionWrapper *v3; // rcx
  __int64 (*v4)(void); // rax

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 8LL);
    return v4();
  }
  v3 = (CAPOExceptionWrapper *)((char *)this - 8);
  v4 = *(__int64 (**)(void))(*((_QWORD *)this - 1) + 8LL);
  if ( (char *)v4 != (char *)CAPOExceptionWrapper::NDAddRef )
    return v4();
  return CAPOExceptionWrapper::NDAddRef(v3);
}
