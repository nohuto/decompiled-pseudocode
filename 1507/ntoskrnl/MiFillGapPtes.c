/*
 * XREFs of MiFillGapPtes @ 0x140163C50
 * Callers:
 *     MiFillGapAddresses @ 0x140163BCC (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x140163C50 (MiFillGapPtes.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiFillGapPtes @ 0x140163C50 (MiFillGapPtes.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFillGapPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  int v8; // r11d
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = a5;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a5) )
    a1 = *(_QWORD *)(a3 + 16LL * a5);
  if ( a2 > *(_QWORD *)(a3 + 16LL * a5 + 8) )
    v7 = *(_QWORD *)(a3 + 16LL * a5 + 8);
  for ( ; a1 <= v7; v10 = a5 )
  {
    v11 = *(_QWORD *)a1;
    if ( a1 + 0x90482413000LL <= 0x7F8 )
    {
      result = MiPteHasShadow(v10, v11);
      if ( (_DWORD)result )
      {
        if ( (v11 & 1) != 0 && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
        {
          result = (__int64)KeGetCurrentThread();
          v12 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1520LL);
          if ( v12 )
          {
            result = *(_QWORD *)(v12 + 8 * ((a1 >> 3) & 0x1FF));
            if ( (result & 0x20) != 0 )
              LOBYTE(v11) = v11 | 0x20;
            if ( (result & 0x42) != 0 )
              LOBYTE(v11) = v11 | 0x42;
          }
        }
      }
    }
    if ( (v11 & 1) != 0 )
    {
      if ( !a5 || a5 == 1 && (v11 & 0x80u) != 0LL )
        goto LABEL_31;
      result = MiFillGapPtes(
                 (__int64)(a1 << 25) >> 16,
                 (unsigned int)((__int64)(a1 << 25) >> 16) + 4088,
                 v9,
                 v8,
                 a5 - 1);
    }
    else
    {
      if ( a5 )
      {
        result = MI_SHOULD_PTE_BE_GLOBAL(0LL);
        if ( (_DWORD)result )
          v16 |= 0x100uLL;
        v15 = v16 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
      }
      else
      {
        result = MI_SHOULD_PTE_BE_GLOBAL(a1);
        if ( (_DWORD)result )
          v13 |= 0x100uLL;
        v15 = v13 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
      }
      *(_QWORD *)a1 = v15;
      if ( v14 > 0x7F8 )
        goto LABEL_31;
      result = MiWritePteShadow(a1, v15);
    }
    v8 = a4;
LABEL_31:
    a1 += 8LL;
  }
  return result;
}
