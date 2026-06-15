/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18002DDBC
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800341BC (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800364CC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointCharacteristics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CEndpointCharacteristics::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 64,
    0x10uLL,
    4uLL,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 144,
    0x10uLL,
    4uLL,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  `eh vector constructor iterator'(
    (char *)this + 208,
    0x10uLL,
    4uLL,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  `eh vector constructor iterator'(
    (char *)this + 272,
    0x10uLL,
    4uLL,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 448), 0, 0);
  return this;
}
