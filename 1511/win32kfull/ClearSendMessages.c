/*
 * XREFs of ClearSendMessages @ 0x1C006872C
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 */

_QWORD *__fastcall ClearSendMessages(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // r10
  __int64 *v5; // rdi
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  _QWORD v18[3]; // [rsp+50h] [rbp-58h] BYREF
  int v19; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp-30h]
  __int64 v22; // [rsp+80h] [rbp-28h]

  result = (_QWORD *)gsmsList;
  v3 = (_QWORD *)gsmsList;
  while ( v3 != result )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    v5 = v4 + 14;
    v6 = v4[14];
    if ( v6 == a1 )
    {
      v7 = *((_DWORD *)v4 + 21);
      if ( (v7 & 4) != 0 )
      {
        v8 = v7 | 9;
        goto LABEL_10;
      }
      if ( (v7 & 1) != 0 )
        goto LABEL_11;
      if ( (v7 & 0x100) != 0 )
      {
        v9 = v7 | 1;
        v10 = 33;
        *((_DWORD *)v4 + 21) = v9;
        if ( (v9 & 0x400) != 0 )
          v10 = 289;
        v22 = 0LL;
        v19 = v10;
        v20 = v4[6];
        v21 = v4[7];
        v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v18;
        v18[1] = v6;
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        LODWORD(v17) = *((_DWORD *)v4 + 21) & 0x10000;
        LODWORD(v16) = 1;
        xxxInterSendMsgEx(*v5, *((_DWORD *)v4 + 26), 0LL, 0LL, 0LL, v4[8], &v19, v16, v17);
        ThreadUnlock1(v12, v11);
      }
      else
      {
        if ( (v7 & 0x4000) != 0 )
          goto LABEL_11;
        if ( !v4[4] )
        {
          v8 = v7 | 1;
LABEL_10:
          *((_DWORD *)v4 + 21) = v8;
          goto LABEL_11;
        }
        --*(_DWORD *)(v4[5] + 488LL);
        v13 = v4 + 2;
        v14 = v4[2];
        v15 = (_QWORD *)v4[3];
        if ( *(_QWORD **)(v14 + 8) != v4 + 2 || (_QWORD *)*v15 != v13 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        *v13 = 0LL;
        *((_DWORD *)v4 + 21) |= 0x8001u;
        v4[9] = 0LL;
        SetWakeBit(v4[4], 0x200u);
      }
LABEL_11:
      HMAssignmentUnlock(v5);
      result = (_QWORD *)gsmsList;
    }
  }
  return result;
}
