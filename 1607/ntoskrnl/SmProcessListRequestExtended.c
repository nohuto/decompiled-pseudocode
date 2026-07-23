/*
 * XREFs of SmProcessListRequestExtended @ 0x140696B48
 * Callers:
 *     SmProcessListRequest @ 0x140696984 (SmProcessListRequest.c)
 * Callees:
 *     SmKmStoreDereference @ 0x1400030FC (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x140003118 (SmKmStoreReference.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x1406980DC (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  int Path; // ebp

  v4 = 0LL;
  v5 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v6 = 1;
    do
    {
      v7 = a2 + 4LL * v5;
      v8 = SmKmStoreReference(a1, *(_DWORD *)(v7 + 4));
      v4 = v8;
      if ( v8 )
      {
        v9 = (unsigned __int64)v5 << 7;
        if ( *(_BYTE *)(v8 + 5860) == 1 )
        {
          Path = SmKmFileInfoGetPath(v8 + 6056, v9 + a2 + 132, 128LL);
          if ( Path < 0 )
            goto LABEL_12;
        }
        else
        {
          *(_WORD *)(a2 + v9 + 132) = 0;
        }
        SmKmStoreDereference(a1, *(_DWORD *)(v4 + 5856));
        v4 = 0LL;
      }
      else
      {
        memmove((void *)(v7 + 4), (const void *)(a2 + 4 * (v6-- + 1LL)), 4 * (*(unsigned __int8 *)(a2 + 1) - v5--) - 4);
        --*(_BYTE *)(a2 + 1);
      }
      ++v5;
      ++v6;
    }
    while ( v5 < *(unsigned __int8 *)(a2 + 1) );
  }
  Path = 0;
LABEL_12:
  if ( v4 )
    SmKmStoreDereference(a1, *(_DWORD *)(v4 + 5856));
  return (unsigned int)Path;
}
