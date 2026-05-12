/*
 * XREFs of StorpTelemetrySendUnitErrorData @ 0x1C0038584
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C0037550 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     _TlgWrite @ 0x1C000F63C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000F6DC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C0036538 (StorpAreTelemetryErrorsEqual.c)
 *     Template_qcccqccccccqxq @ 0x1C00394D4 (Template_qcccqccccccqxq.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorData(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r14
  int v3; // r15d
  unsigned __int16 v5; // r12
  __int64 v6; // rax
  unsigned __int16 v7; // si
  unsigned __int8 i; // di
  char v9; // al
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  char v14; // r11
  const struct _TlgProvider_t *v15; // rcx
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  char v19; // r11
  char v20; // [rsp+98h] [rbp-80h] BYREF
  char v21; // [rsp+99h] [rbp-7Fh] BYREF
  char v22; // [rsp+9Ah] [rbp-7Eh] BYREF
  char v23; // [rsp+9Bh] [rbp-7Dh] BYREF
  int v24; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v25; // [rsp+A0h] [rbp-78h] BYREF
  int v26; // [rsp+A4h] [rbp-74h] BYREF
  int v27; // [rsp+A8h] [rbp-70h] BYREF
  char v28; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v29; // [rsp+B1h] [rbp-67h]
  __int64 v30; // [rsp+B9h] [rbp-5Fh]
  __int64 v31; // [rsp+C1h] [rbp-57h]
  int v32; // [rsp+C9h] [rbp-4Fh]
  __int16 v33; // [rsp+CDh] [rbp-4Bh]
  char v34; // [rsp+CFh] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-48h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-20h] BYREF
  char *v38; // [rsp+118h] [rbp+0h]
  __int64 v39; // [rsp+120h] [rbp+8h]
  __int128 *v40; // [rsp+128h] [rbp+10h]
  __int64 v41; // [rsp+130h] [rbp+18h]
  __int64 v42; // [rsp+138h] [rbp+20h]
  __int64 v43; // [rsp+140h] [rbp+28h]
  int *v44; // [rsp+148h] [rbp+30h]
  __int64 v45; // [rsp+150h] [rbp+38h]
  char *v46; // [rsp+158h] [rbp+40h]
  __int64 v47; // [rsp+160h] [rbp+48h]
  char *v48; // [rsp+168h] [rbp+50h]
  __int64 v49; // [rsp+170h] [rbp+58h]
  char *v50; // [rsp+178h] [rbp+60h]
  __int64 v51; // [rsp+180h] [rbp+68h]
  int *v52; // [rsp+188h] [rbp+70h]
  __int64 v53; // [rsp+190h] [rbp+78h]
  int *v54; // [rsp+198h] [rbp+80h]
  __int64 v55; // [rsp+1A0h] [rbp+88h]
  int *v56; // [rsp+1A8h] [rbp+90h]
  __int64 v57; // [rsp+1B0h] [rbp+98h]
  _QWORD *v58; // [rsp+1B8h] [rbp+A0h]
  __int64 v59; // [rsp+1C0h] [rbp+A8h]
  __int64 v60; // [rsp+1C8h] [rbp+B0h]
  _QWORD v61[4]; // [rsp+1D0h] [rbp+B8h] BYREF
  _DWORD v62[2]; // [rsp+1F0h] [rbp+D8h] BYREF
  _DWORD *v63; // [rsp+1F8h] [rbp+E0h]
  __int64 v64; // [rsp+200h] [rbp+E8h]
  __int64 v65; // [rsp+208h] [rbp+F0h]
  _DWORD v66[2]; // [rsp+210h] [rbp+F8h] BYREF

  result = 0LL;
  v2 = (_WORD *)(a1 + 1800);
  v3 = -1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v36 = 0uLL;
  if ( *(_DWORD *)(a1 + 1800) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v36 = *(_OWORD *)(v6 + 5412);
      v3 = *(_DWORD *)(v6 + 56);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1792), &LockHandle);
    v7 = *v2 - 1;
    if ( v7 >= 0xAu )
      v7 = 10;
    for ( i = 0; i < 5u; i += v14 )
    {
      v28 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v9 = StorpAreTelemetryErrorsEqual((_BYTE *)(32LL * i + a1 + 2160), &v28);
      if ( v9 == v14 )
        break;
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x20000000) != 0 )
      {
        Template_qcccqccccccqxq(
          32 * (v12 + 68),
          v10,
          v11,
          v3,
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          *(_DWORD *)(v11 + a1 + 2172),
          *(_BYTE *)(v11 + a1 + 2165),
          *(_BYTE *)(v13 + 2160),
          *(_BYTE *)(v11 + a1 + 2161),
          *(_BYTE *)(v11 + a1 + 2162),
          *(_BYTE *)(v11 + a1 + 2163),
          *(_BYTE *)(v11 + a1 + 2164),
          *(_DWORD *)(v11 + a1 + 2168),
          *(_QWORD *)(32 * (v12 + 68) + a1),
          *(_DWORD *)(v11 + a1 + 2184));
        v14 = 1;
      }
    }
    v15 = (const struct _TlgProvider_t *)*(unsigned int *)v2;
    if ( (unsigned int)v15 > 0xB )
      v5 = i;
    if ( (unsigned int)dword_1C0044050 > 5 )
    {
      if ( TlgKeywordOn(v15, 0x400000000000uLL) )
      {
        v20 = *(_BYTE *)(a1 + 88);
        v21 = *(_BYTE *)(a1 + 89);
        v23 = *(_BYTE *)(a1 + 90);
        v27 = v7;
        v25 = v5;
        v38 = &v22;
        v40 = &v36;
        v42 = a1 + 1672;
        v44 = &v26;
        v46 = &v20;
        v48 = &v21;
        v50 = &v23;
        v52 = &v24;
        v54 = &v27;
        v56 = &v25;
        v58 = v61;
        v60 = a1 + 1808;
        v61[1] = v62;
        v61[3] = a1 + 1840;
        v62[0] = (unsigned __int16)(32 * v7);
        v63 = v66;
        v65 = a1 + 2160;
        v66[0] = (unsigned __int16)(32 * v5);
        v22 = v19;
        v26 = v3;
        v24 = (int)v16;
        v39 = 1LL;
        v41 = 16LL;
        v43 = 16LL;
        v45 = 4LL;
        v47 = 1LL;
        v49 = 1LL;
        v51 = 1LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 2LL;
        v61[0] = 32LL;
        v61[2] = 2LL;
        v62[1] = 0;
        v64 = 2LL;
        v66[1] = 0;
        TlgWrite(v16, &unk_1C003E303, v17, v18, 0x12u, &pData);
      }
    }
    memset(v2, 0, 0x168uLL);
    memset((void *)(a1 + 2160), 0, 0xA0uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
