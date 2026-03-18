/*
 * XREFs of KdpFillMemory @ 0x14072AFB0
 * Callers:
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x14072D658 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpFillMemory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  int v4; // ebx
  __int64 v5; // rdi
  int v6; // r15d
  __int64 v7; // rsi
  __int16 v8; // ax
  int v9; // r12d
  int v10; // ebp
  char *v11; // r14
  __int64 v12; // rdi
  int v13; // eax
  __int16 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  v18 = a3;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = 0;
  v5 = a1;
  v6 = *(_DWORD *)(a1 + 24);
  v18 = v3 + *(unsigned __int16 *)(a1 + 30);
  v7 = v3;
  v8 = *(_WORD *)(a1 + 28);
  v9 = 5;
  v10 = 0;
  if ( (v8 & 2) != 0 )
  {
    v9 = 7;
  }
  else if ( (v8 & 1) == 0 )
  {
    v4 = -1073741811;
    goto LABEL_12;
  }
  v11 = *(char **)(a1 + 16);
  if ( v6 )
  {
    v12 = v18;
    do
    {
      --v6;
      v13 = KdpCopyMemoryChunks(v11, v9, (__int64)&v18);
      if ( v13 < 0 )
        break;
      ++v7;
      ++v11;
      if ( v7 == v12 )
        v7 = v3;
      ++v10;
    }
    while ( v6 );
    v5 = a1;
    if ( v10 )
      v13 = 0;
    v4 = v13;
  }
LABEL_12:
  *(_DWORD *)(v5 + 8) = v4;
  *(_DWORD *)(v5 + 24) = v10;
  v15 = 56;
  v16 = v5;
  return KdSendPacket(2LL, &v15, 0LL, &KdpContext);
}
