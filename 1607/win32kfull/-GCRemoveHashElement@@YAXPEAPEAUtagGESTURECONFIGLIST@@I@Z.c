/*
 * XREFs of ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1C01FB0DC
 * Callers:
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1C012A3E4 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GCRemoveHashElement(struct tagGESTURECONFIGLIST **a1, __int64 a2)
{
  struct tagGESTURECONFIGLIST **v2; // r8
  __int64 v4; // r10
  struct tagGESTURECONFIGLIST *v5; // rax
  struct tagGESTURECONFIGLIST *v6; // rcx
  bool v7; // zf
  struct tagGESTURECONFIGLIST *v8; // rax

  v2 = 0LL;
  v4 = a2 & 7;
  v5 = a1[v4];
  v6 = v5;
  if ( v5 )
  {
    while ( *((_DWORD *)v6 + 2) != (_DWORD)a2 )
    {
      v2 = (struct tagGESTURECONFIGLIST **)v6;
      v6 = *(struct tagGESTURECONFIGLIST **)v6;
      if ( !v6 )
        return;
    }
    v7 = v6 == v5;
    v8 = *(struct tagGESTURECONFIGLIST **)v6;
    if ( v7 )
      a1[v4] = v8;
    else
      *v2 = v8;
    Win32FreePool(v6, a2, v2);
  }
}
