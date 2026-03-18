/*
 * XREFs of MiComparePages @ 0x14012AD40
 * Callers:
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 * Callees:
 *     <none>
 */

char __fastcall MiComparePages(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdi

  v2 = 505;
  while ( 1 )
  {
    v3 = 8LL * (v2 + 2);
    v4 = 8LL * (v2 + 3);
    v5 = 8LL * (v2 + 4);
    v6 = 8LL * (v2 - 1);
    v7 = 8LL * (v2 + 1);
    if ( *(_QWORD *)(8LL * v2 + a2) ^ *(_QWORD *)(8LL * v2 + a1) | *(_QWORD *)(v6 + a2) ^ *(_QWORD *)(v6 + a1) | *(_QWORD *)(v7 + a2) ^ *(_QWORD *)(v7 + a1) | *(_QWORD *)(v3 + a2) ^ *(_QWORD *)(v3 + a1) | *(_QWORD *)(v4 + a2) ^ *(_QWORD *)(v4 + a1) | *(_QWORD *)(v5 + a2) ^ *(_QWORD *)(v5 + a1) | *(_QWORD *)(8LL * (v2 + 5) + a2) ^ *(_QWORD *)(8LL * (v2 + 5) + a1) | *(_QWORD *)(a2 + 8LL * (v2 + 6)) ^ *(_QWORD *)(a1 + 8LL * (v2 + 6)) )
      break;
    v2 -= 8;
    if ( v2 == -7 )
      return 1;
  }
  return 0;
}
