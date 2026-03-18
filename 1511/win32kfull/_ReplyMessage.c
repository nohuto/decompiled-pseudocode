/*
 * XREFs of _ReplyMessage @ 0x1C00F20F0
 * Callers:
 *     <none>
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 */

__int64 __fastcall ReplyMessage(__int64 a1)
{
  __int64 v2; // r10
  int v4; // ecx
  __int64 v5; // rax
  int v6; // ecx
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+50h] [rbp-58h] BYREF
  int v13; // [rsp+68h] [rbp-40h] BYREF
  __int64 v14; // [rsp+70h] [rbp-38h]
  __int64 v15; // [rsp+78h] [rbp-30h]
  __int64 v16; // [rsp+80h] [rbp-28h]

  v2 = *(_QWORD *)(gptiCurrent + 464LL);
  if ( !v2 )
    return 0LL;
  v4 = *(_DWORD *)(v2 + 84);
  if ( (v4 & 1) != 0 )
    return 0LL;
  v5 = *(_QWORD *)(v2 + 32);
  if ( v5 )
  {
    *(_QWORD *)(v2 + 72) = a1;
    *(_DWORD *)(v2 + 84) = v4 | 1;
    SetWakeBit(v5, 0x200u);
  }
  else if ( (v4 & 0x100) != 0 )
  {
    v6 = v4 | 1;
    *(_DWORD *)(v2 + 84) = v6;
    if ( (v6 & 4) == 0 )
    {
      v7 = (v6 & 0x400) == 0;
      v16 = a1;
      v8 = *(_QWORD *)(v2 + 112);
      v9 = 33;
      v12[1] = v8;
      if ( !v7 )
        v9 = 289;
      v13 = v9;
      v14 = *(_QWORD *)(v2 + 48);
      v15 = *(_QWORD *)(v2 + 56);
      v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v12;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      xxxInterSendMsgEx(
        *(_QWORD *)(v2 + 112),
        *(_DWORD *)(v2 + 104),
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(v2 + 64),
        &v13,
        1,
        (*(_DWORD *)(v2 + 84) & 0x10000) == 0);
      ThreadUnlock1(v11, v10);
    }
  }
  return 1LL;
}
