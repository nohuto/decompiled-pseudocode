/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x18000F544
 * Callers:
 *     LdrpLoadKnownDll @ 0x180012040 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18001A1D0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // r8
  _WORD *v6; // rax
  _WORD *v7; // rax
  __int16 v8; // cx
  __int16 v9; // ax
  _WORD v10[4]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  result = 0LL;
  if ( LdrpKnownDllPath )
  {
    v4 = *a1 - 2LL + *((_QWORD *)a1 + 1);
    v5 = 2LL;
    *(_QWORD *)(a2 + 8) = v4;
    if ( v4 > *((_QWORD *)a1 + 1) )
    {
      while ( 1 )
      {
        v6 = *(_WORD **)(a2 + 8);
        if ( *v6 == 92 || *v6 == 47 )
          break;
        v7 = v6 - 1;
        *(_QWORD *)(a2 + 8) = v7;
        if ( (unsigned __int64)v7 <= *((_QWORD *)a1 + 1) )
          goto LABEL_8;
      }
      *(_QWORD *)(a2 + 8) += 2LL;
    }
LABEL_8:
    v8 = *(_WORD *)(a2 + 8) - a1[4];
    v9 = *a1 - v8;
    v10[1] = *(_WORD *)(a2 + 8) - a1[4];
    *(_WORD *)a2 = v9;
    *(_WORD *)(a2 + 2) = a1[1] - v8;
    v11 = *((_QWORD *)a1 + 1);
    LOBYTE(v5) = 1;
    v10[0] = v8 - 2;
    return RtlEqualUnicodeString(v10, &LdrpKnownDllPath, v5);
  }
  return result;
}
