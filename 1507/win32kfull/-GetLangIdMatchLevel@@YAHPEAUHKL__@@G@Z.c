/*
 * XREFs of ?GetLangIdMatchLevel@@YAHPEAUHKL__@@G@Z @ 0x1C01EC43C
 * Callers:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C0047BD8 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLangIdMatchLevel(HKL a1, __int16 a2)
{
  unsigned int v3; // ebx
  __int16 v5; // ax

  v3 = 0;
  if ( !a2 )
    return 3LL;
  if ( ((**(_DWORD **)(gptiCurrent + 440LL) >> 9) & 1) != 0 && (WORD1(a1) & 0xF000) != 0xE000 )
    return 0LL;
  if ( (_WORD)a1 == a2 )
    return 3LL;
  if ( (unsigned __int16)LODWORD(KeGetPcr()->NtTib.Self[4].ArbitraryUserPointer) == a2 )
    return 2LL;
  v5 = glcidSystem;
  if ( !glcidSystem )
  {
    ZwQueryDefaultLocale(0, &glcidSystem);
    v5 = glcidSystem;
  }
  LOBYTE(v3) = v5 == a2;
  return v3;
}
