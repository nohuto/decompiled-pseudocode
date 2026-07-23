/*
 * XREFs of ConvertDevpropcompkeyToString @ 0x14071D79C
 * Callers:
 *     PnpConvertDevpropcompkeyArrayToString @ 0x14067E130 (PnpConvertDevpropcompkeyArrayToString.c)
 *     ConvertDevpropertyToString @ 0x14071D904 (ConvertDevpropertyToString.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x14001AFBC (RtlStringCbPrintfExW.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 */

__int64 __fastcall ConvertDevpropcompkeyToString(__int64 a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  size_t v4; // rsi
  NTSTATUS v8; // ebx
  int v9; // r9d
  const wchar_t *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rcx
  const wchar_t *v13; // rdx
  int v14; // ecx
  const wchar_t *v15; // r8
  unsigned int v16; // ecx
  UNICODE_STRING GuidString; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  GuidString.Length = 0;
  *(_QWORD *)&GuidString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&GuidString.Buffer + 2) = 0;
  HIWORD(GuidString.Buffer) = 0;
  if ( a3 >= 2 )
    *a2 = 0;
  v8 = RtlStringFromGUIDEx((PGUID)a1, &GuidString, 1u);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 20);
    v10 = L"System";
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741811;
        goto LABEL_25;
      }
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( aUser_0[v12] );
    }
    else
    {
      v11 = -1LL;
      v12 = -1LL;
      do
        ++v12;
      while ( aSystem_7[v12] );
    }
    v13 = *(const wchar_t **)(a1 + 24);
    v14 = GuidString.Length + 18 + 2 * v12 + 2;
    v15 = L"(NULL)";
    if ( v13 )
    {
      do
        ++v11;
      while ( v13[v11] );
    }
    else
    {
      do
        ++v11;
      while ( aNull_8[v11] );
    }
    v16 = v14 + 2 * v11 + 2;
    if ( a4 )
      *a4 = v16;
    if ( v16 > (unsigned int)v4 )
    {
      v8 = -1073741789;
    }
    else
    {
      if ( v13 )
        v15 = v13;
      if ( v9 )
        v10 = L"User";
      v8 = RtlStringCbPrintfExW(
             a2,
             v4,
             0LL,
             0LL,
             0x800u,
             L"[(%s %3d) %s %s]",
             GuidString.Buffer,
             *(_DWORD *)(a1 + 16),
             v10,
             v15);
    }
  }
LABEL_25:
  RtlFreeAnsiString(&GuidString);
  return (unsigned int)v8;
}
