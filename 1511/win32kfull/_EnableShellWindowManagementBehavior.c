/*
 * XREFs of _EnableShellWindowManagementBehavior @ 0x1C0113580
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 */

__int64 EnableShellWindowManagementBehavior()
{
  __int64 v0; // r8
  int v1; // r9d
  int v2; // r10d
  int v3; // r11d
  int v4; // ecx
  int v6; // ecx

  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( (v2 & 0xFFFFFF80) != 0 )
    {
      v6 = 87;
    }
    else
    {
      v4 = v3 & ~v1 | v1 & v2 & gdwShellWindowManagementBehavior;
      if ( !v4 || *(_QWORD *)(v0 + 320) )
      {
        *(_DWORD *)(v0 + 328) = v4;
        return 1LL;
      }
      *(_DWORD *)(v0 + 328) = 0;
      v6 = 5023;
    }
  }
  else
  {
    v6 = 5;
  }
  UserSetLastError(v6);
  return 0LL;
}
