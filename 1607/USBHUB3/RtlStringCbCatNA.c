/*
 * XREFs of RtlStringCbCatNA @ 0x1C003074C
 * Callers:
 *     HUBACPI_EvaluateDsmMethod @ 0x1C006F6E0 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C006FB54 (HUBACPI_EvalAcpiMethodEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNA(NTSTRSAFE_PSTR pszDest, size_t cbDest, STRSAFE_PCNZCH pszSrc, size_t cbToAppend)
{
  __int64 v5; // rax
  NTSTRSAFE_PSTR v6; // rdx
  char *v7; // rdx
  NTSTATUS v8; // ecx
  __int64 v9; // r10
  size_t v10; // r8
  const char *v11; // r11
  char v12; // al

  v5 = 256LL;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  if ( !v5 || cbToAppend > 0x7FFFFFFE )
    return -1073741811;
  v7 = &pszDest[256 - v5];
  v8 = 0;
  v9 = v5;
  v10 = cbToAppend;
  v11 = (const char *)(pszSrc - v7);
  do
  {
    if ( !v10 )
      break;
    v12 = v7[(_QWORD)v11];
    if ( !v12 )
      break;
    *v7 = v12;
    --v10;
    ++v7;
    --v9;
  }
  while ( v9 );
  if ( !v9 )
  {
    --v7;
    v8 = -2147483643;
  }
  *v7 = 0;
  return v8;
}
