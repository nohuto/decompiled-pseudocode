/*
 * XREFs of MmImageSectionPagable @ 0x14047C974
 * Callers:
 *     MiSnapDriverRange @ 0x14047C564 (MiSnapDriverRange.c)
 *     MmResetDriverPaging @ 0x14047C8AC (MmResetDriverPaging.c)
 *     sub_140777D18 @ 0x140777D18 (sub_140777D18.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     MiLockPagableSections @ 0x1407A41E0 (MiLockPagableSections.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmImageSectionPagable(__int64 a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 0LL;
  if ( *(_DWORD *)a1 == 1633969454 )
    return 1LL;
  if ( *(_DWORD *)a1 == 1162297680 )
  {
    v2 = *(_BYTE *)(a1 + 4);
    result = 1LL;
    if ( v2 == 75 && *(_BYTE *)(a1 + 5) == 68 )
    {
      return (unsigned __int8)KdPageDebuggerSection;
    }
    else if ( v2 == 86 && *(_BYTE *)(a1 + 5) == 82 && *(_BYTE *)(a1 + 6) == 70 && (MiFlags & 1) != 0 )
    {
      return 0LL;
    }
  }
  return result;
}
