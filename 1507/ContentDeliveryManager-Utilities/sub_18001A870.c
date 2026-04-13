/*
 * XREFs of sub_18001A870 @ 0x18001A870
 * Callers:
 *     sub_18001FA40 @ 0x18001FA40 (sub_18001FA40.c)
 *     sub_18001FB10 @ 0x18001FB10 (sub_18001FB10.c)
 *     sub_18001FB50 @ 0x18001FB50 (sub_18001FB50.c)
 *     sub_18001FB80 @ 0x18001FB80 (sub_18001FB80.c)
 *     sub_18001FC80 @ 0x18001FC80 (sub_18001FC80.c)
 *     sub_18001FD60 @ 0x18001FD60 (sub_18001FD60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001A870(__int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 184);
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
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 184), v2 + 1, v2);
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
