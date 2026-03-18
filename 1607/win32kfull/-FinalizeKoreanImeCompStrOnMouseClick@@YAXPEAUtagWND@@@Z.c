/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01CF5E8
 * Callers:
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 * Callees:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     GetAppImeCompatFlags @ 0x1C010B8BC (GetAppImeCompatFlags.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // [rsp+28h] [rbp-40h]
  int v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+74h] [rbp+Ch]

  v4 = *((_QWORD *)a1 + 2);
  if ( !*(_QWORD *)(gpqForeground + 72LL) && (GetAppImeCompatFlags(v4, a2, a3, a4) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v4 + 552) <= 0x400u )
    {
      v8 = 0;
      v7 = 0;
      v6 = 0;
      v9 = 4;
      PostInputMessage(gpqForeground, 0LL, 0, 257LL, 229LL, v6, 0LL, 0LL, v7, &v8, 0LL, 0LL);
    }
    else
    {
      v5 = *(_QWORD *)(v4 + 696);
      if ( v5 )
      {
        if ( *(char *)(v5 + 44) >= 0 )
          PostMessage(v5, 647LL, 32LL, 0LL);
      }
    }
  }
}
