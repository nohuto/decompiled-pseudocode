/*
 * XREFs of EtwpWriteAppStateChangeSummary @ 0x14054AF18
 * Callers:
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140013220 (PsGetProcessServerSilo.c)
 *     _TlgWriteAgg @ 0x14008517C (_TlgWriteAgg.c)
 *     TraceLoggingProviderEnabled @ 0x14010CF00 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x140134254 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 */

char __fastcall EtwpWriteAppStateChangeSummary(
        __int64 a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int16 *a6)
{
  __int64 v10; // r10
  _OWORD *ProcessServerSilo; // rax
  char v12; // cl
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 *v20; // rdx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  _BOOL8 v32; // [rsp+58h] [rbp-B0h] BYREF
  _BOOL8 v33; // [rsp+60h] [rbp-A8h] BYREF
  _BOOL8 v34; // [rsp+68h] [rbp-A0h] BYREF
  _BOOL8 v35; // [rsp+70h] [rbp-98h] BYREF
  _BOOL8 v36; // [rsp+78h] [rbp-90h] BYREF
  _BOOL8 v37; // [rsp+80h] [rbp-88h] BYREF
  _BOOL8 v38; // [rsp+88h] [rbp-80h] BYREF
  __int64 v39; // [rsp+90h] [rbp-78h] BYREF
  __int64 v40; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v48[4]; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+F8h] [rbp-10h] BYREF
  _BOOL8 *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  _BOOL8 *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  _BOOL8 *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  _BOOL8 *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  _BOOL8 *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  _BOOL8 *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  _BOOL8 *v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  __int64 *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  __int64 *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  __int64 *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  __int64 *v70; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]
  __int64 *v72; // [rsp+1C8h] [rbp+C0h]
  __int64 v73; // [rsp+1D0h] [rbp+C8h]
  __int64 *v74; // [rsp+1D8h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+D8h]
  __int64 *v76; // [rsp+1E8h] [rbp+E0h]
  __int64 v77; // [rsp+1F0h] [rbp+E8h]
  __int64 *v78; // [rsp+1F8h] [rbp+F0h]
  __int64 v79; // [rsp+200h] [rbp+F8h]
  __int64 *v80; // [rsp+208h] [rbp+100h]
  __int64 v81; // [rsp+210h] [rbp+108h]
  __int64 *v82; // [rsp+218h] [rbp+110h]
  __int64 v83; // [rsp+220h] [rbp+118h]
  __int64 *v84; // [rsp+228h] [rbp+120h]
  __int64 v85; // [rsp+230h] [rbp+128h]
  __int64 *v86; // [rsp+238h] [rbp+130h]
  __int64 v87; // [rsp+240h] [rbp+138h]
  _DWORD *v88; // [rsp+248h] [rbp+140h]
  __int64 v89; // [rsp+250h] [rbp+148h]
  __int64 v90; // [rsp+258h] [rbp+150h]
  _DWORD v91[2]; // [rsp+260h] [rbp+158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+268h] [rbp+160h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+278h] [rbp+170h] BYREF
  __int64 *v94; // [rsp+288h] [rbp+180h]
  __int64 v95; // [rsp+290h] [rbp+188h]
  char *v96; // [rsp+298h] [rbp+190h]
  __int64 v97; // [rsp+2A0h] [rbp+198h]
  _DWORD *v98; // [rsp+2A8h] [rbp+1A0h]
  __int64 v99; // [rsp+2B0h] [rbp+1A8h]
  __int64 v100; // [rsp+2B8h] [rbp+1B0h]
  _DWORD v101[2]; // [rsp+2C0h] [rbp+1B8h] BYREF
  _QWORD *v102; // [rsp+2C8h] [rbp+1C0h]
  __int64 v103; // [rsp+2D0h] [rbp+1C8h]

  memset(v48, 0, 29);
  if ( TraceLoggingProviderEnabled(&stru_1402F3640, (UCHAR)a2, 0x200000000000uLL) )
  {
    v10 |= 1uLL;
    v48[0] = v10;
  }
  if ( ((*(_DWORD *)(a1 + 1580) + 1073741515) & 0xFFFFFFFB) == 0 )
    v48[0] = v10 | 0x100;
  ProcessServerSilo = (_OWORD *)PsGetProcessServerSilo(a1);
  if ( ProcessServerSilo == (_OWORD *)-1LL )
    ProcessServerSilo = (_OWORD *)PsGetCurrentSilo();
  if ( ProcessServerSilo )
  {
    ProcessServerSilo = (_OWORD *)((char *)ProcessServerSilo + 1240);
    if ( ProcessServerSilo )
      *(_OWORD *)((char *)&v48[1] + 5) = *ProcessServerSilo;
  }
  if ( stru_1402F3640.LevelPlus1 > 5 )
  {
    LOBYTE(ProcessServerSilo) = TlgKeywordOn(&stru_1402F3640, 0x400000000000uLL);
    if ( (_BYTE)ProcessServerSilo )
    {
      v12 = *a2;
      v13 = *a2 == 1;
      v32 = *a2 == 0;
      v33 = v13;
      v34 = v12 == 2;
      v35 = v12 == 3;
      v36 = v12 == 4;
      v37 = v12 == 5;
      v38 = v12 == 6;
      v39 = *(_QWORD *)(a2 + 37);
      v40 = *(_QWORD *)(a2 + 45);
      v41 = *(unsigned __int8 *)(a1 + 1739);
      v14 = 0LL;
      if ( a3 )
        v14 = *a3;
      v42 = v14;
      if ( a3 )
      {
        v29 = *(_QWORD *)(a3 + 1);
        v30 = *(_QWORD *)(a3 + 3);
        v15 = a3[7];
      }
      else
      {
        v29 = 0LL;
        v30 = 0LL;
        v15 = 0LL;
      }
      v43 = v15;
      v16 = 0LL;
      if ( a3 )
        v16 = a3[9];
      v44 = v16;
      v17 = 0LL;
      if ( a3 )
        v17 = a3[8];
      v45 = v17;
      v18 = 0LL;
      if ( a3 )
        v18 = a3[10];
      v46 = v18;
      if ( a3 )
        v31 = *(_QWORD *)(a3 + 5);
      else
        v31 = 0LL;
      if ( v12 == 3 )
        v19 = *(unsigned int *)(a1 + 1440);
      else
        v19 = 0LL;
      v20 = *(unsigned __int16 **)(a1 + 1128);
      v47 = v19;
      v51 = 8LL;
      v28 = *a5;
      v50 = &v32;
      v52 = &v33;
      v54 = &v34;
      v56 = &v35;
      v58 = &v36;
      v60 = &v37;
      v62 = &v38;
      v64 = &v39;
      v66 = &v40;
      v68 = &v41;
      v70 = &v42;
      v72 = &v29;
      v74 = &v30;
      v76 = &v43;
      v78 = &v44;
      v80 = &v45;
      v82 = &v46;
      v84 = &v31;
      v86 = &v47;
      v53 = 8LL;
      v55 = 8LL;
      v57 = 8LL;
      v59 = 8LL;
      v61 = 8LL;
      v63 = 8LL;
      v65 = 8LL;
      v67 = 8LL;
      v69 = 8LL;
      v71 = 8LL;
      v73 = 8LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 8LL;
      v87 = 8LL;
      v21 = *v20;
      v22 = *((_QWORD *)v20 + 1);
      v88 = v91;
      v91[0] = v21;
      v89 = 2LL;
      v90 = v22;
      v91[1] = 0;
      TlgCreateWsz(&pDesc, (LPCWSTR)(a4 + 16));
      TlgCreateWsz(&v93, (LPCWSTR)(a4 + 272));
      v95 = v23;
      v94 = &v28;
      v96 = (char *)&v28 + 4;
      v98 = v101;
      v97 = v23;
      v100 = *((_QWORD *)a6 + 1);
      v101[0] = *a6;
      v102 = v48;
      v99 = v24;
      v101[1] = 0;
      v103 = 29LL;
      LOBYTE(ProcessServerSilo) = TlgWriteAgg(
                                    (__int64)&stru_1402F3640,
                                    (unsigned __int8 *)dword_14027EC82,
                                    v25,
                                    v26,
                                    0x1Eu,
                                    &v49);
    }
  }
  return (char)ProcessServerSilo;
}
