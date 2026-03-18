/*
 * XREFs of MiCloneNoChange @ 0x1404066D0
 * Callers:
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 * Callees:
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiCloneNoChange(__int64 a1, __int64 a2)
{
  __int64 *i; // r8
  int v3; // ecx
  unsigned int v4; // r9d

  for ( i = *(__int64 **)(a1 + 56); ; i = (__int64 *)*i )
  {
    if ( !i )
      return 0LL;
    if ( *((_DWORD *)i + 2) == 2 )
    {
      v3 = *((_DWORD *)i + 4);
      v4 = 0;
      if ( (v3 & 4) != 0 )
        v4 = 0x80000000;
      if ( (v3 & 8) == 0 )
        goto LABEL_9;
      if ( v4 || (v3 & 3) == 0 )
        break;
    }
LABEL_13:
    ;
  }
  v4 |= 1u;
LABEL_9:
  if ( !v4 )
    goto LABEL_13;
  if ( MiAddSecureEntry(
         a2,
         *(_DWORD *)(a2 + 24) << 12,
         (*(_DWORD *)(a2 + 28) << 12) | 0xFFFu,
         v4,
         ((unsigned __int8)v3 >> 5) & 1) )
  {
    return 0LL;
  }
  return 3221225626LL;
}
