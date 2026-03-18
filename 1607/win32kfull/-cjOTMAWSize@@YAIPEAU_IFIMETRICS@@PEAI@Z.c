/*
 * XREFs of ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C0012CCC
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0011C6C (cjIFIMetricsToOTMW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0012A48 (GreGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjOTMAWSize(struct _IFIMETRICS *a1, unsigned int *a2)
{
  __int64 v3; // rdi
  const WCHAR *v4; // rdx
  int v6; // ebx
  __int64 v7; // rsi
  ULONG v8; // esi
  NTSTATUS v9; // eax
  ULONG v10; // r15d
  bool v11; // r12
  ULONG v12; // r15d
  __int64 v13; // rsi
  const WCHAR *v14; // rdx
  ULONG v15; // esi
  NTSTATUS v16; // eax
  bool v17; // r12
  ULONG v18; // r15d
  __int64 v19; // rsi
  const WCHAR *v20; // rdx
  ULONG v21; // esi
  NTSTATUS v22; // eax
  int v23; // r12d
  ULONG v24; // r15d
  const WCHAR *v25; // rdx
  ULONG v26; // edi
  ULONG v27; // r15d
  ULONG BytesInMultiByteString; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 240;
  v3 = -1LL;
  v4 = (const WCHAR *)((char *)a1 + a1->dpwszFamilyName);
  v6 = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( v4[v7] );
  v8 = 2 * v7;
  v9 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v4, v8);
  v10 = BytesInMultiByteString;
  *a2 += v8;
  v11 = v9 >= 0;
  v12 = v10 + 236;
  v13 = -1LL;
  v14 = (const WCHAR *)((char *)a1 + a1->dpwszFaceName);
  do
    ++v13;
  while ( v14[v13] );
  v15 = 2 * v13;
  v16 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v14, v15);
  *a2 += v15;
  v17 = v16 >= 0 && v11;
  v18 = BytesInMultiByteString + v12;
  v19 = -1LL;
  v20 = (const WCHAR *)((char *)a1 + a1->dpwszStyleName);
  do
    ++v19;
  while ( v20[v19] );
  v21 = 2 * v19;
  v22 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v20, v21);
  *a2 += v21;
  v23 = v22 >= 0 && v17;
  v24 = BytesInMultiByteString + v18;
  v25 = (const WCHAR *)((char *)a1 + a1->dpwszUniqueName);
  do
    ++v3;
  while ( v25[v3] );
  v26 = 2 * v3;
  LOBYTE(v6) = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v25, v26) >= 0;
  v27 = BytesInMultiByteString + v24;
  *a2 += v26;
  return (v23 & v6) != 0 ? v27 : 0;
}
