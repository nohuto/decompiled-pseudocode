/*
 * XREFs of _wcstoi64 @ 0x1401744FC
 * Callers:
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 * Callees:
 *     wcstoxq @ 0x140174528 (wcstoxq.c)
 */

__int64 __cdecl wcstoi64(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxq((unsigned int)&_initiallocalestructinfo, (_DWORD)Str, (_DWORD)EndPtr, Radix, 0, 0LL);
}
