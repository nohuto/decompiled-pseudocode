/*
 * XREFs of MiPurgeZeroList @ 0x14011224C
 * Callers:
 *     MiFinishResume @ 0x1401121BC (MiFinishResume.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 */

unsigned __int64 __fastcall MiPurgeZeroList(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r14d
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 v7; // r15
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( *(_BYTE *)(a1 + 4364) )
  {
    result = (unsigned int)dword_1402FE70C;
    v3 = 0;
    if ( dword_1402FE70C )
    {
      v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1600) + 16LL);
      do
      {
        v5 = *v4;
        if ( *v4 != 0xFFFFFFFFFLL )
        {
          do
          {
            v6 = 48 * v5 - 0x58000000000LL;
            v7 = MiLockPageInline(v6);
            if ( MI_IS_PFN(v5)
              && (*(_BYTE *)(v6 + 34) & 7) == 0
              && (*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFLL) != 0xFFFFFFFFELL )
            {
              MiUnlinkFreeOrZeroedPage(v5, 0LL, 0);
              MiInsertPageInFreeOrZeroedList(v5, 2uLL);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v7);
            v5 = *v4;
          }
          while ( *v4 != 0xFFFFFFFFFLL );
          result = (unsigned int)dword_1402FE70C;
        }
        ++v3;
        v4 += 5;
      }
      while ( v3 < (unsigned int)result );
    }
    *(_BYTE *)(a1 + 4364) = 0;
  }
  return result;
}
