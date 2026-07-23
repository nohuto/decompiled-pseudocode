/*
 * XREFs of RtlpMuiRegResizeLanguageConfigList @ 0x1800E834C
 * Callers:
 *     RtlpMuiRegConfigListAddLanguage @ 0x1800E695C (RtlpMuiRegConfigListAddLanguage.c)
 * Callees:
 *     _SafeReallocBlob @ 0x1800EA260 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegResizeLanguageConfigList(unsigned __int16 *a1, int a2)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 < 1 )
    v2 = 4;
  v3 = 0LL;
  if ( a1 )
  {
    if ( v2 >= a1[2] )
    {
      v4 = SafeReallocBlob(a1, v6, v7, (__int64)&v8);
      v3 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v8;
        *(_QWORD *)(v4 + 8) = v4 + 16;
        *(_WORD *)(v4 + 6) = v2;
      }
    }
  }
  return v3;
}
