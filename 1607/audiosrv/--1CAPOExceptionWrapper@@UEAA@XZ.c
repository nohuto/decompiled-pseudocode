/*
 * XREFs of ??1CAPOExceptionWrapper@@UEAA@XZ @ 0x18008BCD4
 * Callers:
 *     ??_GCAPOExceptionWrapper@@UEAAPEAXI@Z @ 0x18008BD70 (--_GCAPOExceptionWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPOExceptionWrapper::~CAPOExceptionWrapper(CAPOExceptionWrapper *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CAPOExceptionWrapper::`vftable'{for `INDUnknown'};
  *((_QWORD *)this + 1) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
  *((_QWORD *)this + 3) = &CAPOExceptionWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)this + 4) = &CAPOExceptionWrapper::`vftable'{for `IAudioSystemEffects2'};
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  CoTaskMemFree(*((LPVOID *)this + 9));
  *((_QWORD *)this + 9) = 0LL;
}
