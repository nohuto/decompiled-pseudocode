/*
 * XREFs of LookUpTableFlushComplete @ 0x1401496CC
 * Callers:
 *     FlushWorkItemRoutineKernelMode @ 0x1400AD574 (FlushWorkItemRoutineKernelMode.c)
 *     RegisteredProviderEtwCallback @ 0x140149668 (RegisteredProviderEtwCallback.c)
 *     TlgAggregateInternalProviderCallback @ 0x14014CE74 (TlgAggregateInternalProviderCallback.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     FlushLookUpTableBucket @ 0x1400AD648 (FlushLookUpTableBucket.c)
 *     UpdateInternalStatsOnFlush @ 0x1400AD844 (UpdateInternalStatsOnFlush.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

_UNKNOWN **__fastcall LookUpTableFlushComplete(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // edx
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  __int128 v9; // xmm0
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v16; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  __int128 *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  __int64 v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  _QWORD *v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  __int64 v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  int *v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  int *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  int *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]
  int *v32; // [rsp+128h] [rbp+20h]
  __int64 v33; // [rsp+130h] [rbp+28h]
  __int64 *v34; // [rsp+138h] [rbp+30h]
  __int64 v35; // [rsp+140h] [rbp+38h]
  _UNKNOWN *retaddr; // [rsp+160h] [rbp+58h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 256);
  v3 = 0;
  if ( v2 )
  {
    UpdateInternalStatsOnFlush(a1, v2);
    v6 = v5 + 344;
    if ( *(_QWORD *)(v5 + 344) )
    {
      if ( stru_1402F3DD0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3DD0, 0x400000000000uLL) )
      {
        v9 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 400) + 8LL) - 16LL);
        v18 = &v16;
        v20 = a1 + 352;
        v15[0] = *(unsigned int *)(a1 + 360);
        v22 = v15;
        v10 = *(_DWORD *)(a1 + 364);
        v26 = &v10;
        v11 = *(_DWORD *)(a1 + 368);
        v28 = &v11;
        v12 = *(_DWORD *)(a1 + 372);
        v30 = &v12;
        v13 = *(_DWORD *)(a1 + 376);
        v32 = &v13;
        LODWORD(v14) = *(_DWORD *)(a1 + 380);
        v34 = &v14;
        v16 = v9;
        v19 = 16LL;
        v21 = 8LL;
        v23 = 8LL;
        v24 = v6;
        v25 = 8LL;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        TlgWrite(&stru_1402F3DD0, &unk_14027F218, 0LL, 0LL, 0xBu, &pData);
      }
      memset(&v15[1], 0, 0x28uLL);
      v7 = *(_OWORD *)&v15[3];
      *(_OWORD *)v6 = *(_OWORD *)&v15[1];
      v8 = v15[5];
      *(_OWORD *)(v6 + 16) = v7;
      *(_QWORD *)(v6 + 32) = v8;
    }
    do
      result = (_UNKNOWN **)FlushLookUpTableBucket(a1, v3++);
    while ( v3 < 0x20 );
  }
  return result;
}
