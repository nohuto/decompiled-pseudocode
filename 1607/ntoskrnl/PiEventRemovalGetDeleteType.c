/*
 * XREFs of PiEventRemovalGetDeleteType @ 0x1404869DC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpCompareGuid @ 0x14048A570 (PnpCompareGuid.c)
 */

__int64 __fastcall PiEventRemovalGetDeleteType(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  char v5; // al
  unsigned int v6; // edx
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 32);
  v5 = PnpCompareGuid(a2 + 104, &GUID_DEVICE_EJECT);
  v6 = 4;
  if ( !v5 )
  {
    if ( (*(_DWORD *)(a2 + 136) & 4) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 304);
      if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
      {
        if ( v7 >= 780 || v7 <= 774 || v7 == 777 )
          return 6;
        else
          return 5;
      }
      else if ( v7 != 777 && v7 > 774 && v7 < 780 || (*(_DWORD *)(*(_QWORD *)(v2 + 312) + 32LL) & 4) != 0 )
      {
        return 3;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
