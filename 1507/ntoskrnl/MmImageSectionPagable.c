/*
 * XREFs of MmImageSectionPagable @ 0x1404F5320
 * Callers:
 *     MmResetDriverPaging @ 0x1404F523C (MmResetDriverPaging.c)
 *     MiSnapDriverRange @ 0x140574030 (MiSnapDriverRange.c)
 *     sub_14079AC8C @ 0x14079AC8C (sub_14079AC8C.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     MiLockPagableSections @ 0x1407C9688 (MiLockPagableSections.c)
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
