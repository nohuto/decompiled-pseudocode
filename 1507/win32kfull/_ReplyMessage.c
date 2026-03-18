/*
 * XREFs of _ReplyMessage @ 0x1C00030B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
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
  _QWORD v10[3]; // [rsp+50h] [rbp-58h] BYREF
  int v11; // [rsp+68h] [rbp-40h] BYREF
  __int64 v12; // [rsp+70h] [rbp-38h]
  __int64 v13; // [rsp+78h] [rbp-30h]
  __int64 v14; // [rsp+80h] [rbp-28h]

  v2 = *(_QWORD *)(gptiCurrent + 472LL);
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
    SetWakeBit(v5, 512LL);
  }
  else if ( (v4 & 0x100) != 0 )
  {
    v6 = v4 | 1;
    *(_DWORD *)(v2 + 84) = v6;
    if ( (v6 & 4) == 0 )
    {
      v7 = (v6 & 0x400) == 0;
      v14 = a1;
      v8 = *(_QWORD *)(v2 + 112);
      v9 = 33;
      v10[1] = v8;
      if ( !v7 )
        v9 = 289;
      v11 = v9;
      v12 = *(_QWORD *)(v2 + 48);
      v13 = *(_QWORD *)(v2 + 56);
      v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v10;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      xxxInterSendMsgEx(
        *(_QWORD *)(v2 + 112),
        *(_DWORD *)(v2 + 104),
        0,
        0,
        0LL,
        *(_QWORD *)(v2 + 64),
        (__int64)&v11,
        1,
        (*(_DWORD *)(v2 + 84) & 0x10000) == 0);
      ThreadUnlock1();
    }
  }
  return 1LL;
}
