/*
 * XREFs of RtlNormalizeProcessParams @ 0x180088970
 * Callers:
 *     RtlCreateUserProcess @ 0x180088590 (RtlCreateUserProcess.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlNormalizeProcessParams(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( !a1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 8);
  if ( (v2 & 1) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
      *(_QWORD *)(a1 + 64) = a1 + v3;
    v4 = *(_QWORD *)(a1 + 88);
    if ( v4 )
      *(_QWORD *)(a1 + 88) = a1 + v4;
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 )
      *(_QWORD *)(a1 + 104) = a1 + v5;
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
      *(_QWORD *)(a1 + 120) = a1 + v6;
    v7 = *(_QWORD *)(a1 + 184);
    if ( v7 )
      *(_QWORD *)(a1 + 184) = a1 + v7;
    v8 = *(_QWORD *)(a1 + 200);
    if ( v8 )
      *(_QWORD *)(a1 + 200) = a1 + v8;
    v9 = *(_QWORD *)(a1 + 216);
    if ( v9 )
      *(_QWORD *)(a1 + 216) = a1 + v9;
    v10 = *(_QWORD *)(a1 + 232);
    if ( v10 )
      *(_QWORD *)(a1 + 232) = a1 + v10;
    *(_DWORD *)(a1 + 8) = v2 | 1;
  }
  return a1;
}
