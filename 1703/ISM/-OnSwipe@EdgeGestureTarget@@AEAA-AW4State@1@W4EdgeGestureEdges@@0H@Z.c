/*
 * XREFs of ?OnSwipe@EdgeGestureTarget@@AEAA?AW4State@1@W4EdgeGestureEdges@@0H@Z @ 0x180024A0C
 * Callers:
 *     ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x180024678 (-OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z.c)
 *     ?OnFlick@EdgeGestureTarget@@AEAAJXZ @ 0x180024924 (-OnFlick@EdgeGestureTarget@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EdgeGestureTarget::OnSwipe(__int64 a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  _DWORD *v7; // r11
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // ecx
  bool v14; // al
  unsigned int v15; // esi

  v4 = 0;
  if ( !a4 )
    return v4;
  v7 = *(_DWORD **)(a1 + 56);
  v8 = v7[13];
  v9 = v7[14];
  v10 = (v8 < v7[11] ? 4 : 0) | 8;
  if ( v8 < v7[6] - v7[12] )
    v10 = v8 < v7[11] ? 4 : 0;
  v11 = v10 | 1;
  if ( v9 >= v7[9] )
    v11 = v10;
  v12 = v11 | 2;
  if ( v9 < v7[7] - v7[10] )
    v12 = v11;
  v13 = (a3 | a2) & v12;
  v14 = v13 != 0;
  if ( !*(_DWORD *)(a1 + 44) )
    goto LABEL_12;
  if ( !v13 || (v13 & *(_DWORD *)(a1 + 44)) == 0 )
  {
    v14 = 0;
LABEL_12:
    if ( !v14 )
      return v4;
  }
  if ( (v13 & a2) != 0 )
    LOBYTE(v15) = (int)a4 > 0;
  else
    v15 = a4 >> 31;
  if ( (_BYTE)v15 )
    return 2;
  return v4;
}
