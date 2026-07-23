/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x180042954
 * Callers:
 *     LdrpLoadKnownDll @ 0x18003FE98 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180023F50 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, __int64 a2)
{
  BOOLEAN result; // al
  unsigned __int64 v4; // r9
  _WORD *v5; // rax
  _WORD *v6; // rax
  __int16 v7; // cx
  __int16 v8; // ax
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  result = 0;
  if ( LdrpKnownDllPath.Length )
  {
    v4 = *a1 - 2LL + *((_QWORD *)a1 + 1);
    *(_QWORD *)(a2 + 8) = v4;
    if ( v4 > *((_QWORD *)a1 + 1) )
    {
      while ( 1 )
      {
        v5 = *(_WORD **)(a2 + 8);
        if ( *v5 == 92 || *v5 == 47 )
          break;
        v6 = v5 - 1;
        *(_QWORD *)(a2 + 8) = v6;
        if ( (unsigned __int64)v6 <= *((_QWORD *)a1 + 1) )
          goto LABEL_8;
      }
      *(_QWORD *)(a2 + 8) += 2LL;
    }
LABEL_8:
    v7 = *(_WORD *)(a2 + 8) - a1[4];
    v8 = *a1 - v7;
    String1.MaximumLength = *(_WORD *)(a2 + 8) - a1[4];
    *(_WORD *)a2 = v8;
    *(_WORD *)(a2 + 2) = a1[1] - v7;
    String1.Buffer = (unsigned __int16 *)*((_QWORD *)a1 + 1);
    String1.Length = v7 - 2;
    return RtlEqualUnicodeString(&String1, &LdrpKnownDllPath, 1u);
  }
  return result;
}
