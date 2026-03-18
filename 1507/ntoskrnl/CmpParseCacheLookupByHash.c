/*
 * XREFs of CmpParseCacheLookupByHash @ 0x14044C0C8
 * Callers:
 *     CmpParseCacheLookup @ 0x14044BDF8 (CmpParseCacheLookup.c)
 * Callees:
 *     CmpIsHiveLoadingOnOtherThread @ 0x140449E34 (CmpIsHiveLoadingOnOtherThread.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14044C1E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpParseCacheCompareUnicodeStrings @ 0x14044C208 (CmpParseCacheCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpParseCacheLookupByHash(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // r13
  unsigned int v9; // ebx
  unsigned int v13; // esi
  unsigned int v14; // ebp
  __int64 *v15; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r8d

  v8 = CmpParseCacheTable;
  v9 = 0;
  v13 = 0;
  if ( a5 )
  {
    while ( 2 )
    {
      v14 = *a4;
      v15 = *(__int64 **)(v8
                        + 8LL
                        * (((unsigned __int8)(-93 * (v14 ^ (*a4 >> 9))) ^ (unsigned __int8)((101027 * (v14 ^ (*a4 >> 9))) >> 9)) & 0x1F)
                        + 8);
      do
      {
        if ( !v15 )
          break;
        if ( *((_DWORD *)v15 + 10) == v14
          && *((_DWORD *)v15 + 11) == a2
          && (unsigned __int8)CmpParseCacheCompareUnicodeStrings(v15 + 3, a3, a6, a7) )
        {
          v17 = v15[6];
          if ( (*(_DWORD *)(v17 + 4) & 0x20000) != 0 )
          {
            return (unsigned int)-1073741444;
          }
          else if ( CmpIsHiveLoadingOnOtherThread(*(_QWORD *)(v17 + 32)) )
          {
            return (unsigned int)-1073741772;
          }
          else if ( (v19 & 0x40000) != 0 )
          {
            return (unsigned int)-1073740763;
          }
          else if ( (unsigned __int8)CmpReferenceKeyControlBlockUnsafe(v18) )
          {
            *a8 = v15[6];
          }
          else
          {
            return (unsigned int)-1073741670;
          }
          return v9;
        }
        v15 = (__int64 *)*v15;
      }
      while ( v15 );
      ++v13;
      ++a4;
      if ( v13 < a5 )
        continue;
      break;
    }
  }
  return 3221225524LL;
}
