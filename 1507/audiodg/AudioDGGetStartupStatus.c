/*
 * XREFs of AudioDGGetStartupStatus @ 0x140016F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AudioDGGetStartupStatus()
{
  if ( *((_QWORD *)&xmmword_140055BC0 + 1) )
    WaitForSingleObjectEx(*((HANDLE *)&xmmword_140055BC0 + 1), 0xFFFFFFFF, 0);
  return (unsigned int)dword_140055BB8;
}
