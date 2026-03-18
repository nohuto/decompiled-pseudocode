/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D855C
 * Callers:
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 * Callees:
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     GetAppImeCompatFlags @ 0x1C0082004 (GetAppImeCompatFlags.c)
 */

void __fastcall FinalizeKoreanImeCompStrOnMouseClick(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // [rsp+28h] [rbp-40h]
  int v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+70h] [rbp+8h] BYREF
  int v6; // [rsp+74h] [rbp+Ch]

  v1 = *((_QWORD *)a1 + 2);
  if ( !*(_QWORD *)(gpqForeground + 64LL) && (GetAppImeCompatFlags(v1) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v1 + 552) <= 0x400u )
    {
      v5 = 0;
      v4 = 0;
      v3 = 0;
      v6 = 4;
      PostInputMessage(gpqForeground, 0LL, 0, 257LL, 229LL, v3, 0LL, 0LL, v4, &v5, 0LL, 0LL);
    }
    else
    {
      v2 = *(_QWORD *)(v1 + 696);
      if ( v2 )
      {
        if ( *(char *)(v2 + 44) >= 0 )
          PostMessage(v2, 647LL, 0x20uLL, 0LL);
      }
    }
  }
}
