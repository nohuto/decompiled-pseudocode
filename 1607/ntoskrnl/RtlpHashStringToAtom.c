/*
 * XREFs of RtlpHashStringToAtom @ 0x140428450
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140014214 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x14010D200 (RtlpFreeAllAtom.c)
 *     RtlLookupAtomInAtomTable @ 0x140428260 (RtlLookupAtomInAtomTable.c)
 * Callees:
 *     RtlpLookupOrCreateLowBox @ 0x140013BBC (RtlpLookupOrCreateLowBox.c)
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x140424810 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlUpcaseUnicodeChar @ 0x1404F66C0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall RtlpHashStringToAtom(
        __int64 a1,
        WCHAR *a2,
        char a3,
        unsigned __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  unsigned __int64 j; // rsi
  WCHAR *v12; // rbx
  unsigned int i; // edi
  WCHAR v14; // ax
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 LowBox; // rax

  j = 0LL;
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = a2;
    for ( i = 0; *v12; i += v14 + (v14 >> 1) + 2 * v14 )
    {
      v14 = *v12++;
      if ( v14 >= 0x61u )
      {
        if ( v14 > 0x7Au )
          v14 = RtlUpcaseUnicodeChar(v14);
        else
          v14 -= 32;
      }
    }
    v15 = v12 - a2;
    if ( (unsigned int)v15 > 0xFF )
    {
      v17 = 0LL;
    }
    else
    {
      v16 = i % *(_DWORD *)(a1 + 28) + 4LL;
      v17 = *(_QWORD *)(a1 + 8 * v16);
      for ( j = a1 + 8 * v16; v17; v17 = *(_QWORD *)v17 )
      {
        if ( *(unsigned __int8 *)(v17 + 40) == (_DWORD)v15 && !wcsicmp((const wchar_t *)(v17 + 42), a2) )
          break;
        j = v17;
      }
    }
    if ( a4 )
      *a4 = j;
    if ( !v17 )
    {
      if ( a5 )
        *a5 = 2 * v15;
      goto LABEL_19;
    }
  }
  else
  {
    v17 = 0LL;
    if ( (unsigned __int16)a2 >= 0xC000u )
      v17 = RtlpAtomMapAtomToHandleEntry(a1, (unsigned __int16)a2 & 0x3FFF);
    if ( a4 )
      *a4 = 0LL;
    if ( !v17 )
      goto LABEL_19;
  }
  if ( !a6 )
  {
LABEL_19:
    *a7 = v17;
    return 0LL;
  }
  LowBox = RtlpLookupOrCreateLowBox(a1, v17, a3);
  if ( LowBox )
  {
    *a6 = LowBox;
    goto LABEL_19;
  }
  return 3221225495LL;
}
