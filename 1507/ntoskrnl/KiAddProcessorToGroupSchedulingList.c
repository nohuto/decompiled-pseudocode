/*
 * XREFs of KiAddProcessorToGroupSchedulingList @ 0x14020A2BC
 * Callers:
 *     KiAddProcessorToGroupSchedulingList @ 0x14020A2BC (KiAddProcessorToGroupSchedulingList.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140402BCC (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     KiAddProcessorToGroupSchedulingList @ 0x14020A2BC (KiAddProcessorToGroupSchedulingList.c)
 */

void __fastcall KiAddProcessorToGroupSchedulingList(__int64 a1, _QWORD **a2, unsigned int a3)
{
  _QWORD *v3; // rbx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v13; // [rsp+48h] [rbp+10h]

  v3 = *a2;
  v6 = a1;
  if ( *a2 != a2 )
  {
    v7 = 408LL * a3;
    v8 = a1 + 24272;
    v13 = v7;
    do
    {
      v9 = *(_QWORD **)(v8 + 8);
      v10 = (_QWORD *)((char *)v3 + v7 + 160);
      *v10 = v8;
      v10[1] = v9;
      if ( *v9 != v8 )
        __fastfail(3u);
      *v9 = v10;
      v11 = v3 + 3;
      *(_QWORD *)(v8 + 8) = v10;
      if ( (_QWORD *)*v11 != v11 )
      {
        KiAddProcessorToGroupSchedulingList(v6, v11, a3);
        v6 = a1;
      }
      v3 = (_QWORD *)*v3;
      v7 = v13;
    }
    while ( v3 != a2 );
  }
}
