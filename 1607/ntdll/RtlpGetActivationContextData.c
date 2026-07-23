/*
 * XREFs of RtlpGetActivationContextData @ 0x18003E068
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18003DAE0 (RtlQueryInformationActivationContext.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080A40 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180082B18 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetActivationContextData(int a1, __int64 a2, __int64 a3, const char **a4)
{
  unsigned int v4; // r10d
  char v5; // r11
  __int64 v6; // rcx
  unsigned int v8; // eax
  const char *v9; // rax

  v4 = 0;
  v5 = a1;
  if ( !a4 )
    return (unsigned int)-1073741582;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741585;
  *a4 = 0LL;
  switch ( a2 )
  {
    case 0LL:
      if ( !a3 || (v8 = *(_DWORD *)(a3 + 24) & 7, v8 <= 1) )
      {
        v6 = 760LL;
LABEL_6:
        *a4 = *(const char **)(&NtCurrentPeb()->InheritedAddressSpace + v6);
        goto LABEL_7;
      }
      if ( v8 == 4 )
      {
LABEL_11:
        v9 = "Actx ";
        if ( (v5 & 1) == 0 )
          v9 = *a4;
        goto LABEL_13;
      }
      if ( v8 != 2 )
        return (unsigned int)-1073741584;
LABEL_20:
      v6 = 776LL;
      goto LABEL_6;
    case -4LL:
      goto LABEL_20;
    case -3LL:
      v9 = "Actx ";
LABEL_13:
      *a4 = v9;
      return v4;
  }
  *a4 = *(const char **)(a2 + 24);
LABEL_7:
  if ( !*a4 )
    goto LABEL_11;
  return v4;
}
