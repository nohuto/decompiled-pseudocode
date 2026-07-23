/*
 * XREFs of ResCGetCultureID @ 0x1800FBB44
 * Callers:
 *     ResCRuntimeGetCultureID @ 0x1800F7448 (ResCRuntimeGetCultureID.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     ResCultureNameToLCID @ 0x1800F9174 (ResCultureNameToLCID.c)
 *     _ResCompareString @ 0x1800F9880 (_ResCompareString.c)
 */

__int64 __fastcall ResCGetCultureID(_QWORD *a1, const WCHAR *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // rdi
  LONG v8; // ecx

  if ( !a2 )
    goto LABEL_15;
  result = ResCultureNameToLCID(a2);
  if ( (_DWORD)result )
    return result;
  if ( !a1 || (v5 = a1[1]) == 0 || !a1[2] || !a1[3] )
  {
LABEL_15:
    v8 = 87;
    goto LABEL_16;
  }
  if ( !*(_DWORD *)(v5 + 12) || (v6 = *(_DWORD *)(v5 + 20), v6 > *(_DWORD *)(v5 + 12)) )
  {
    v8 = 24;
LABEL_16:
    RtlSetLastWin32Error(v8);
    return 0LL;
  }
  v7 = 0LL;
  if ( !v6 )
    return 0LL;
  while ( ResCompareString((PCWSTR)(a1[3] + 2LL * *(unsigned int *)(a1[2] + 8 * v7)), a2) )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 20) )
      return 0LL;
  }
  return *(unsigned int *)(a1[2] + 8 * v7 + 4);
}
