/*
 * XREFs of ExpCreateOutputSIGNATURE @ 0x1406B06A4
 * Callers:
 *     ExpTranslateEfiPath @ 0x1406B278C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1406B2DDC (ExpTranslateNtPath.c)
 * Callees:
 *     swprintf_s @ 0x140151960 (swprintf_s.c)
 *     wcscat_s @ 0x140152FF8 (wcscat_s.c)
 *     wcscpy_s @ 0x140153094 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 */

__int64 __fastcall ExpCreateOutputSIGNATURE(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        wchar_t *a7,
        char a8)
{
  unsigned int v8; // esi
  __int64 v10; // rbp
  unsigned int v11; // edi
  __int64 v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned __int16 v20; // [rsp+30h] [rbp-48h] BYREF
  wchar_t *Src; // [rsp+38h] [rbp-40h]
  unsigned int *v22; // [rsp+88h] [rbp+10h]

  v22 = a2;
  v8 = 63;
  if ( a8 == 1 )
    v8 = 93;
  v10 = -1LL;
  v11 = 0;
  if ( a7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a7[v12] );
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
      result = RtlStringFromGUIDEx(a3, (__int64)&v20, 1);
      if ( (int)result < 0 )
        return result;
      wcscat_s((wchar_t *)(v14 + 2LL * (unsigned int)v15), v8 - (unsigned int)v15, Src);
      v17 = (v20 >> 1) + (int)v15;
      ExFreePoolWithTag(Src, 0);
    }
    else
    {
      swprintf_s((wchar_t *)(v14 + 2LL * (unsigned int)v15), v8 - (unsigned int)v15, L"%08x", *a3);
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
      wcscpy_s((wchar_t *)(v14 + 2 * v19), v8 - (unsigned int)v19, a7);
    a2 = v22;
  }
  else
  {
    v11 = -1073741789;
  }
  *a2 = v13;
  return v11;
}
