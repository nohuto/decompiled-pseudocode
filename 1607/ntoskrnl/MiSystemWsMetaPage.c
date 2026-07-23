/*
 * XREFs of MiSystemWsMetaPage @ 0x140103FD0
 * Callers:
 *     MiActivePageClaimCandidate @ 0x1401037E0 (MiActivePageClaimCandidate.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSystemWsMetaPage(__int64 a1, _QWORD *a2)
{
  int v2; // ebp
  __int64 *v3; // r11
  unsigned int i; // ebx
  __int64 v5; // r9
  ULONG_PTR *v6; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r10
  int v9; // edi
  unsigned __int64 v10; // rax

  v2 = 0;
  v3 = (__int64 *)&unk_140326DF8;
  for ( i = 0; i < 3; ++i )
  {
    v5 = *v3;
    if ( *v3 && *(_QWORD *)(v5 + 104) )
    {
      v6 = (*(_BYTE *)(v5 + 184) & 7) == 2 ? &BugCheckParameter2 : (ULONG_PTR *)(*(_QWORD *)(v5 + 16) + 416LL);
      v7 = (((v6[9] - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v8 = ((v6[10] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v9 = 0;
      v10 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( v10 >= 0xFFFFF68000000000uLL )
      {
        while ( v10 <= 0xFFFFF6FFFFFFFFFFuLL && ((v10 >> 9) & 0x7FFFFFFFF8LL) != 0x7B7DBEDF68LL )
        {
          if ( v10 >= v8 && v10 <= v7 )
          {
            *a2 = v5;
            LOBYTE(v2) = v9 != 0;
            return (unsigned int)(v2 + 1);
          }
          if ( v9 != 1 )
          {
            ++v9;
            v8 &= 0xFFFFFFFFFFFFF000uLL;
            v10 = (__int64)(v10 << 25) >> 16;
            if ( v10 >= 0xFFFFF68000000000uLL )
              continue;
          }
          break;
        }
      }
    }
    ++v3;
  }
  return 0LL;
}
