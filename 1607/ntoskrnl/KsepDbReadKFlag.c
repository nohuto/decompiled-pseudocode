/*
 * XREFs of KsepDbReadKFlag @ 0x1405740B4
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14053551C (KsepDbCacheReadDevice.c)
 * Callees:
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140574150 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbReadKFlag(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebp
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v9; // eax

  v6 = -1073741823;
  if ( a2 )
  {
    FirstTag = SdbFindFirstTag(a1, a2, 24577);
    if ( FirstTag )
    {
      StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
      if ( StringTagPtr )
      {
        *(_QWORD *)a3 = StringTagPtr;
        v9 = SdbFindFirstTag(a1, a2, 20485);
        if ( v9 )
        {
          *(_DWORD *)(a3 + 8) = 11;
          *(_QWORD *)(a3 + 32) = SdbReadQWORDTag(a1, v9, 0LL);
          v6 = 0;
          *(_QWORD *)(a3 + 16) = a3 + 32;
          *(_DWORD *)(a3 + 12) = 8;
        }
      }
    }
  }
  return v6;
}
