/*
 * XREFs of vProcessEntry @ 0x140104BB8
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1403FB260 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     vCheckCharSet @ 0x140104C90 (vCheckCharSet.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall vProcessEntry(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int16 *v5; // rdx
  unsigned __int16 *v7; // rax
  unsigned int v8; // ebx
  unsigned __int16 v9; // cx
  unsigned __int16 *v10; // rdi
  __int64 v11; // rsi

  v5 = a1 + 32;
  v7 = a1;
  v8 = 0;
  do
  {
    v9 = *v7;
    if ( !*v7 || v7 >= v5 )
    {
      v10 = 0LL;
      goto LABEL_10;
    }
    v10 = ++v7;
  }
  while ( v9 != 44 );
  if ( v10 )
  {
    v11 = v10 - a1;
    vCheckCharSet(a2, v10);
    goto LABEL_7;
  }
LABEL_10:
  LODWORD(v11) = 32;
  a2[32] = 257;
LABEL_7:
  cCapString(a2, a1, v11);
  if ( a3 )
  {
    if ( v10 )
    {
      memmove(a3, a1, 2LL * (int)v11 - 2);
      a3[(int)v11 - 1] = 0;
    }
    else
    {
      return (unsigned int)StringCchCopyW(a3, (int)v11, a1);
    }
  }
  return v8;
}
