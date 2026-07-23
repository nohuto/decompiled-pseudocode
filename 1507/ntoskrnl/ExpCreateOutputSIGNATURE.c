/*
 * XREFs of ExpCreateOutputSIGNATURE @ 0x1406F1298
 * Callers:
 *     ExpTranslateEfiPath @ 0x1406F3630 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1406F3C98 (ExpTranslateNtPath.c)
 * Callees:
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     wcscat_s @ 0x140177CE8 (wcscat_s.c)
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __fastcall ExpCreateOutputSIGNATURE(
        __int64 a1,
        unsigned int *a2,
        GUID *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        wchar_t *Src,
        char a8)
{
  unsigned int v8; // esi
  __int64 v10; // rbp
  int v11; // edi
  __int64 v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // rbx
  NTSTATUS result; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-48h] BYREF
  unsigned int *v21; // [rsp+88h] [rbp+10h]

  v21 = a2;
  v8 = 63;
  if ( a8 == 1 )
    v8 = 93;
  v10 = -1LL;
  v11 = 0;
  if ( Src )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( Src[v12] );
    v8 += v12;
  }
  else
  {
    LODWORD(v12) = 0;
  }
  v13 = 2 * v8 + 12;
  if ( *a2 >= v13 )
  {
    v14 = a1 + 12;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 4) = v13;
    *(_DWORD *)(a1 + 8) = 2;
    wcscpy_s((wchar_t *)(a1 + 12), v8, L"signature(");
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v14 + 2 * v15) );
    if ( a8 == 1 )
    {
      result = RtlStringFromGUIDEx(a3, &GuidString, 1u);
      if ( result < 0 )
        return result;
      wcscat_s((wchar_t *)(v14 + 2LL * (unsigned int)v15), v8 - (unsigned int)v15, GuidString.Buffer);
      v17 = (GuidString.Length >> 1) + (int)v15;
      ExFreePoolWithTag(GuidString.Buffer, 0);
    }
    else
    {
      swprintf_s((wchar_t *)(v14 + 2LL * (unsigned int)v15), v8 - (unsigned int)v15, L"%08x", a3->Data1);
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)(v14 + 2LL * (unsigned int)v15 + 2 * v18) );
      v17 = (unsigned int)(v18 + v15);
    }
    swprintf_s((wchar_t *)(v14 + 2 * v17), v8 - (unsigned int)v17, L"-%08x-%016I64x-%016I64x)", *a4, *a5, *a6);
    do
      ++v10;
    while ( *(_WORD *)(v14 + 2 * v17 + 2 * v10) );
    v19 = (unsigned int)(v10 + v17);
    if ( (_DWORD)v12 )
      wcscpy_s((wchar_t *)(v14 + 2 * v19), v8 - (unsigned int)v19, Src);
    a2 = v21;
  }
  else
  {
    v11 = -1073741789;
  }
  *a2 = v13;
  return v11;
}
