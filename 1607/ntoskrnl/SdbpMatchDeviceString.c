/*
 * XREFs of SdbpMatchDeviceString @ 0x1406C39E4
 * Callers:
 *     SdbpMatchCpu @ 0x1405730E8 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140573138 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140573188 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x1405731D8 (SdbpMatchAcpi.c)
 * Callees:
 *     _wcsicmp @ 0x14014D79C (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
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
