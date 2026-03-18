/*
 * XREFs of EtwTraceSPIBlockedByFiltering @ 0x1C00051F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C0005214 (Template_q.c)
 */

__int64 __fastcall EtwTraceSPIBlockedByFiltering(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
    return Template_q(a1, &SPIBlockedByFiltering, a3, (unsigned int)a1);
  return result;
}
