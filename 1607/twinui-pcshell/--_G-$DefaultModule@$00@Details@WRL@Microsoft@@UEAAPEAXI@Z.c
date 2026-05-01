/*
 * XREFs of ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180004730
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x180004488 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DefaultModule<1>::`scalar deleting destructor'(_QWORD *Block, char a2)
{
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
