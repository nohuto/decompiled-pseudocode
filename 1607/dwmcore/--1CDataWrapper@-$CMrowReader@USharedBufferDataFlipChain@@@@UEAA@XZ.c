/*
 * XREFs of ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180141B5C
 * Callers:
 *     ??_ECDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180141CF0 (--_ECDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3238 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void **__fastcall CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::~CDataWrapper(__int64 a1)
{
  void **result; // rax

  *(_QWORD *)a1 = &CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::`vftable';
  `vector destructor iterator'(
    (char *)(a1 + 32),
    96LL,
    2LL,
    (void (__fastcall *)(char *))SharedBufferDataFlipChain::~SharedBufferDataFlipChain);
  result = &CMILRefCountBase::`vftable';
  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  return result;
}
