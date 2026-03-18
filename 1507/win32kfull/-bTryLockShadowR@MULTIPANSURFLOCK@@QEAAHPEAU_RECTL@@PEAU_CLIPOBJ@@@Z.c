/*
 * XREFs of ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0289530
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0287684 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C02893AC (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C028A46C (-vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall MULTIPANSURFLOCK::bTryLockShadowR(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // r15
  int v19; // eax
  int v20; // r14d
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rcx
  char *v26; // r12
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 i; // rsi
  __int64 v35; // r14
  char *v36; // r15
  __int64 v37; // rax
  struct _PANDEV *v38; // rcx
  signed __int32 v39[8]; // [rsp+0h] [rbp-50h] BYREF
  __int128 v40; // [rsp+30h] [rbp-20h] BYREF
  __int64 v41; // [rsp+40h] [rbp-10h] BYREF
  int v42; // [rsp+48h] [rbp-8h]
  int v43; // [rsp+4Ch] [rbp-4h]
  __int64 v44; // [rsp+90h] [rbp+40h]
  __int64 v45; // [rsp+A0h] [rbp+50h]
  __int64 v46; // [rsp+A8h] [rbp+58h]

  v40 = (__int128)*a2;
  ERECTL::vOrder((ERECTL *)&v40);
  v4 = 0;
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 4);
  }
  else
  {
    v5 = *((_QWORD *)this + 5);
    v6 = v5;
  }
  v7 = *(_QWORD *)(v6 + 64);
  v41 = 0LL;
  v8 = *(_DWORD *)(v7 + 32);
  v9 = *(_QWORD *)(v5 + 64);
  v42 = v8;
  v43 = *(_DWORD *)(v9 + 36);
  ERECTL::operator*=(&v40, &v41);
  if ( ERECTL::bEmpty((ERECTL *)&v40) )
    return 1;
  v11 = v10;
  if ( !v10 )
    v11 = *((_QWORD *)this + 5);
  v12 = (unsigned int)v40 / *(_DWORD *)(v11 + 776);
  v13 = v10;
  v14 = v12;
  if ( !v10 )
    v13 = *((_QWORD *)this + 5);
  v15 = DWORD2(v40) / *(_DWORD *)(v13 + 776);
  v16 = v10;
  v17 = v15;
  if ( !v10 )
    v16 = *((_QWORD *)this + 5);
  v18 = DWORD1(v40) / *(_DWORD *)(v16 + 780);
  if ( !v10 )
    v10 = *((_QWORD *)this + 5);
  v19 = HIDWORD(v40) / *(_DWORD *)(v10 + 780);
  *((_BYTE *)this + 48) = 1;
  v20 = v19 + 1;
  memset((char *)this + 50, 0, 0x51uLL);
  v21 = *((_QWORD *)this + 4);
  v22 = v17 + 1;
  if ( !v21 )
    v21 = *((_QWORD *)this + 5);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(v21 + 792) + 32LL), UserRequest, 0, 0, 0LL);
  v23 = v22;
  v24 = v18;
  v44 = v23;
  v45 = v20;
  if ( v18 >= v20 )
  {
LABEL_24:
    v32 = *((_QWORD *)this + 4);
    if ( !v32 )
      v32 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v32 + 792) + 32LL), 0);
    return 1;
  }
  v25 = v14;
  v46 = v14;
  v26 = (char *)this + 9 * v18 + 50;
  v27 = 8 * (v46 + 9 * v18) + 128;
  v28 = v20;
  while ( 1 )
  {
    v29 = v25;
    if ( v25 < v23 )
      break;
LABEL_23:
    ++v24;
    v27 += 72LL;
    v26 += 9;
    if ( v24 >= v28 )
      goto LABEL_24;
  }
  v30 = v27;
  while ( 1 )
  {
    v31 = *((_QWORD *)this + 4);
    if ( !v31 )
      v31 = *((_QWORD *)this + 5);
    if ( (unsigned int)EngAcquireSemaphoreSharedNoWait(*(_QWORD *)(v30 + v31)) != 1 )
      break;
    v23 = v44;
    v30 += 8LL;
    v26[v29++] = 1;
    if ( v29 >= v44 )
    {
      v25 = v46;
      v28 = v45;
      goto LABEL_23;
    }
  }
  for ( i = 88LL; i >= 16; i -= 9LL )
  {
    v35 = 8LL;
    v36 = (char *)this + i;
    do
    {
      if ( v36[v35 + 115] == 1 )
      {
        v37 = *((_QWORD *)this + 4);
        if ( !v37 )
          v37 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v37 + 8 * (i + v35)));
        v36[v35 + 115] = 0;
      }
      --v35;
    }
    while ( v35 >= 0 );
  }
  memset((char *)this + 131, 0, 0x51uLL);
  _InterlockedOr(v39, 0);
  MULTIPANSURFLOCK::vUnLockShadowR(this);
  v38 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v38 )
    v38 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLockWait(v38);
  memset((char *)this + 50, 0, 0x51uLL);
  *((_BYTE *)this + 48) = 0;
  return v4;
}
