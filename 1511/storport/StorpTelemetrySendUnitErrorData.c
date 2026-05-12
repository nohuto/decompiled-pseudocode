/*
 * XREFs of StorpTelemetrySendUnitErrorData @ 0x1C003A7D8
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C00393B0 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     StorpAreTelemetryErrorsEqual @ 0x1C0038398 (StorpAreTelemetryErrorsEqual.c)
 *     Template_qcccjqqccccccqqxq @ 0x1C003BD78 (Template_qcccjqqccccccqqxq.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r9
  char v15; // [rsp+A8h] [rbp-80h] BYREF
  char v16; // [rsp+A9h] [rbp-7Fh] BYREF
  char v17; // [rsp+AAh] [rbp-7Eh] BYREF
  char v18; // [rsp+ABh] [rbp-7Dh] BYREF
  int v19; // [rsp+ACh] [rbp-7Ch] BYREF
  int v20; // [rsp+B0h] [rbp-78h] BYREF
  int v21; // [rsp+B4h] [rbp-74h] BYREF
  int v22; // [rsp+B8h] [rbp-70h] BYREF
  int v23; // [rsp+BCh] [rbp-6Ch] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-68h] BYREF
  _BYTE v25[40]; // [rsp+D8h] [rbp-50h] BYREF
  __int128 v26; // [rsp+100h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp-10h] BYREF
  char *v28; // [rsp+138h] [rbp+10h]
  __int64 v29; // [rsp+140h] [rbp+18h]
  __int128 *v30; // [rsp+148h] [rbp+20h]
  __int64 v31; // [rsp+150h] [rbp+28h]
  __int64 v32; // [rsp+158h] [rbp+30h]
  __int64 v33; // [rsp+160h] [rbp+38h]
  int *v34; // [rsp+168h] [rbp+40h]
  __int64 v35; // [rsp+170h] [rbp+48h]
  char *v36; // [rsp+178h] [rbp+50h]
  __int64 v37; // [rsp+180h] [rbp+58h]
  char *v38; // [rsp+188h] [rbp+60h]
  __int64 v39; // [rsp+190h] [rbp+68h]
  char *v40; // [rsp+198h] [rbp+70h]
  __int64 v41; // [rsp+1A0h] [rbp+78h]
  int *v42; // [rsp+1A8h] [rbp+80h]
  __int64 v43; // [rsp+1B0h] [rbp+88h]
  int *v44; // [rsp+1B8h] [rbp+90h]
  __int64 v45; // [rsp+1C0h] [rbp+98h]
  int *v46; // [rsp+1C8h] [rbp+A0h]
  __int64 v47; // [rsp+1D0h] [rbp+A8h]
  int *v48; // [rsp+1D8h] [rbp+B0h]
  __int64 v49; // [rsp+1E0h] [rbp+B8h]
  _QWORD *v50; // [rsp+1E8h] [rbp+C0h]
  __int64 v51; // [rsp+1F0h] [rbp+C8h]
  __int64 v52; // [rsp+1F8h] [rbp+D0h]
  _QWORD v53[4]; // [rsp+200h] [rbp+D8h] BYREF
  _DWORD v54[2]; // [rsp+220h] [rbp+F8h] BYREF
  _DWORD *v55; // [rsp+228h] [rbp+100h]
  __int64 v56; // [rsp+230h] [rbp+108h]
  __int64 v57; // [rsp+238h] [rbp+110h]
  _DWORD v58[2]; // [rsp+240h] [rbp+118h] BYREF

  result = 0LL;
  v2 = (_WORD *)(a1 + 1864);
  v3 = -1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v26 = 0uLL;
  if ( *(_DWORD *)(a1 + 1864) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v26 = *(_OWORD *)(v6 + 5192);
      v3 = *(_DWORD *)(v6 + 56);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
    v7 = *v2 - 1;
    if ( v7 >= 0xAu )
      v7 = 10;
    for ( i = 0; i < 5u; ++i )
    {
      memset(v25, 0, sizeof(v25));
      if ( StorpAreTelemetryErrorsEqual((_BYTE *)(a1 + 40LL * i + 2312), v25) )
        break;
      if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 2) != 0 )
        Template_qcccjqqccccccqqxq(
          5 * v10,
          a1 + 1688,
          v9,
          v3,
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          a1 + 1688,
          *(_DWORD *)(a1 + 8 * v9 + 2324),
          *(_DWORD *)(a1 + 8 * v9 + 2328),
          *(_BYTE *)(a1 + 8 * v9 + 2317),
          *(_BYTE *)(v11 + 2312),
          *(_BYTE *)(a1 + 8 * v9 + 2313),
          *(_BYTE *)(a1 + 8 * v9 + 2314),
          *(_BYTE *)(a1 + 8 * v9 + 2315),
          *(_BYTE *)(a1 + 8 * v9 + 2316),
          *(_DWORD *)(a1 + 40 * v10 + 2320),
          *(_DWORD *)(a1 + 8 * v9 + 2332),
          *(_QWORD *)(a1 + 8 * v9 + 2336),
          *(_DWORD *)(a1 + 8 * v9 + 2344));
    }
    v12 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 1864);
    if ( (unsigned int)v12 > 0xB )
      v5 = i;
    if ( (unsigned int)dword_1C0048030 > 5 )
    {
      if ( TlgKeywordOn(v12, 0x400000000000uLL) )
      {
        v15 = *(_BYTE *)(a1 + 88);
        v16 = *(_BYTE *)(a1 + 89);
        v18 = *(_BYTE *)(a1 + 90);
        v19 = *(_DWORD *)(a1 + 1816);
        v22 = v7;
        v20 = v5;
        v28 = &v17;
        v30 = &v26;
        v32 = a1 + 1688;
        v34 = &v23;
        v36 = &v15;
        v38 = &v16;
        v40 = &v18;
        v42 = &v21;
        v44 = &v19;
        v46 = &v22;
        v48 = &v20;
        v50 = v53;
        v52 = a1 + 1872;
        v53[1] = v54;
        v53[3] = a1 + 1912;
        v17 = 2;
        v54[0] = (unsigned __int16)(40 * v7);
        v55 = v58;
        v57 = a1 + 2312;
        v23 = v3;
        v58[0] = (unsigned __int16)(40 * v5);
        v21 = (int)v13;
        v29 = 1LL;
        v31 = 16LL;
        v33 = 16LL;
        v35 = 4LL;
        v37 = 1LL;
        v39 = 1LL;
        v41 = 1LL;
        v43 = 4LL;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 2LL;
        v53[0] = 40LL;
        v53[2] = 2LL;
        v54[1] = 0;
        v56 = 2LL;
        v58[1] = 0;
        TlgWrite(v13, &unk_1C00414B3, (LPCGUID)2, v14, 0x13u, &pData);
      }
    }
    memset((void *)(a1 + 1864), 0, 0x1C0uLL);
    memset((void *)(a1 + 2312), 0, 0xC8uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
