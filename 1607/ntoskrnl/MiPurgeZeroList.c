/*
 * XREFs of MiPurgeZeroList @ 0x140120B70
 * Callers:
 *     MiFinishResume @ 0x140120AE0 (MiFinishResume.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x14001B6C0 (MiFreeZeroPageSizeIndex.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPurgeLargeZeroNodePages @ 0x140120C84 (MiPurgeLargeZeroNodePages.c)
 */

unsigned __int64 __fastcall MiPurgeZeroList(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v3; // ebp
  unsigned __int64 *v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int8 v7; // r15
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( *(_BYTE *)(a1 + 4492) )
  {
    MiPurgeLargeZeroNodePages();
    result = (unsigned int)dword_140326A3C;
    v3 = 0;
    if ( dword_140326A3C )
    {
      v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1728) + 16LL);
      do
      {
        v5 = *v4;
        if ( *v4 != 0xFFFFFFFFFLL )
        {
          do
          {
            v6 = 48 * v5 - 0x58000000000LL;
            v7 = MiLockPageInline(v6);
            if ( MiIsPfnInline(v5)
              && (*(_BYTE *)(v6 + 34) & 7) == 0
              && (unsigned int)MiFreeZeroPageSizeIndex(48 * v5 - 0x58000000000LL) == -1 )
            {
              MiUnlinkFreeOrZeroedPage(v5, 0LL, 0);
              MiInsertPageInFreeOrZeroedList(v5, 2);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v7);
            v5 = *v4;
          }
          while ( *v4 != 0xFFFFFFFFFLL );
          result = (unsigned int)dword_140326A3C;
        }
        ++v3;
        v4 += 5;
      }
      while ( v3 < (unsigned int)result );
    }
    *(_BYTE *)(a1 + 4492) = 0;
  }
  return result;
}
