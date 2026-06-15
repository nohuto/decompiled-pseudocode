/*
 * XREFs of ?NDRelease@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010630
 * Callers:
 *     ?Release@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010470 (-Release@CAPOExceptionWrapper@@UEAAKXZ.c)
 * Callees:
 *     ??_GCAPOExceptionWrapper@@UEAAPEAXI@Z @ 0x140010A40 (--_GCAPOExceptionWrapper@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 */

__int64 __fastcall CAPOExceptionWrapper::NDRelease(CAPOExceptionWrapper *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CAPOExceptionWrapper *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v1 && this )
  {
    v3 = *(void *(__fastcall **)(CAPOExceptionWrapper *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v3 == CAPOExceptionWrapper::`scalar deleting destructor' )
      CAPOExceptionWrapper::`scalar deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return v1;
}
