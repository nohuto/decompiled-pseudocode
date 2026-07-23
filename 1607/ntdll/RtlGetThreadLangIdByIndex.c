/*
 * XREFs of RtlGetThreadLangIdByIndex @ 0x1800E5AB0
 * Callers:
 *     <none>
 * Callees:
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800104C8 (GetLCIDFromLangListNodeWithLICCheck.c)
 */

__int64 __fastcall RtlGetThreadLangIdByIndex(__int64 a1, unsigned int a2, _DWORD *a3, unsigned int *a4)
{
  _QWORD *PreferredLanguages; // rdx
  unsigned __int16 v8; // cx
  unsigned int v9; // eax
  unsigned __int16 v11[2]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int LCIDFromLangListNodeWithLICCheck; // [rsp+34h] [rbp-14h]
  unsigned int v13; // [rsp+38h] [rbp-10h]
  bool v14; // [rsp+50h] [rbp+8h] BYREF

  LCIDFromLangListNodeWithLICCheck = 0;
  v14 = 0;
  v11[0] = 0;
  v13 = 0;
  if ( (_DWORD)a1 || !a3 )
    return 3221225485LL;
  PreferredLanguages = NtCurrentTeb()->PreferredLanguages;
  if ( PreferredLanguages )
  {
    if ( PreferredLanguages[3] )
    {
      v13 = *((unsigned __int16 *)PreferredLanguages + 2);
      if ( a2 < v13 )
        LCIDFromLangListNodeWithLICCheck = GetLCIDFromLangListNodeWithLICCheck(
                                             a1,
                                             (__int64)PreferredLanguages,
                                             a2,
                                             v11,
                                             &v14);
    }
  }
  v8 = v11[0];
  *a3 = v11[0];
  if ( a4 )
    *a4 = v13;
  v9 = LCIDFromLangListNodeWithLICCheck;
  if ( !LCIDFromLangListNodeWithLICCheck )
  {
    if ( !v8 )
      return (unsigned int)-1073741275;
    return v9;
  }
  return LCIDFromLangListNodeWithLICCheck;
}
