/*
 * XREFs of MiCloneNoChange @ 0x14050AF6C
 * Callers:
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 * Callees:
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiCloneNoChange(__int64 a1, __int64 a2)
{
  __int64 *i; // rax
  int v3; // ecx
  int v4; // r9d

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
        goto LABEL_10;
      if ( v4 || (v3 & 3) == 0 )
        break;
    }
LABEL_13:
    ;
  }
  v4 |= 1u;
LABEL_10:
  if ( !v4 )
    goto LABEL_13;
  if ( MiAddSecureEntry(
         a2,
         (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12,
         ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF,
         v4,
         ((unsigned __int8)v3 >> 5) & 1) )
  {
    return 0LL;
  }
  return 3221225626LL;
}
