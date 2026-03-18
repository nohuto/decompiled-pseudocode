/*
 * XREFs of ?Report@CEventLogHandle@@QEAAJGKGPEAPEBG@Z @ 0x1400058A8
 * Callers:
 *     ?ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x1400047F8 (-ReportEvent@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CEventLogHandle::Report(
        HANDLE *this,
        WORD a2,
        DWORD a3,
        WORD wNumStrings,
        const unsigned __int16 **lpStrings)
{
  int result; // eax

  if ( ReportEventW(*this, a2, 0, a3, 0LL, wNumStrings, 0, lpStrings, 0LL) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
