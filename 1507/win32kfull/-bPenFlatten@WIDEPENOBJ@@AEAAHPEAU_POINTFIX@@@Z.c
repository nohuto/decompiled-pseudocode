/*
 * XREFs of ?bPenFlatten@WIDEPENOBJ@@AEAAHPEAU_POINTFIX@@@Z @ 0x1C011A3D8
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C00CBE78 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@@IEAAHXZ @ 0x1C00CC20C (-bGrowPath@WIDEPATHOBJ@@IEAAHXZ.c)
 *     ?vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z @ 0x1C011A610 (-vInit@BEZIER@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEA_J@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall WIDEPENOBJ::bPenFlatten(struct _POINTFIX **this, struct _POINTFIX *a2)
{
  struct _RECTFX *v4; // r8
  struct _POINTFIX *v5; // r14
  int i; // esi
  struct _POINTFIX *v7; // rdx
  bool v8; // zf
  struct _POINTFIX *v9; // rdx
  int v10; // eax
  __int64 result; // rax
  struct _POINTFIX *v12; // r15
  _BYTE v13[168]; // [rsp+20h] [rbp-D8h] BYREF
  int v14; // [rsp+C8h] [rbp-30h]

  if ( !(unsigned int)WIDEPATHOBJ::bGrowPath((WIDEPATHOBJ *)this) )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)&this[1][5] + 16LL) = 1;
  v5 = this[17];
  --this[18];
  this[17] = v5 + 1;
  v5[1] = *a2;
  ++this[17];
  for ( i = 0; i <= 1; ++i )
  {
    BEZIER::vInit((BEZIER *)v13, a2, v4, gpeqErrorLow);
    do
    {
      v7 = this[17];
      if ( v7 > this[18] )
      {
        v12 = v7 - 2;
        *(_DWORD *)(*(_QWORD *)&this[1][5] + 20LL) = ((__int64)&v7[-3] - *(_QWORD *)&this[1][5]) >> 3;
        *(_QWORD *)(*(_QWORD *)&this[1][3] + 8LL) = *(_QWORD *)&this[1][5]
                                                  + 24LL
                                                  + 8LL * *(unsigned int *)(*(_QWORD *)&this[1][5] + 20LL);
        if ( !(unsigned int)WIDEPATHOBJ::bGrowPath((WIDEPATHOBJ *)this) )
          return 0LL;
        *(_DWORD *)(*(_QWORD *)&this[1][5] + 16LL) = 0;
        *this[17]++ = *v12;
        *this[17]++ = v12[1];
        --this[18];
      }
      v8 = v14 == 0;
      v9 = this[17];
      this[17] = v9 + 1;
      if ( v8 )
        v10 = BEZIER64::bNext((BEZIER64 *)v13, v9);
      else
        v10 = BEZIER32::bNext((BEZIER32 *)v13, v9);
    }
    while ( v10 );
    a2 += 3;
  }
  v5->x = -this[17][-2].x;
  result = 1LL;
  v5->y = -this[17][-2].y;
  *(_DWORD *)(*(_QWORD *)&this[1][5] + 16LL) |= 2u;
  *(_DWORD *)(*(_QWORD *)&this[1][5] + 20LL) = ((__int64)&this[17][-3] - *(_QWORD *)&this[1][5]) >> 3;
  return result;
}
