/*
 * XREFs of RtlpQueryInformationActivationContextManifestResourceName @ 0x1800DB1A4
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18003DAE0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlpLocateActivationContextSectionForQuery @ 0x18007BEA0 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x18007BF60 (RtlpCrackActivationContextStringSectionHeader.c)
 */

__int64 __fastcall RtlpQueryInformationActivationContextManifestResourceName(
        _DWORD *a1,
        _DWORD *a2,
        size_t a3,
        size_t *a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // [rsp+20h] [rbp-50h]
  int v8; // [rsp+28h] [rbp-48h]
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int64 v10; // [rsp+38h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  int *v13; // [rsp+60h] [rbp-10h] BYREF
  __int64 v14; // [rsp+88h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+20h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+28h] BYREF

  LODWORD(v14) = 0;
  v15 = -1073741595;
  if ( a4 )
    *a4 = 4LL;
  if ( a3 < 4 )
    return 3221225507LL;
  RtlpLocateActivationContextSectionForQuery(&v14, (int *)&v15, a2, a3, a4, 4uLL, a1, v10, 1u, &v13, &v16);
  if ( (_DWORD)v14 == 2 )
    return v15;
  result = RtlpCrackActivationContextStringSectionHeader(v13, v16, v6, 0LL, v7, v8, v9, v11, v12, 0LL, &v14);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *a2 = *(_DWORD *)(v14 + 52);
  }
  return result;
}
