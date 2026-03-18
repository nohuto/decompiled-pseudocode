/*
 * XREFs of ??1CDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180125358
 * Callers:
 *     ??_ECDataWrapper@?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180125530 (--_ECDataWrapper@-$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180068428 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 */

void **__fastcall CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::~CDataWrapper(__int64 a1)
{
  void **result; // rax

  *(_QWORD *)a1 = &CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::`vftable';
  `vector destructor iterator'(
    (char *)(a1 + 32),
    96LL,
    2,
    (void (__fastcall *)(void *))SharedBufferDataFlipChain::~SharedBufferDataFlipChain);
  result = &CMILRefCountBase::`vftable';
  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  return result;
}
