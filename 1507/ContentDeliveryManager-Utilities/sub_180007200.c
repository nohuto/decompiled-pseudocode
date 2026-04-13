/*
 * XREFs of sub_180007200 @ 0x180007200
 * Callers:
 *     sub_180006800 @ 0x180006800 (sub_180006800.c)
 *     sub_180008210 @ 0x180008210 (sub_180008210.c)
 *     sub_180008340 @ 0x180008340 (sub_180008340.c)
 *     sub_180008370 @ 0x180008370 (sub_180008370.c)
 *     sub_180008480 @ 0x180008480 (sub_180008480.c)
 *     sub_1800084D0 @ 0x1800084D0 (sub_1800084D0.c)
 *     sub_1800085C0 @ 0x1800085C0 (sub_1800085C0.c)
 *     sub_18000E270 @ 0x18000E270 (sub_18000E270.c)
 *     sub_18000E630 @ 0x18000E630 (sub_18000E630.c)
 *     sub_18000F0B0 @ 0x18000F0B0 (sub_18000F0B0.c)
 *     sub_18000F2A0 @ 0x18000F2A0 (sub_18000F2A0.c)
 *     sub_18000F470 @ 0x18000F470 (sub_18000F470.c)
 *     sub_18000F640 @ 0x18000F640 (sub_18000F640.c)
 *     sub_180019218 @ 0x180019218 (sub_180019218.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180007200(__int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 80);
  v3 = 0x7FFFFFFF;
  if ( v2 < 0 )
  {
LABEL_5:
    v7 = *(_DWORD *)(2 * v2 + 0x10);
    if ( v7 != 0x7FFFFFFF )
    {
      do
      {
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(2 * v2 + 16), v7 + 1, v7) )
          break;
        v7 = *(_DWORD *)(2 * v2 + 0x10);
      }
      while ( v7 != 0x7FFFFFFF );
      if ( v7 != 0x7FFFFFFF )
        return (unsigned int)(v7 + 1);
    }
  }
  else
  {
    while ( (_DWORD)v2 != 0x7FFFFFFF )
    {
      v4 = v2 + 1;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v2 + 1, v2);
      v5 = v2 == v6;
      v2 = v6;
      if ( v5 )
        return v4;
      if ( v6 < 0 )
        goto LABEL_5;
    }
  }
  return v3;
}
