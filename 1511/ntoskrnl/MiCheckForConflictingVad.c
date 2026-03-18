/*
 * XREFs of MiCheckForConflictingVad @ 0x140038010
 * Callers:
 *     MiCheckForConflictingVadExistence @ 0x140037FF8 (MiCheckForConflictingVadExistence.c)
 *     MiUpdateVadBits @ 0x140462EC8 (MiUpdateVadBits.c)
 *     MmGetImageBase @ 0x1404CF44C (MmGetImageBase.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiCheckForConflictingVad(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 **v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8

  v3 = *(__int64 ***)(a1 + 1552);
  v4 = a2 >> 12;
  v5 = a3 >> 12;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v3 )
        return 0LL;
      if ( v5 >= (*((unsigned int *)v3 + 6) | ((unsigned __int64)*((unsigned __int8 *)v3 + 32) << 32)) )
        break;
      v3 = (__int64 **)*v3;
    }
    if ( v4 <= (*((unsigned int *)v3 + 7) | ((unsigned __int64)*((unsigned __int8 *)v3 + 33) << 32)) )
      break;
    v3 = (__int64 **)v3[1];
  }
  return v3;
}
