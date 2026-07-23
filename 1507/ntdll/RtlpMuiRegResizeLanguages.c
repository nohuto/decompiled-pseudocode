/*
 * XREFs of RtlpMuiRegResizeLanguages @ 0x1800E8424
 * Callers:
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1800E79B4 (RtlpMuiRegGetOrAddLangInfo.c)
 * Callees:
 *     _SafeReallocBlob @ 0x1800EA260 (_SafeReallocBlob.c)
 */

__int64 __fastcall RtlpMuiRegResizeLanguages(unsigned __int16 *a1, int a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = a2;
  if ( a2 < 1 )
    v3 = 4;
  if ( a1 )
  {
    if ( v3 >= a1[3] )
    {
      v4 = SafeReallocBlob(a1, v6, v7, (__int64)&v8);
      v2 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v8;
        *(_QWORD *)(v4 + 16) = v4 + 24;
        *(_WORD *)(v4 + 4) = v3;
      }
    }
  }
  return v2;
}
