/*
 * XREFs of CmpFindValueByNameFromCache @ 0x1404CABB0
 * Callers:
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400CA874 (HvpGetCellContextReinitialize.c)
 *     RtlCompareUnicodeString @ 0x14043A4D0 (RtlCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x1404CB210 (CmpCompareCompressedName.c)
 */

__int64 __fastcall CmpFindValueByNameFromCache(__int64 a1, const UNICODE_STRING *a2, _DWORD *a3, int *a4)
{
  __int64 v4; // rbx
  __int64 v9; // r14
  __int64 i; // rdi
  __int64 v11; // rax
  LONG v12; // eax
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING String2; // [rsp+28h] [rbp-40h] BYREF
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0LL;
  LODWORD(v14) = -1;
  v16 = -1;
  if ( !*(_DWORD *)(a1 + 96) )
    return 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(a1 + 32) + 8LL))(
         *(_QWORD *)(a1 + 32),
         *(unsigned int *)(a1 + 104),
         &v14);
  if ( !v9 )
    return 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 96); i = (unsigned int)(i + 1) )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(a1 + 32) + 8LL))(
            *(_QWORD *)(a1 + 32),
            *(unsigned int *)(v9 + 4 * i),
            &v16);
    v4 = v11;
    if ( !v11 )
      break;
    if ( (*(_BYTE *)(v11 + 16) & 1) != 0 )
    {
      v12 = CmpCompareCompressedName(a2, v11 + 20, *(unsigned __int16 *)(v11 + 2), 0LL, v14);
    }
    else
    {
      String2.Length = *(_WORD *)(v11 + 2);
      String2.MaximumLength = String2.Length;
      String2.Buffer = (wchar_t *)(v11 + 20);
      v12 = RtlCompareUnicodeString(a2, &String2, 1u);
    }
    if ( !v12 )
    {
      *a4 = v16;
      *a3 = i;
      HvpGetCellContextReinitialize(&v16);
      break;
    }
    (*(void (__fastcall **)(_QWORD, int *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v16);
    v4 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32), &v14);
  return v4;
}
