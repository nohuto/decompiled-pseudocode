/*
 * XREFs of HvpFreeAllocatedBins @ 0x1405E48E8
 * Callers:
 *     HvLoadHive @ 0x1403D3A54 (HvLoadHive.c)
 * Callees:
 *     HvpMapEntryIsBinPresent @ 0x140039058 (HvpMapEntryIsBinPresent.c)
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryIsNewAlloc @ 0x1400A04B8 (HvpMapEntryIsNewAlloc.c)
 *     HvpFreeBin @ 0x1403D82E0 (HvpFreeBin.c)
 */

__int64 __fastcall HvpFreeAllocatedBins(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  unsigned int v4; // r14d
  __int64 v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 FreeBin; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax

  result = *(_DWORD *)(a1 + 1400) >> 12;
  if ( (_DWORD)result )
    v3 = (unsigned int)(result - 1) >> 9;
  else
    v3 = 0;
  if ( *(_QWORD *)(a1 + 1408) )
  {
    v4 = 0;
    v5 = 0LL;
    do
    {
      v6 = 0;
      v7 = *(_QWORD *)(v5 + *(_QWORD *)(a1 + 1408)) + 8LL;
      do
      {
        result = HvpMapEntryIsBinPresent(v7 - 8);
        if ( (_BYTE)result )
        {
          result = HvpMapEntryIsNewAlloc(v8);
          if ( (_BYTE)result )
          {
            FreeBin = HvpMapEntryGetFreeBin();
            v10 = (_QWORD *)FreeBin;
            if ( FreeBin )
            {
              if ( (*(_DWORD *)(FreeBin + 24) & 1) != 0 )
                HvpFreeBin(
                  a1,
                  *(_DWORD *)(v7 + 24),
                  0,
                  *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFF0uLL,
                  *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
              v11 = *v10;
              v12 = (_QWORD *)v10[1];
              if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
                __fastfail(3u);
              *v12 = v11;
              *(_QWORD *)(v11 + 8) = v12;
              result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(a1 + 32))(v10, 32LL);
            }
            else
            {
              result = HvpFreeBin(
                         a1,
                         *(_DWORD *)(v7 + 24),
                         0,
                         *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFF0uLL,
                         *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
            }
          }
          *(_QWORD *)v7 = 0LL;
          *(_QWORD *)(v7 + 8) = 0LL;
        }
        ++v6;
        v7 += 40LL;
      }
      while ( v6 < 0x200 );
      ++v4;
      v5 += 8LL;
    }
    while ( v4 <= v3 );
  }
  return result;
}
