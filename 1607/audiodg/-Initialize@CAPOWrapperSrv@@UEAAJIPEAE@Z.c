/*
 * XREFs of ?Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z @ 0x14000F810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperSrv::Initialize(CAPOWrapperSrv *this, __int64 a2, unsigned __int8 *a3)
{
  CAPOExceptionWrapper *v3; // rcx
  __int64 (__fastcall *v4)(CAPOExceptionWrapper *__hidden, unsigned int, unsigned __int8 *); // rax

  v3 = (CAPOExceptionWrapper *)*((_QWORD *)this + 9);
  if ( !v3 )
    return 2147500033LL;
  v4 = *(__int64 (__fastcall **)(CAPOExceptionWrapper *__hidden, unsigned int, unsigned __int8 *))(*(_QWORD *)v3 + 48LL);
  if ( v4 == CAPOExceptionWrapper::Initialize )
    return CAPOExceptionWrapper::Initialize(v3, a2, a3);
  else
    return v4(v3, a2, a3);
}
