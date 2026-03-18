/*
 * XREFs of _EnableShellWindowManagementBehavior @ 0x1C0157040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 */

__int64 EnableShellWindowManagementBehavior()
{
  __int64 v0; // r8
  int v1; // r9d
  int v2; // r10d
  int v3; // ecx
  int v5; // ecx

  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( (v2 & 0xFFFFFFC0) != 0 )
    {
      v5 = 87;
    }
    else
    {
      v3 = *(_DWORD *)(v0 + 320) & ~v1 | v1 & v2 & gdwShellWindowManagementBehavior;
      *(_DWORD *)(v0 + 320) = v3;
      if ( !v3 || *(_QWORD *)(v0 + 312) )
        return 1LL;
      *(_DWORD *)(v0 + 320) = 0;
      v5 = 5023;
    }
  }
  else
  {
    v5 = 5;
  }
  UserSetLastError(v5);
  return 0LL;
}
