/*
 * XREFs of MiComparePages @ 0x1401F85AC
 * Callers:
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 * Callees:
 *     <none>
 */

char __fastcall MiComparePages(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rdi

  v3 = 505;
  v4 = 0;
  while ( 1 )
  {
    v5 = v3 + 5;
    v6 = v3 + 6;
    v7 = v3 + 4;
    v8 = v3 + 3;
    v9 = v3 + 2;
    v10 = v3 + 1;
    v11 = v3 - 1;
    if ( *(_QWORD *)(a2 + 8LL * v3) ^ *(_QWORD *)(a1 + 8LL * v3) | *(_QWORD *)(a2 + 8 * v11) ^ *(_QWORD *)(a1 + 8 * v11) | *(_QWORD *)(a2 + 8 * v10) ^ *(_QWORD *)(a1 + 8 * v10) | *(_QWORD *)(a2 + 8 * v9) ^ *(_QWORD *)(a1 + 8 * v9) | *(_QWORD *)(a2 + 8 * v8) ^ *(_QWORD *)(a1 + 8 * v8) | *(_QWORD *)(a2 + 8 * v7) ^ *(_QWORD *)(a1 + 8 * v7) | *(_QWORD *)(a2 + 8 * v5) ^ *(_QWORD *)(a1 + 8 * v5) | *(_QWORD *)(a2 + 8 * v6) ^ *(_QWORD *)(a1 + 8 * v6) )
      break;
    v3 -= 8;
    if ( v3 == -7 )
      return 1;
  }
  return v4;
}
