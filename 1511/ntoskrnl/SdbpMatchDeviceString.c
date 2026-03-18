/*
 * XREFs of SdbpMatchDeviceString @ 0x14067ED50
 * Callers:
 *     SdbpMatchAcpi @ 0x14054F358 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x14054F3A8 (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x14054F3F8 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x14054F448 (SdbpMatchCpu.c)
 * Callees:
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x1403B6498 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140535F9C (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
