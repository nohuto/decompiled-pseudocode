/*
 * XREFs of EtwpWriteProcessStarted @ 0x14054CC84
 * Callers:
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     PsGetProcessSessionId @ 0x140013CD0 (PsGetProcessSessionId.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x140134254 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MmGetSessionCreateTime @ 0x14049C2B8 (MmGetSessionCreateTime.c)
 */

void __fastcall EtwpWriteProcessStarted(__int64 a1, int *a2, __int64 a3, unsigned __int16 *a4)
{
  int ProcessSessionId; // eax
  __int64 v9; // rcx
  unsigned __int16 *v10; // r15
  int v11; // ecx
  __int64 v12; // r10
  unsigned __int8 v13; // cl
  int v14; // eax
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 Time; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  int *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  int *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  _DWORD *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  __int64 v36; // [rsp+E0h] [rbp-20h]
  _DWORD v37[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int64 *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int64 *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  __int64 *p_Time; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  int *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  int *v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+160h] [rbp+60h] BYREF
  __int64 v52; // [rsp+170h] [rbp+70h]
  int v53; // [rsp+178h] [rbp+78h]
  int v54; // [rsp+17Ch] [rbp+7Ch]
  _DWORD *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  __int64 v57; // [rsp+190h] [rbp+90h]
  _DWORD v58[2]; // [rsp+198h] [rbp+98h] BYREF

  if ( stru_1402F3640.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3640, 3uLL) )
  {
    v20 = *(_QWORD *)(a1 + 776);
    v15 = *(_DWORD *)(a1 + 744);
    v16 = *(_DWORD *)(a1 + 992);
    ProcessSessionId = PsGetProcessSessionId(a1);
    v9 = *(_QWORD *)(a1 + 1856);
    v10 = *(unsigned __int16 **)(a1 + 1128);
    v17 = ProcessSessionId;
    v22 = v9;
    v21 = v9 | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
    v23 = *(_QWORD *)(a1 + 1864);
    Time = MmGetSessionCreateTime((struct _KPROCESS *)a1);
    v18 = *a2;
    v19 = a2[1];
    v27 = 8LL;
    v26 = &v20;
    v29 = 4LL;
    v28 = &v15;
    v30 = &v16;
    v32 = &v17;
    v31 = 4LL;
    v33 = 4LL;
    v11 = *v10;
    v36 = *((_QWORD *)v10 + 1);
    v38 = &v21;
    v40 = &v22;
    v42 = &v23;
    p_Time = &Time;
    v46 = &v18;
    v37[0] = v11;
    v48 = &v19;
    v34 = v37;
    v35 = 2LL;
    v37[1] = 0;
    v39 = 8LL;
    v41 = 8LL;
    v43 = 8LL;
    v45 = 8LL;
    v47 = 4LL;
    v49 = 4LL;
    TlgCreateWsz(&pDesc, (LPCWSTR)(a3 + 16));
    TlgCreateWsz(&v51, (LPCWSTR)(a3 + 272));
    v13 = *(_BYTE *)(v12 + 1);
    v14 = 15;
    if ( v13 <= 0xFu )
      v14 = v13;
    v52 = v12;
    v53 = 4 * v14 + 8;
    v55 = v58;
    v57 = *((_QWORD *)a4 + 1);
    v58[0] = *a4;
    v54 = 0;
    v56 = 2LL;
    v58[1] = 0;
    TlgWrite(&stru_1402F3640, &unk_14027E839, 0LL, 0LL, 0x13u, &pData);
  }
}
