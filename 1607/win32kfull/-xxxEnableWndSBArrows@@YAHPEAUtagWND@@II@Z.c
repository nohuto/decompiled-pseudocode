/*
 * XREFs of ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00FFF8C
 * Callers:
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     xxxEnableScrollBar @ 0x1C00FFF6C (xxxEnableScrollBar.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     _InitPwSB @ 0x1C00AFCC8 (_InitPwSB.c)
 *     xxxDrawScrollBar @ 0x1C014E540 (xxxDrawScrollBar.c)
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
      || (a3 ? (*inited |= a3) : (*inited &= 0xFFFFFFFC),
          (*inited == v9
        || (v8 = 1, v9 = *inited, (*((_BYTE *)a1 + 40) & 4) == 0)
        || (*((_BYTE *)a1 + 55) & 0x20) != 0
        || !(unsigned int)IsVisible((__int64)a1)
        || (xxxDrawScrollBar(v13, DCEx, 0), inited == *((int **)a1 + 22)))
       && ((((unsigned __int8)v9 ^ *(_BYTE *)inited) & 1) == 0
        || (xxxWindowEvent(0x800Au, (__int64 *)a1, -6, 1, 1), inited == *((int **)a1 + 22)))
       && ((((unsigned __int8)v9 ^ *(_BYTE *)inited) & 2) == 0
        || (xxxWindowEvent(0x800Au, (__int64 *)a1, -6, 5, 1), inited == *((int **)a1 + 22)))) )
    {
      if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
        goto LABEL_15;
      *inited = a3 ? (4 * a3) | *inited : *inited & 0xFFFFFFF3;
      if ( *inited == v9 )
        goto LABEL_15;
      v8 = 1;
      if ( (*((_BYTE *)a1 + 40) & 2) == 0
        || (*((_BYTE *)a1 + 55) & 0x20) != 0
        || !(unsigned int)IsVisible((__int64)a1)
        || (xxxDrawScrollBar(v12, DCEx, 1), inited == *((int **)a1 + 22)) )
      {
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 4) != 0 )
        {
          xxxWindowEvent(0x800Au, (__int64 *)a1, -5, 1, 1);
          if ( inited != *((int **)a1 + 22) )
            goto LABEL_16;
        }
        if ( (((unsigned __int8)v9 ^ *(_BYTE *)inited) & 8) != 0 )
          xxxWindowEvent(0x800Au, (__int64 *)a1, -5, 5, 1);
LABEL_15:
        v4 = v8;
LABEL_16:
        _ReleaseDC(DCEx);
        return v4;
      }
    }
    _ReleaseDC(DCEx);
  }
  return 0LL;
}
