/*
 * XREFs of ??_G?$wnf_subscription_state@K@details@wil@@UEAAPEAXI@Z @ 0x18002FC60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$wnf_subscription_state@K@details@wil@@UEAA@XZ @ 0x18002FBA0 (--1-$wnf_subscription_state@K@details@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wil::details::wnf_subscription_state<unsigned long>::`scalar deleting destructor'(
        _QWORD *Block,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  wil::details::wnf_subscription_state<unsigned long>::~wnf_subscription_state<unsigned long>(Block, a2);
  if ( (v2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
