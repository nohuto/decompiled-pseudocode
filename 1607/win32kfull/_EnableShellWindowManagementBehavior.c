/*
 * XREFs of _EnableShellWindowManagementBehavior @ 0x1C0134AB0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 EnableShellWindowManagementBehavior()
{
  __int64 v0; // r8
  int v1; // r9d
  int v2; // r10d
  int v3; // r11d
  int v4; // ecx
  __int64 v6; // rcx

  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( (v2 & 0xFFFFFF80) != 0 )
    {
      v6 = 87LL;
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
      v6 = 5023LL;
    }
  }
  else
  {
    v6 = 5LL;
  }
  UserSetLastError(v6);
  return 0LL;
}
