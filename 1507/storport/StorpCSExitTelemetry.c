/*
 * XREFs of StorpCSExitTelemetry @ 0x1C0036934
 * Callers:
 *     RaidPowerSettingCallback @ 0x1C0024730 (RaidPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 */

void __fastcall StorpCSExitTelemetry(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  const struct _TlgProvider_t *v11; // rcx
  __int64 *i; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ecx
  const struct _TlgProvider_t *v20; // rcx
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+31h] [rbp-CFh] BYREF
  char v23; // [rsp+32h] [rbp-CEh] BYREF
  char v24; // [rsp+33h] [rbp-CDh] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+3Ch] [rbp-C4h] BYREF
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h] BYREF
  int v31; // [rsp+4Ch] [rbp-B4h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h] BYREF
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  const GUID *v45; // [rsp+98h] [rbp-68h] BYREF
  const GUID *v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v53; // [rsp+D8h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR v55; // [rsp+100h] [rbp+0h] BYREF
  __int64 v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  __int64 *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  int *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  char *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  char *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  char *v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  int *v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  int *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  char *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 *v74; // [rsp+1B0h] [rbp+B0h]
  __int64 v75; // [rsp+1B8h] [rbp+B8h]
  __int64 *v76; // [rsp+1C0h] [rbp+C0h]
  __int64 v77; // [rsp+1C8h] [rbp+C8h]
  __int64 *v78; // [rsp+1D0h] [rbp+D0h]
  __int64 v79; // [rsp+1D8h] [rbp+D8h]
  __int64 *v80; // [rsp+1E0h] [rbp+E0h]
  __int64 v81; // [rsp+1E8h] [rbp+E8h]
  int *v82; // [rsp+1F0h] [rbp+F0h]
  __int64 v83; // [rsp+1F8h] [rbp+F8h]
  int *v84; // [rsp+200h] [rbp+100h]
  __int64 v85; // [rsp+208h] [rbp+108h]
  int *v86; // [rsp+210h] [rbp+110h]
  __int64 v87; // [rsp+218h] [rbp+118h]
  int *v88; // [rsp+220h] [rbp+120h]
  __int64 v89; // [rsp+228h] [rbp+128h]
  const GUID **v90; // [rsp+230h] [rbp+130h]
  __int64 v91; // [rsp+238h] [rbp+138h]
  __int64 *v92; // [rsp+240h] [rbp+140h]
  __int64 v93; // [rsp+248h] [rbp+148h]
  __int64 *v94; // [rsp+250h] [rbp+150h]
  __int64 v95; // [rsp+258h] [rbp+158h]
  int *v96; // [rsp+260h] [rbp+160h]
  __int64 v97; // [rsp+268h] [rbp+168h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+270h] [rbp+170h] BYREF
  __int64 v99; // [rsp+290h] [rbp+190h]
  __int64 v100; // [rsp+298h] [rbp+198h]
  int *v101; // [rsp+2A0h] [rbp+1A0h]
  __int64 v102; // [rsp+2A8h] [rbp+1A8h]
  int *v103; // [rsp+2B0h] [rbp+1B0h]
  __int64 v104; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 *v105; // [rsp+2C0h] [rbp+1C0h]
  __int64 v106; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v107; // [rsp+2D0h] [rbp+1D0h]
  __int64 v108; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v109; // [rsp+2E0h] [rbp+1E0h]
  __int64 v110; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v111; // [rsp+2F0h] [rbp+1F0h]
  __int64 v112; // [rsp+2F8h] [rbp+1F8h]
  int *v113; // [rsp+300h] [rbp+200h]
  __int64 v114; // [rsp+308h] [rbp+208h]
  int *v115; // [rsp+310h] [rbp+210h]
  __int64 v116; // [rsp+318h] [rbp+218h]
  int *v117; // [rsp+320h] [rbp+220h]
  __int64 v118; // [rsp+328h] [rbp+228h]
  int *v119; // [rsp+330h] [rbp+230h]
  __int64 v120; // [rsp+338h] [rbp+238h]
  const GUID **v121; // [rsp+340h] [rbp+240h]
  __int64 v122; // [rsp+348h] [rbp+248h]
  __int64 *v123; // [rsp+350h] [rbp+250h]
  __int64 v124; // [rsp+358h] [rbp+258h]
  __int64 *v125; // [rsp+360h] [rbp+260h]
  __int64 v126; // [rsp+368h] [rbp+268h]
  int *v127; // [rsp+370h] [rbp+270h]
  __int64 v128; // [rsp+378h] [rbp+278h]

  if ( a1 )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = *(_QWORD *)(a1 + 5320);
    if ( v3 )
      *(_QWORD *)(a1 + 5328) += (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    if ( *(_QWORD *)(a1 + 5088) )
    {
      v4 = *(_QWORD *)(a1 + 5344);
      if ( v4 )
        *(_QWORD *)(a1 + 5352) += (v2 - v4) / 0x2710uLL;
      v5 = *(_QWORD *)(a1 + 5360);
      if ( v5 )
        *(_QWORD *)(a1 + 5368) += (v2 - v5) / 0x2710uLL;
      v6 = *(const struct _TlgProvider_t **)(a1 + 5336);
      if ( v6 )
        v6 = (const struct _TlgProvider_t *)((char *)v6 - *(_QWORD *)(a1 + 5312));
      if ( (unsigned int)dword_1C0044050 > 5 && TlgKeywordOn(v6, 0x400000000000uLL) )
      {
        v37 = *(_DWORD *)(a1 + 56);
        v10 = *(_QWORD *)(v9 + 8);
        v45 = v8;
        v100 = 16LL;
        v102 = 4LL;
        v36 = *(_DWORD *)(v10 + 12);
        v11 = (const struct _TlgProvider_t *)(v2 - *(_QWORD *)(a1 + 5312));
        v40 = *(_QWORD *)(a1 + 5328);
        v43 = *(_QWORD *)(a1 + 5368);
        v52 = *(_QWORD *)(a1 + 5352);
        v28 = *(_DWORD *)(a1 + 5396);
        v34 = *(_DWORD *)(a1 + 5400);
        v30 = *(_DWORD *)(a1 + 5404);
        v38 = *(_DWORD *)(a1 + 5408);
        v51 = *(_QWORD *)(a1 + 5376);
        v47 = *(_QWORD *)(a1 + 5384);
        v32 = *(_DWORD *)(a1 + 5392);
        v99 = a1 + 5412;
        v101 = &v37;
        v103 = &v36;
        v105 = &v49;
        v107 = &v40;
        v109 = &v43;
        v111 = &v52;
        v113 = &v28;
        v115 = &v34;
        v117 = &v30;
        v119 = &v38;
        v121 = &v45;
        v123 = &v51;
        v125 = &v47;
        v127 = &v32;
        v49 = (unsigned __int64)v11 / 0x2710;
        v104 = 4LL;
        v106 = 8LL;
        v108 = 8LL;
        v110 = 8LL;
        v112 = 8LL;
        v114 = 4LL;
        v116 = 4LL;
        v118 = 4LL;
        v120 = 4LL;
        v122 = 8LL;
        v124 = 8LL;
        v126 = 8LL;
        v128 = 4LL;
        TlgWrite(v11, &unk_1C003D7D5, v7, v8, 0x11u, &pData);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    for ( i = *(__int64 **)(a1 + 120); i != (__int64 *)(a1 + 120); i = (__int64 *)*i )
    {
      if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 6)) )
      {
        v13 = i[206];
        if ( v13 )
          i[207] += (v2 - v13) / 0x2710uLL;
        v14 = i[208];
        if ( v14 )
          i[209] += (v2 - v14) / 0x2710uLL;
        v15 = (const struct _TlgProvider_t *)i[205];
        if ( v15 )
          v15 = (const struct _TlgProvider_t *)((char *)v15 - *(_QWORD *)(a1 + 5312));
        if ( (unsigned int)dword_1C0044050 > 5 )
        {
          if ( TlgKeywordOn(v15, 0x400000000000uLL) )
          {
            v17 = i[174];
            v26 = *(_DWORD *)(a1 + 56);
            v23 = *((_BYTE *)i + 40);
            v21 = *((_BYTE *)i + 41);
            v22 = *((_BYTE *)i + 42);
            v18 = *(_QWORD *)(v17 + 8);
            v46 = v16;
            v57 = 16LL;
            v59 = 16LL;
            v19 = *(_DWORD *)(v18 + 12);
            v29 = *(_DWORD *)(v17 + 24);
            LOBYTE(v18) = (*(_DWORD *)(v17 + 32) & 0x200) != 0;
            v27 = v19;
            v24 = v18;
            v20 = (const struct _TlgProvider_t *)(v2 - *(_QWORD *)(a1 + 5312));
            v41 = *(_QWORD *)(a1 + 5328);
            v42 = i[207];
            v44 = i[209];
            v31 = *((_DWORD *)i + 425);
            v33 = *((_DWORD *)i + 426);
            v35 = *((_DWORD *)i + 427);
            v25 = *((_DWORD *)i + 428);
            v48 = i[210];
            v50 = i[211];
            v39 = *((_DWORD *)i + 424);
            v56 = a1 + 5412;
            v58 = i + 203;
            v60 = &v26;
            v62 = &v23;
            v64 = &v21;
            v66 = &v22;
            v68 = &v27;
            v70 = &v29;
            v72 = &v24;
            v74 = &v53;
            v76 = &v41;
            v78 = &v42;
            v53 = (unsigned __int64)v20 / 0x2710;
            v61 = 4LL;
            v63 = 1LL;
            v65 = 1LL;
            v67 = 1LL;
            v69 = 4LL;
            v71 = 4LL;
            v73 = 1LL;
            v75 = 8LL;
            v77 = 8LL;
            v79 = 8LL;
            v80 = &v44;
            v82 = &v31;
            v84 = &v33;
            v86 = &v35;
            v88 = &v25;
            v90 = &v46;
            v92 = &v48;
            v94 = &v50;
            v96 = &v39;
            v81 = 8LL;
            v83 = 4LL;
            v85 = 4LL;
            v87 = 4LL;
            v89 = 4LL;
            v91 = 8LL;
            v93 = 8LL;
            v95 = 8LL;
            v97 = 4LL;
            TlgWrite(v20, &unk_1C003E000, (LPCGUID)1, v16, 0x17u, &v55);
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[173]);
      }
      *(__int64 *)((char *)i + 1700) = 0LL;
      *(__int64 *)((char *)i + 1708) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 5396) = 0LL;
    *(_QWORD *)(a1 + 5404) = 0LL;
    *(_QWORD *)(a1 + 5312) = v2;
  }
}
