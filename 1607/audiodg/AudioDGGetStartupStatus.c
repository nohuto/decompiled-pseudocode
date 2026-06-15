/*
 * XREFs of AudioDGGetStartupStatus @ 0x140017020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGGetStartupStatus()
{
  if ( *((_QWORD *)&xmmword_140054C90 + 1) )
    WaitForSingleObjectEx(*((HANDLE *)&xmmword_140054C90 + 1), 0xFFFFFFFF, 0);
  return (unsigned int)dword_140054C88;
}
