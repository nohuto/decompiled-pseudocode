/*
 * XREFs of ndisMLoopbackNetBufferLists @ 0x1C0055458
 * Callers:
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DB00 (ndisMSendNBLToMiniportInternal.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0053AA0 (ndisDoLoopbackNetBufferList.c)
 *     ndisMIsLoopbackNetBuffer @ 0x1C0054EA8 (ndisMIsLoopbackNetBuffer.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0055B4C (ndisMSendNetBufferListsCompleteInternal.c)
 */

void __fastcall ndisMLoopbackNetBufferLists(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 *a5)
{
  _QWORD *v6; // r13
  unsigned int v7; // r12d
  __int64 v9; // rbx
  __int64 v10; // r15
  bool v11; // zf
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  char v14; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v15[7]; // [rsp+31h] [rbp-47h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]

  v14 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(0x42u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2);
  v9 = a2;
  v14 = 0;
  v10 = a2;
  v15[0] = 0;
  do
  {
    v11 = (*(_DWORD *)(v9 + 136) & 0x800) == 0;
    v12 = *(_QWORD *)v9;
    v16 = *(_QWORD *)v9;
    if ( !v11 )
    {
      v15[0] = 0;
LABEL_17:
      v6 = (_QWORD *)v9;
      goto LABEL_18;
    }
    v13 = *(_QWORD **)(v9 + 8);
    do
    {
      ndisMIsLoopbackNetBuffer(a1, (__int64)v13, v9, &v14, v15);
      if ( v14 == 1 )
      {
        v14 = 0;
        ndisDoLoopbackNetBufferList(a1, (__int64)v13, v9, a3, a4);
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 );
    v12 = v16;
    if ( v15[0] != 1 )
      goto LABEL_17;
    v15[0] = 0;
    if ( v10 == v9 )
      v10 = v16;
    else
      *v6 = v16;
    *(_QWORD *)v9 = 0LL;
    *(_DWORD *)(v9 + 140) = 0;
    if ( (a4 & 1) != 0 )
      v7 |= 1u;
    ndisMSendNetBufferListsCompleteInternal(a1, v9, v7, 0LL);
LABEL_18:
    v9 = v12;
  }
  while ( v12 );
  *a5 = v10;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(0x43u, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2);
}
