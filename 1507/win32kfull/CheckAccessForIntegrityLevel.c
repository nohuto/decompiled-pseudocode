/*
 * XREFs of CheckAccessForIntegrityLevel @ 0x1C01D1234
 * Callers:
 *     NtUserSetShellWindowEx @ 0x1C01497F0 (NtUserSetShellWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckAccessForIntegrityLevel(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx

  v2 = 0;
  if ( !gbEnforceUIPI )
    return 1;
  if ( (unsigned int)a1 > (unsigned int)a2 )
    return 1;
  if ( (_DWORD)a1 == (_DWORD)a2 )
  {
    v3 = HIDWORD(a1);
    v4 = HIDWORD(a2);
    if ( (_DWORD)v3 == (_DWORD)v4 || (_DWORD)v3 == -1 || (_DWORD)v4 == -1 )
      return 1;
  }
  return v2;
}
