/*
 * XREFs of ConvertDevpropcompkeyToString @ 0x1406E3D28
 * Callers:
 *     PnpConvertDevpropcompkeyArrayToString @ 0x14062D65C (PnpConvertDevpropcompkeyArrayToString.c)
 *     ConvertDevpropertyToString @ 0x1406E3E70 (ConvertDevpropertyToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1400A8DE0 (RtlStringCbPrintfExW.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall ConvertDevpropcompkeyToString(__int64 a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  size_t v4; // rbp
  int v8; // ebx
  int v9; // r8d
  int v10; // eax
  const wchar_t *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rax
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  UnicodeString.Length = 0;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  if ( a3 >= 2 )
    *a2 = 0;
  v8 = RtlStringFromGUIDEx((unsigned int *)a1, (__int64)&UnicodeString, 1);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 20);
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741811;
        goto LABEL_23;
      }
      v10 = UnicodeString.Length + 26;
    }
    else
    {
      v10 = UnicodeString.Length + 30;
    }
    v11 = *(const wchar_t **)(a1 + 24);
    v12 = v10 + 2;
    if ( v11 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v11[v13] );
      v14 = v12 + 2 * v13;
    }
    else
    {
      v14 = v12 + 12;
    }
    v15 = v14 + 2;
    if ( a4 )
      *a4 = v15;
    if ( v15 > (unsigned int)v4 )
    {
      v8 = -1073741789;
    }
    else
    {
      v16 = L"(NULL)";
      v17 = L"System";
      if ( v11 )
        v16 = v11;
      if ( v9 )
        v17 = L"User";
      v8 = RtlStringCbPrintfExW(
             a2,
             v4,
             0LL,
             0LL,
             0x800u,
             L"[(%s %3d) %s %s]",
             UnicodeString.Buffer,
             *(_DWORD *)(a1 + 16),
             v17,
             v16);
    }
  }
LABEL_23:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v8;
}
