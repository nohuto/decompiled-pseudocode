/*
 * XREFs of ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18003B3C4
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800423E8 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180043758 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
CEndpointCharacteristics *__fastcall CEndpointCharacteristics::CEndpointCharacteristics(CEndpointCharacteristics *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
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
    4,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 144,
    0x10uLL,
    4,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  `eh vector constructor iterator'(
    (char *)this + 208,
    0x10uLL,
    4,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  `eh vector constructor iterator'(
    (char *)this + 272,
    0x10uLL,
    4,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::CAudioSignalProcessingModeArray,
    (void (*)(void *))CEndpointCharacteristics::CAudioSignalProcessingModeArray::~CAudioSignalProcessingModeArray);
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  return this;
}
