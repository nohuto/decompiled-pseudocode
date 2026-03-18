/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B3CF0
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     GreCreateSemaphoreInternal @ 0x1C0012318 (GreCreateSemaphoreInternal.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002C080 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C0059DB0 (GreDeleteSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C006EA70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(PDEVOBJ *this, char *a2)
{
  size_t v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rbx
  HDEV v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  HDEV v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  _OWORD *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // ebp
  void *v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int64 v21; // rdx
  __int128 v22; // xmm1
  __int64 v23; // rdx
  HDEV v24; // rax
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  __int64 SemaphoreInternal; // rax
  __int64 v28; // rdx
  signed __int32 v29; // ett
  signed __int32 v30; // ett
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rax
  struct _ERESOURCE *v34; // rcx
  _BYTE v36[80]; // [rsp+20h] [rbp-68h] BYREF
  char *v37; // [rsp+90h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v37 = a2;
  if ( a2 && (*((_DWORD *)a2 + 14) & 1) != 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v36, (struct PDEVOBJ *)&v37);
    v4 = gdwDirectDrawContext + 3580;
    if ( (unsigned int)v4 > gdwDirectDrawContext )
      *(_QWORD *)this = PALLOCMEM2(v4, 1986348103LL, 1);
    if ( !*(_QWORD *)this )
      goto LABEL_37;
    v5 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 1816LL) = *((_QWORD *)a2 + 227);
    v6 = 2LL;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 1808LL) = 1348756854;
    v7 = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 1752LL) = *((_QWORD *)a2 + 219);
    *(_QWORD *)(*(_QWORD *)this + 1760LL) = *((_QWORD *)a2 + 220);
    *(_QWORD *)(*(_QWORD *)this + 1768LL) = *((_QWORD *)a2 + 221);
    *(_QWORD *)(*(_QWORD *)this + 1776LL) = *((_QWORD *)a2 + 222);
    *(_QWORD *)(*(_QWORD *)this + 1784LL) = *((_QWORD *)a2 + 223);
    *(_QWORD *)(*(_QWORD *)this + 1792LL) = *((_QWORD *)a2 + 224);
    *(_QWORD *)(*(_QWORD *)this + 1800LL) = *((_QWORD *)a2 + 225);
    *(_QWORD *)(*(_QWORD *)this + 1824LL) = *((_QWORD *)a2 + 228);
    *(_QWORD *)(*(_QWORD *)this + 1832LL) = *((_QWORD *)a2 + 229);
    *(_QWORD *)(*(_QWORD *)this + 1840LL) = *((_QWORD *)a2 + 230);
    v8 = (HDEV)(a2 + 1848);
    v9 = (_OWORD *)(*(_QWORD *)this + 1848LL);
    do
    {
      *v9 = *(_OWORD *)v8;
      v9[1] = *((_OWORD *)v8 + 1);
      v9[2] = *((_OWORD *)v8 + 2);
      v9[3] = *((_OWORD *)v8 + 3);
      v9[4] = *((_OWORD *)v8 + 4);
      v9[5] = *((_OWORD *)v8 + 5);
      v9[6] = *((_OWORD *)v8 + 6);
      v9 += 8;
      v10 = *((_OWORD *)v8 + 7);
      v8 += 32;
      *(v9 - 1) = v10;
      --v6;
    }
    while ( v6 );
    *v9 = *(_OWORD *)v8;
    v9[1] = *((_OWORD *)v8 + 1);
    v9[2] = *((_OWORD *)v8 + 2);
    *((_QWORD *)v9 + 6) = *((_QWORD *)v8 + 6);
    v11 = (HDEV)(a2 + 2160);
    v12 = (_OWORD *)(*(_QWORD *)this + 2160LL);
    do
    {
      *v12 = *(_OWORD *)v11;
      v12[1] = *((_OWORD *)v11 + 1);
      v12[2] = *((_OWORD *)v11 + 2);
      v12[3] = *((_OWORD *)v11 + 3);
      v12[4] = *((_OWORD *)v11 + 4);
      v12[5] = *((_OWORD *)v11 + 5);
      v12[6] = *((_OWORD *)v11 + 6);
      v12 += 8;
      v13 = *((_OWORD *)v11 + 7);
      v11 += 32;
      *(v12 - 1) = v13;
      --v5;
    }
    while ( v5 );
    *v12 = *(_OWORD *)v11;
    v12[1] = *((_OWORD *)v11 + 1);
    v12[2] = *((_OWORD *)v11 + 2);
    v12[3] = *((_OWORD *)v11 + 3);
    v14 = *(_OWORD **)this;
    v14[155] = *((_OWORD *)a2 + 155);
    v14[156] = *((_OWORD *)a2 + 156);
    v14[157] = *((_OWORD *)a2 + 157);
    v14[158] = *((_OWORD *)a2 + 158);
    v14[159] = *((_OWORD *)a2 + 159);
    v14[160] = *((_OWORD *)a2 + 160);
    *(_QWORD *)(*(_QWORD *)this + 2584LL) = *((_QWORD *)a2 + 323);
    *(_QWORD *)(*(_QWORD *)this + 2592LL) = *((_QWORD *)a2 + 324);
    *(_QWORD *)(*(_QWORD *)this + 2600LL) = *((_QWORD *)a2 + 325);
    *(_QWORD *)(*(_QWORD *)this + 2608LL) = *((_QWORD *)a2 + 326);
    *(_DWORD *)(*(_QWORD *)this + 2668LL) = *((_DWORD *)a2 + 667);
    *(_QWORD *)(*(_QWORD *)this + 2672LL) = *((_QWORD *)a2 + 334);
    *(_QWORD *)(*(_QWORD *)this + 2680LL) = *((_QWORD *)a2 + 335);
    *(_QWORD *)(*(_QWORD *)this + 2696LL) = *((_QWORD *)a2 + 337);
    *(_QWORD *)(*(_QWORD *)this + 2704LL) = *((_QWORD *)a2 + 338);
    *(_QWORD *)(*(_QWORD *)this + 2712LL) = *((_QWORD *)a2 + 339);
    *(_QWORD *)(*(_QWORD *)this + 2688LL) = *((_QWORD *)a2 + 336);
    *(_DWORD *)(*(_QWORD *)this + 3552LL) = *((_DWORD *)a2 + 888);
    v15 = *((_QWORD *)a2 + 327);
    if ( v15 )
    {
      v16 = *(unsigned __int16 *)(v15 + 68) + *(unsigned __int16 *)(v15 + 70);
      *(_QWORD *)(*(_QWORD *)this + 2616LL) = PALLOCMEM2(v16, 1986356295LL, 0);
      v17 = *(void **)(*(_QWORD *)this + 2616LL);
      if ( !v17 )
        goto LABEL_30;
      memmove(v17, *((const void **)a2 + 327), v16);
    }
    v18 = 1488LL;
    *(_DWORD *)(*(_QWORD *)this + 60LL) = *((_DWORD *)a2 + 15);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *((_QWORD *)a2 + 10);
    *(_QWORD *)(*(_QWORD *)this + 1464LL) = *((_QWORD *)a2 + 183);
    *(_QWORD *)(*(_QWORD *)this + 1472LL) = *((_QWORD *)a2 + 184);
    *(_QWORD *)(*(_QWORD *)this + 1480LL) = *((_QWORD *)a2 + 185);
    *(_QWORD *)(*(_QWORD *)this + 2576LL) = *((_QWORD *)a2 + 322);
    do
    {
      *(_QWORD *)(v18 + *(_QWORD *)this) = *(_QWORD *)&a2[v18];
      v18 += 8LL;
    }
    while ( v18 < 1536 );
    *(_QWORD *)(*(_QWORD *)this + 1536LL) = *((_QWORD *)a2 + 192);
    if ( *((_QWORD *)a2 + 216) )
    {
      *(_QWORD *)(*(_QWORD *)this + 1728LL) = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
      v19 = *(_OWORD **)(*(_QWORD *)this + 1728LL);
      if ( !v19 )
        goto LABEL_30;
      v20 = (_OWORD *)*((_QWORD *)a2 + 216);
      v21 = 12LL;
      do
      {
        *v19 = *v20;
        v19[1] = v20[1];
        v19[2] = v20[2];
        v19[3] = v20[3];
        v19[4] = v20[4];
        v19[5] = v20[5];
        v19[6] = v20[6];
        v19 += 8;
        v22 = v20[7];
        v20 += 8;
        *(v19 - 1) = v22;
        --v21;
      }
      while ( v21 );
    }
    v23 = 6LL;
    *(_QWORD *)(*(_QWORD *)this + 1744LL) = *((_QWORD *)a2 + 218);
    *(_QWORD *)(*(_QWORD *)this + 2624LL) = *((_QWORD *)a2 + 328);
    *(_DWORD *)(*(_QWORD *)this + 2632LL) = *((_DWORD *)a2 + 658);
    *(_DWORD *)(*(_QWORD *)this + 2636LL) = *((_DWORD *)a2 + 659);
    v24 = (HDEV)(a2 + 2720);
    v25 = (_OWORD *)(*(_QWORD *)this + 2720LL);
    do
    {
      *v25 = *(_OWORD *)v24;
      v25[1] = *((_OWORD *)v24 + 1);
      v25[2] = *((_OWORD *)v24 + 2);
      v25[3] = *((_OWORD *)v24 + 3);
      v25[4] = *((_OWORD *)v24 + 4);
      v25[5] = *((_OWORD *)v24 + 5);
      v25[6] = *((_OWORD *)v24 + 6);
      v25 += 8;
      v26 = *((_OWORD *)v24 + 7);
      v24 += 32;
      *(v25 - 1) = v26;
      --v23;
    }
    while ( v23 );
    *v25 = *(_OWORD *)v24;
    v25[1] = *((_OWORD *)v24 + 1);
    v25[2] = *((_OWORD *)v24 + 2);
    *((_QWORD *)v25 + 6) = *((_QWORD *)v24 + 6);
    if ( *((_DWORD *)a2 + 26) )
    {
      *(_QWORD *)(*(_QWORD *)this + 2832LL) = *((_QWORD *)a2 + 165);
      *(_QWORD *)(*(_QWORD *)this + 2840LL) = *((_QWORD *)a2 + 166);
      *(_QWORD *)(*(_QWORD *)this + 2864LL) = *((_QWORD *)a2 + 168);
      *(_QWORD *)(*(_QWORD *)this + 2872LL) = *((_QWORD *)a2 + 169);
      *(_QWORD *)(*(_QWORD *)this + 2880LL) = *((_QWORD *)a2 + 170);
      *(_QWORD *)(*(_QWORD *)this + 2904LL) = *((_QWORD *)a2 + 171);
      *(_QWORD *)(*(_QWORD *)this + 2968LL) = *((_QWORD *)a2 + 172);
      *(_QWORD *)(*(_QWORD *)this + 3312LL) = *((_QWORD *)a2 + 173);
      *(_QWORD *)(*(_QWORD *)this + 3288LL) = *((_QWORD *)a2 + 174);
      *(_QWORD *)(*(_QWORD *)this + 3280LL) = *((_QWORD *)a2 + 175);
      *(_QWORD *)(*(_QWORD *)this + 3264LL) = *((_QWORD *)a2 + 176);
      *(_QWORD *)(*(_QWORD *)this + 3272LL) = *((_QWORD *)a2 + 178);
      *(_QWORD *)(*(_QWORD *)this + 3040LL) = *((_QWORD *)a2 + 177);
      *(_QWORD *)(*(_QWORD *)this + 3440LL) = *((_QWORD *)a2 + 179);
    }
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 1;
    *(_DWORD *)(*(_QWORD *)this + 56LL) = *((_DWORD *)a2 + 14) & 0x60001;
    SemaphoreInternal = GreCreateSemaphoreInternal();
    *(_QWORD *)(*(_QWORD *)this + 64LL) = SemaphoreInternal;
    if ( SemaphoreInternal )
    {
      v28 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 56LL));
      do
        v29 = *(_DWORD *)(v28 + 56);
      while ( v29 != _InterlockedCompareExchange((volatile signed __int32 *)(v28 + 56), v29 & 0xFFFFFFBF, v29) );
      *(_QWORD *)(*(_QWORD *)this + 72LL) = GreCreateSemaphoreInternal();
      if ( *(_QWORD *)(*(_QWORD *)this + 72LL) )
      {
        _m_prefetchw((const void *)(v7 + 56));
        do
          v30 = *(_DWORD *)(v7 + 56);
        while ( v30 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 56), v30 | 0x80000, v30) );
        v31 = (_QWORD *)(*(_QWORD *)this + 2648LL);
        v31[1] = v31;
        *v31 = v31;
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)(*(_QWORD *)this + 24LL) = WPP_MAIN_CB.DeviceQueue.1;
        WPP_MAIN_CB.DeviceQueue.1 = *(struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C *)this;
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v32);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        v33 = (_QWORD *)(*(_QWORD *)this + 3560LL);
        v33[1] = v33;
        *v33 = v33;
LABEL_37:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v36);
        return this;
      }
    }
LABEL_30:
    v34 = *(struct _ERESOURCE **)(*(_QWORD *)this + 64LL);
    if ( v34 )
      GreDeleteSemaphore(v34);
    if ( *(_QWORD *)(*(_QWORD *)this + 2616LL) )
      Win32FreePool();
    if ( *(_QWORD *)(*(_QWORD *)this + 1728LL) )
    {
      Win32FreePool();
      *(_QWORD *)(*(_QWORD *)this + 1728LL) = 0LL;
    }
    Win32FreePool();
    *(_QWORD *)this = 0LL;
    goto LABEL_37;
  }
  return this;
}
