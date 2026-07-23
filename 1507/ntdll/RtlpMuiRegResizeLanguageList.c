/*
 * XREFs of RtlpMuiRegResizeLanguageList @ 0x1800E83B4
 * Callers:
 *     RtlpMuiRegGrowLanguageList @ 0x1800E7B28 (RtlpMuiRegGrowLanguageList.c)
 * Callees:
 *     _SafeReallocBlob @ 0x1800EA260 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegResizeLanguageList(unsigned __int16 *a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(v6) = 0;
  v2 = a2;
  if ( a2 < 1 )
    v2 = 4;
  if ( !a1 )
    return 0LL;
  if ( v2 < a1[2] )
    return 0LL;
  result = SafeReallocBlob(a1, v4, v5, (__int64)&v6);
  if ( !result )
    return 0LL;
  *(_DWORD *)result = v6;
  *(_QWORD *)(result + 24) = result + 64;
  *(_WORD *)(result + 6) = v2;
  return result;
}
