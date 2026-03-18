/*
 * XREFs of MmImageSectionPagable @ 0x1403CF324
 * Callers:
 *     MiSnapDriverRange @ 0x1403CEF0C (MiSnapDriverRange.c)
 *     MmResetDriverPaging @ 0x1403CF258 (MmResetDriverPaging.c)
 *     sub_14072DC88 @ 0x14072DC88 (sub_14072DC88.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     MiLockPagableSections @ 0x14074CDD0 (MiLockPagableSections.c)
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
