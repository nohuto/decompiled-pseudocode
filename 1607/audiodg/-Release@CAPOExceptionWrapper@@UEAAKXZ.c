/*
 * XREFs of ?Release@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010470
 * Callers:
 *     ??1CAPOWrapperSrv@@QEAA@XZ @ 0x14000FEE4 (--1CAPOWrapperSrv@@QEAA@XZ.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14000FF60 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObjec.c)
 *     ?Release@CAPOExceptionWrapper@@W7EAAKXZ @ 0x14001A040 (-Release@CAPOExceptionWrapper@@W7EAAKXZ.c)
 *     ?Release@CAPOExceptionWrapper@@WBA@EAAKXZ @ 0x14001A050 (-Release@CAPOExceptionWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CAPOExceptionWrapper@@WBI@EAAKXZ @ 0x14001A060 (-Release@CAPOExceptionWrapper@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAPOExceptionWrapper::Release(CAPOExceptionWrapper *this)
{
  __int64 v2; // rcx
  CAPOExceptionWrapper *v3; // rcx
  __int64 (*v4)(void); // rax

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    return v4();
  }
  v3 = (CAPOExceptionWrapper *)((char *)this - 8);
  v4 = *(__int64 (**)(void))(*((_QWORD *)this - 1) + 16LL);
  if ( (char *)v4 != (char *)CAPOExceptionWrapper::NDRelease )
    return v4();
  return CAPOExceptionWrapper::NDRelease(v3);
}
