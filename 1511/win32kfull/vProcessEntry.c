/*
 * XREFs of vProcessEntry @ 0x1C00F695C
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1C0378D90 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     cCapString @ 0x1C0018B2C (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001B5E8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     vCheckCharSet @ 0x1C00F6A2C (vCheckCharSet.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall vProcessEntry(unsigned __int16 *a1, WCHAR *a2, char *a3)
{
  unsigned __int16 *v3; // rax
  unsigned __int16 *v5; // rcx
  unsigned int v6; // edi
  unsigned __int16 *v9; // rsi
  __int64 v10; // rbx
  size_t v11; // rbx

  v3 = a1;
  v5 = a1 + 32;
  v6 = 0;
  if ( *v3 )
  {
    while ( v3 < v5 )
    {
      if ( *v3 == 44 )
      {
        v9 = v3 + 1;
        goto LABEL_7;
      }
      if ( !*++v3 )
        break;
    }
  }
  v9 = 0LL;
LABEL_7:
  if ( v9 )
  {
    v10 = v9 - a1;
    vCheckCharSet(a2, v9);
  }
  else
  {
    LODWORD(v10) = 32;
    a2[32] = 257;
  }
  cCapString(a2, a1, v10);
  if ( a3 )
  {
    if ( v9 )
    {
      v11 = 2LL * ((int)v10 - 1);
      memmove(a3, a1, v11);
      *(_WORD *)&a3[v11] = 0;
    }
    else
    {
      return (unsigned int)StringCchCopyW(a3, (int)v10, (char *)a1);
    }
  }
  return v6;
}
