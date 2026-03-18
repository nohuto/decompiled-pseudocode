/*
 * XREFs of ValidateHandleSecure @ 0x1C0041700
 * Callers:
 *     HMValidateHandle @ 0x1C0041588 (HMValidateHandle.c)
 * Callees:
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C00417B8 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C0083AF4 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall ValidateHandleSecure(void *a1, char a2)
{
  __int64 v4; // rbx

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v4 = qword_1C0102D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0102D50;
  if ( WORD1(a1) != *(_WORD *)(v4 + 18) && WORD1(a1) != 0xFFFF && (WORD1(a1) || !PsGetCurrentProcessWow64Process()) )
    return 0LL;
  if ( !*(_BYTE *)(v4 + 16)
    || (a2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, (struct _HANDLEENTRY *)v4)
    || (a2 & 2) == 0 )
  {
    return 0LL;
  }
  if ( gbValidateHandleForIL )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v4);
  return 1LL;
}
