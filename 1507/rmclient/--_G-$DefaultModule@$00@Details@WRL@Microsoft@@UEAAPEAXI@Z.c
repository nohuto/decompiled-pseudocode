/*
 * XREFs of ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000BB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800034C4 (--1-$DefaultModule@$00@Details@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180008208 (--3@YAXPEAX@Z.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Details::DefaultModule<1>::`scalar deleting destructor'(
        Microsoft::WRL::Details *Block,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v4; // bl

  v4 = (char)a2;
  Microsoft::WRL::Details::DefaultModule<1>::~DefaultModule<1>(Block, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(Block);
  return Block;
}
