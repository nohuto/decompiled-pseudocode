/*
 * XREFs of ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C002E010
 * Callers:
 *     GrePtInRegion @ 0x1C0076C20 (GrePtInRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::bInside(RGNOBJ *this, struct _POINTL *a2)
{
  _DWORD *v2; // rax
  LONG x; // r11d
  LONG y; // r9d
  int v5; // r10d
  _DWORD *v6; // r8
  unsigned int v7; // edx
  int v9; // ebx
  __int64 v10; // rax

  v2 = *(_DWORD **)this;
  x = a2->x;
  if ( a2->x < *(_DWORD *)(*(_QWORD *)this + 88LL) )
    return 1LL;
  y = a2->y;
  if ( y >= v2[25] || x >= v2[24] || y < v2[23] )
    return 1LL;
  v5 = v2[21];
  v6 = v2 + 26;
  v7 = 1;
  while ( v5 )
  {
    --v5;
    if ( v6[1] > y )
      break;
    if ( v6[2] > y )
    {
      v9 = 0;
      if ( *v6 )
      {
        do
        {
          v10 = v9++;
          if ( v6[v10 + 3] > x )
            return v7;
          v7 ^= 3u;
        }
        while ( v9 != *v6 );
      }
    }
    v6 = (_DWORD *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
  }
  return v7;
}
