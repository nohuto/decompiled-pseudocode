/*
 * XREFs of MiMapDummyPages @ 0x1407E6AE8
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiMapDummyPages(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx

  result = (unsigned __int64)MiReservePtes((__int64)&qword_14034FC70, 2u, a3);
  v4 = (_QWORD *)result;
  if ( result )
  {
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(result) )
      v5 |= 0x100uLL;
    v6 = v5 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    *v4 = v6;
    if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow((__int64)v4, v6);
    v7 = v4;
    v8 = (__int64)(v4 + 1);
    qword_14034F718 = (__int64)((_QWORD)v7 << 25) >> 16;
    v9 = (v6 ^ (qword_14034F6F8 << 12)) & 0xFFFFFFFFF000LL ^ v6;
    *(_QWORD *)v8 = v9;
    if ( (unsigned __int64)(v8 + 0x90482413000LL) <= 0x7F8 )
      MiWritePteShadow(v8, v9);
    result = 1LL;
    qword_14034F720 = (PVOID)(v8 << 25 >> 16);
  }
  return result;
}
