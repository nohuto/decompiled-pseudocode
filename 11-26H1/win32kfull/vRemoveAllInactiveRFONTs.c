/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1400F45AC
 * Callers:
 *     ?vDelayedReclaim@RFONTOBJ@@QEAAXXZ @ 0x1400C5A78 (-vDelayedReclaim@RFONTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(__int64 a1)
{
  int v2; // edi
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r14
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  HSEMAPHORE *v20; // rdi
  _QWORD *v21; // rsi
  HSEMAPHORE v22; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v23[40]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v24[130]; // [rsp+58h] [rbp-B0h] BYREF

  v2 = 0;
  LODWORD(v22) = 0;
  memset_0(v24, 0, 0x408uLL);
  v3 = 0LL;
  v7 = *(_QWORD *)(W32GetSessionState(v5, v4, v6) + 96);
  *(_QWORD *)v23 = *(_QWORD *)(v7 + 20320);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v22 = *(HSEMAPHORE *)(v7 + 20328);
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 3512);
    v2 = 1;
  }
  else
  {
    v9 = a1;
  }
  if ( (v2 & 1) != 0 )
    v2 &= ~1u;
  v10 = *(_QWORD **)(v9 + 1536);
  while ( 1 )
  {
    v11 = v10;
    v12 = v10;
    if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 3512);
      v2 |= 2u;
    }
    else
    {
      v13 = a1;
    }
    if ( (v2 & 2) != 0 )
      v2 &= ~2u;
    if ( v10 == (_QWORD *)(v13 + 1536) )
      break;
    v24[v3] = v10 - 84;
    v3 = (unsigned int)(v3 + 1);
    v10 = (_QWORD *)*v10;
    if ( (_QWORD *)v10[1] != v12
      || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12)
      || (*v14 = v10, v15 = v11 - 23, v10[1] = v14, v16 = *(v11 - 23), *(_QWORD **)(v16 + 8) != v11 - 23)
      || (v17 = (_QWORD *)*(v11 - 22), (_QWORD *)*v17 != v15) )
    {
      __fastfail(3u);
    }
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v18 = *(v11 - 68);
    W32GetSessionState(v16, v15, v8);
    --*(_DWORD *)(v18 + 68);
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x800000) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 3512) + 1552LL) = 0;
  else
    *(_DWORD *)(a1 + 1552) = 0;
  SEMOBJ<18>::vUnlock(&v22);
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)v23);
  v19 = (unsigned int)v3;
  v24[v3] = 0LL;
  if ( (_DWORD)v3 )
  {
    v20 = (HSEMAPHORE *)v24;
    v21 = v24;
    do
    {
      v22 = *v20;
      memset(&v23[8], 0, 32);
      PushThreadGuardedObject(&v23[8], v21, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v22, 0LL, 0LL, 1);
      PopThreadGuardedObject(&v23[8]);
      v22 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
      ++v21;
      ++v20;
      --v19;
    }
    while ( v19 );
  }
}
