/*
 * XREFs of KdpFillMemory @ 0x1406F5320
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpFillMemory(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // r14d
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // esi
  int v10; // r15d
  __int16 v11; // dx
  __int64 v12; // r13
  char *v13; // rbp
  __int16 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = a1;
  v5 = *(unsigned __int16 *)(a1 + 30);
  v7 = 0;
  v8 = v2;
  v9 = 0;
  v10 = 5;
  v11 = *(_WORD *)(v4 + 28);
  v12 = v2 + v5;
  if ( (v11 & 2) != 0 )
  {
    v10 = 7;
  }
  else if ( (v11 & 1) == 0 )
  {
    v7 = -1073741811;
  }
  if ( !(_WORD)v5 || *(_WORD *)a2 < (unsigned __int16)v5 )
    v7 = -1073741811;
  if ( v7 >= 0 )
  {
    v13 = *(char **)(v4 + 16);
    if ( v3 )
    {
      do
      {
        --v3;
        v7 = KdpCopyMemoryChunks(v13, v8, 1u, 0, v10, &v18);
        if ( v7 < 0 )
          break;
        ++v8;
        ++v13;
        if ( v8 == v12 )
          v8 = v2;
        ++v9;
      }
      while ( v3 );
      if ( v9 )
        v7 = 0;
      v4 = a1;
    }
  }
  *(_DWORD *)(v4 + 8) = v7;
  *(_DWORD *)(v4 + 24) = v9;
  v15 = 56;
  v16 = v4;
  return KdSendPacket(2LL, &v15, 0LL, &KdpContext);
}
