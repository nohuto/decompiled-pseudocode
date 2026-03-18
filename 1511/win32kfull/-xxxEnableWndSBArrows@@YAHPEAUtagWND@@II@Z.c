/*
 * XREFs of ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00CABF0
 * Callers:
 *     xxxSetScrollBar @ 0x1C00CA7B4 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C014D0EC (xxxEnableScrollBar.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     _InitPwSB @ 0x1C0077D00 (_InitPwSB.c)
 *     IsVisible @ 0x1C00CBE50 (IsVisible.c)
 *     xxxDrawScrollBar @ 0x1C0144A20 (xxxDrawScrollBar.c)
 */

__int64 __fastcall xxxEnableWndSBArrows(struct tagWND *a1, int a2, int a3)
{
  int *inited; // rbx
  unsigned int v4; // esi
  int v8; // r12d
  int v9; // r14d
  HDC DCEx; // rbp
  struct tagWND *v12; // rcx
  struct tagWND *v13; // rcx

  inited = (int *)*((_QWORD *)a1 + 22);
  v4 = 0;
  v8 = 0;
  if ( inited )
  {
    v9 = *inited;
  }
  else
  {
    if ( !a3 )
      return 0LL;
    v9 = 0;
    inited = (int *)InitPwSB((__int64)a1);
    if ( !inited )
      return 0LL;
  }
  DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
  if ( DCEx )
  {
    if ( a2 && a2 != 3
      || (!a3 ? (*inited &= 0xFFFFFFFC) : (*inited |= a3),
          (*inited == v9
        || (v8 = 1, v9 = *inited, (*((_BYTE *)a1 + 40) & 4) == 0)
        || (*((_BYTE *)a1 + 55) & 0x20) != 0
        || !(unsigned int)IsVisible(a1)
        || (xxxDrawScrollBar(v13, DCEx, 0), inited == *((int **)a1 + 22)))
       && ((((unsigned __int8)v9 ^ *(_BYTE *)inited) & 1) == 0
        || (xxxWindowEvent(0x800Au, (__int64 *)a1, -6, 1, 1), inited == *((int **)a1 + 22)))
       && ((((unsigned __int8)v9 ^ *(_BYTE *)inited) & 2) == 0
        || (xxxWindowEvent(0x800Au, (__int64 *)a1, -6, 5, 1), inited == *((int **)a1 + 22)))) )
    {
      if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
        goto LABEL_10;
      *inited = a3 ? (4 * a3) | *inited : *inited & 0xFFFFFFF3;
      if ( *inited == v9 )
        goto LABEL_10;
      v8 = 1;
      if ( (*((_BYTE *)a1 + 40) & 2) == 0
        || (*((_BYTE *)a1 + 55) & 0x20) != 0
        || !(unsigned int)IsVisible(a1)
        || (xxxDrawScrollBar(v12, DCEx, 1), inited == *((int **)a1 + 22)) )
      {
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 4) != 0 )
        {
          xxxWindowEvent(0x800Au, (__int64 *)a1, -5, 1, 1);
          if ( inited != *((int **)a1 + 22) )
            goto LABEL_11;
        }
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 8) != 0 )
          xxxWindowEvent(0x800Au, (__int64 *)a1, -5, 5, 1);
LABEL_10:
        v4 = v8;
LABEL_11:
        _ReleaseDC(DCEx);
        return v4;
      }
    }
    _ReleaseDC(DCEx);
  }
  return 0LL;
}
