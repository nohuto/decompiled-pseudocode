/*
 * XREFs of RtlpHashStringToAtom @ 0x180052390
 * Callers:
 *     RtlpFreeAllAtom @ 0x180051E14 (RtlpFreeAllAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005203C (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x180052250 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x180050A80 (RtlUpcaseUnicodeChar.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180052590 (RtlpAtomMapAtomToHandleEntry.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 */

__int64 __fastcall RtlpHashStringToAtom(
        __int64 a1,
        WCHAR *a2,
        __int64 a3,
        __int64 **a4,
        _DWORD *a5,
        _QWORD *a6,
        __int64 *a7)
{
  WCHAR *v10; // rsi
  unsigned int i; // edi
  WCHAR v12; // ax
  __int64 v13; // rsi
  __int64 *v14; // r15
  __int64 j; // rdi

  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v10 = a2;
    for ( i = 0; *v10; i += v12 + (v12 >> 1) + 2 * v12 )
    {
      v12 = *v10++;
      if ( v12 >= 0x61u )
      {
        if ( v12 > 0x7Au )
          v12 = RtlUpcaseUnicodeChar(v12);
        else
          v12 -= 32;
      }
    }
    v13 = v10 - a2;
    if ( (unsigned int)v13 > 0xFF )
    {
      v14 = 0LL;
      j = 0LL;
    }
    else
    {
      v14 = (__int64 *)(a1 + 8LL * (i % *(_DWORD *)(a1 + 64)) + 72);
      for ( j = *v14;
            j && (*(unsigned __int8 *)(j + 16) != (_DWORD)v13 || wcsicmp((const wchar_t *)(j + 18), a2));
            j = *(_QWORD *)j )
      {
        v14 = (__int64 *)j;
      }
    }
    if ( a4 )
      *a4 = v14;
    if ( j )
      goto LABEL_16;
    if ( !a5 )
      goto LABEL_19;
    *a5 = 2 * v13;
  }
  else
  {
    j = 0LL;
    if ( (unsigned __int16)a2 >= 0xC000u )
      j = RtlpAtomMapAtomToHandleEntry(a1, (unsigned __int16)a2 & 0x3FFF);
    if ( a4 )
      *a4 = 0LL;
  }
  if ( !j )
    goto LABEL_19;
LABEL_16:
  if ( !a6 )
  {
LABEL_19:
    *a7 = j;
    return 0LL;
  }
  if ( j != -12 )
  {
    *a6 = j + 12;
    goto LABEL_19;
  }
  return 3221225495LL;
}
