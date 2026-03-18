/*
 * XREFs of PtFuncCompare @ 0x1404DA31C
 * Callers:
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1404DA390 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall PtFuncCompare(_QWORD *a1, _QWORD *a2)
{
  __int16 *v2; // rax
  const WCHAR *v3; // r10
  unsigned __int16 v4; // r11
  __int16 *v5; // rax
  unsigned __int16 v6; // cx
  const WCHAR *v7; // r8
  int v8; // ebx
  LONG v9; // eax

  v2 = (__int16 *)a1[1];
  if ( *(_BYTE *)a1 == 2 )
  {
    v4 = v2[1];
    v3 = (const WCHAR *)(v2 + 8);
  }
  else
  {
    v3 = (const WCHAR *)*((_QWORD *)v2 + 1);
    v4 = *v2;
  }
  v5 = (__int16 *)a2[1];
  if ( *(_BYTE *)a2 == 2 )
  {
    v6 = v5[1];
    v7 = (const WCHAR *)(v5 + 8);
  }
  else
  {
    v7 = (const WCHAR *)*((_QWORD *)v5 + 1);
    v6 = *v5;
  }
  v8 = 0;
  v9 = RtlCompareUnicodeStrings(v3, (unsigned __int64)v4 >> 1, v7, (unsigned __int64)v6 >> 1, 0);
  if ( v9 > 0 )
    return 1LL;
  LOBYTE(v8) = v9 >= 0;
  return (unsigned int)(v8 - 1);
}
