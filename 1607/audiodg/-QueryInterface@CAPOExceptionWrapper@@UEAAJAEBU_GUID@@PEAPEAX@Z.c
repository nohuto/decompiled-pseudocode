/*
 * XREFs of ?QueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140010870
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14000FF60 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObjec.c)
 *     ?QueryInterface@CAPOExceptionWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A010 (-QueryInterface@CAPOExceptionWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOExceptionWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A020 (-QueryInterface@CAPOExceptionWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOExceptionWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A030 (-QueryInterface@CAPOExceptionWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOExceptionWrapper::QueryInterface(CAPOExceptionWrapper *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *, void **); // r9
  CAPOExceptionWrapper *v4; // rcx
  __int64 (__fastcall *v5)(CAPOExceptionWrapper *, const struct _GUID *, void **); // rax

  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 10);
  if ( v3 )
    return (**v3)(*((_QWORD *)this + 10), a2, a3);
  v4 = (CAPOExceptionWrapper *)((char *)this - 8);
  v5 = **(__int64 (__fastcall ***)(CAPOExceptionWrapper *, const struct _GUID *, void **))v4;
  if ( v5 == CAPOExceptionWrapper::NDQueryInterface )
    return CAPOExceptionWrapper::NDQueryInterface(v4, a2, a3);
  else
    return v5(v4, a2, a3);
}
