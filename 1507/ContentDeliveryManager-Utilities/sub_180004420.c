/*
 * XREFs of sub_180004420 @ 0x180004420
 * Callers:
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_1800061E0 @ 0x1800061E0 (sub_1800061E0.c)
 *     sub_180006290 @ 0x180006290 (sub_180006290.c)
 *     sub_1800062B0 @ 0x1800062B0 (sub_1800062B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180004420(__int64 a1)
{
  signed __int64 v2; // rdx
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  bool v5; // zf
  __int64 v6; // rax
  signed __int32 v7; // r9d

  v2 = *(_QWORD *)(a1 + 56);
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
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v2 + 1, v2);
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
