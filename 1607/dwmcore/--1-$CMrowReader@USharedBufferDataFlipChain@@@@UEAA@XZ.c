/*
 * XREFs of ??1?$CMrowReader@USharedBufferDataFlipChain@@@@UEAA@XZ @ 0x180141B20
 * Callers:
 *     ??_G?$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180141C50 (--_G-$CMrowReader@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z.c)
 *     ??_E?$CMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z @ 0x180141CA0 (--_E-$CMrowWriter@USharedBufferDataFlipChain@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall CMrowReader<SharedBufferDataFlipChain>::~CMrowReader<SharedBufferDataFlipChain>(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx

  result = &CMrowReader<SharedBufferDataFlipChain>::`vftable';
  *a1 = &CMrowReader<SharedBufferDataFlipChain>::`vftable';
  v3 = a1[1];
  if ( v3 )
  {
    result = (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    a1[1] = 0LL;
  }
  return result;
}
