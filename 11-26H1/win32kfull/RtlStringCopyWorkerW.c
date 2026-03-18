/*
 * XREFs of RtlStringCopyWorkerW @ 0x1401531D0
 * Callers:
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1402874CC (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     _RegisterDManipHook @ 0x1402935E0 (_RegisterDManipHook.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v5; // r8
  __int64 v6; // rax
  signed __int64 v7; // r9
  wchar_t v8; // dx
  NTSTRSAFE_PWSTR v9; // rdx
  NTSTATUS result; // eax

  v5 = cchDest;
  if ( cchDest )
  {
    v6 = 2147483646LL;
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !v6 )
        break;
      v8 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
      if ( !v8 )
        break;
      *pszDest = v8;
      --v6;
      ++pszDest;
      --v5;
    }
    while ( v5 );
  }
  v9 = pszDest - 1;
  result = -2147483643;
  if ( v5 )
  {
    v9 = pszDest;
    result = 0;
  }
  *v9 = 0;
  return result;
}
