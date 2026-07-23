/*
 * XREFs of SdbpMatchDeviceString @ 0x1406C3B1C
 * Callers:
 *     SdbpMatchCpu @ 0x140573628 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140573678 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x1405736C8 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140573718 (SdbpMatchAcpi.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
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
