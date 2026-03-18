/*
 * XREFs of ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02904B4
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018688 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0112244 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0290694 (-bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C02906F0 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 */

__int64 __fastcall bUnHookRedir(struct XDCOBJ *a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  struct SURFACE *v4; // rcx
  signed __int32 v5; // ett
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdx
  _OWORD *v9; // rax
  __int64 v10; // r8
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // r8
  __int128 v14; // xmm0
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int64 result; // rax
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF
  __int64 v20; // [rsp+40h] [rbp+18h] BYREF

  if ( !gpRedirDev )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 48);
  v4 = *(struct SURFACE **)(v2 + 512);
  v20 = v3;
  _m_prefetchw((const void *)(v3 + 56));
  do
    v5 = *(_DWORD *)(v3 + 56);
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 56), v5 & 0xFF7FFFFF, v5) );
  *(_QWORD *)(v3 + 3544) = 0LL;
  bUndoMakeOpaque(v4);
  *(_QWORD *)(*(_QWORD *)a1 + 48LL) = v6;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v19 = v7;
  vFindAndReplaceRFONT((struct PDEVOBJ *)&v19, (struct PDEVOBJ *)&v20, (struct PDEVOBJ *)&v19);
  v8 = v20;
  v9 = (_OWORD *)(v7 + 96);
  v10 = 11LL;
  v11 = (_OWORD *)(v20 + 96);
  do
  {
    *v9 = *v11;
    v9[1] = v11[1];
    v9[2] = v11[2];
    v9[3] = v11[3];
    v9[4] = v11[4];
    v9[5] = v11[5];
    v9[6] = v11[6];
    v9 += 8;
    v12 = v11[7];
    v11 += 8;
    *(v9 - 1) = v12;
    --v10;
  }
  while ( v10 );
  v13 = 8LL;
  *v9 = *v11;
  v9[1] = v11[1];
  v14 = v11[2];
  v15 = v7 + 1576;
  v9[2] = v14;
  v16 = (_OWORD *)(v8 + 1576);
  do
  {
    *(_OWORD *)v15 = *v16;
    *(_OWORD *)(v15 + 16) = v16[1];
    *(_OWORD *)(v15 + 32) = v16[2];
    *(_OWORD *)(v15 + 48) = v16[3];
    *(_OWORD *)(v15 + 64) = v16[4];
    *(_OWORD *)(v15 + 80) = v16[5];
    *(_OWORD *)(v15 + 96) = v16[6];
    v15 += 128LL;
    v17 = v16[7];
    v16 += 8;
    *(_OWORD *)(v15 - 16) = v17;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)v15 = *v16;
  *(_OWORD *)(v15 + 16) = v16[1];
  *(_OWORD *)(v15 + 32) = v16[2];
  *(_OWORD *)(v15 + 48) = v16[3];
  *(_OWORD *)(v15 + 64) = v16[4];
  *(_OWORD *)(v15 + 80) = v16[5];
  *(_OWORD *)(v15 + 96) = v16[6];
  *(_QWORD *)(v15 + 112) = *((_QWORD *)v16 + 14);
  memmove((void *)(v7 + 3584), (const void *)(v8 + 3584), gdwDirectDrawContext);
  result = 1LL;
  *(_QWORD *)(v7 + 96) = v7;
  return result;
}
