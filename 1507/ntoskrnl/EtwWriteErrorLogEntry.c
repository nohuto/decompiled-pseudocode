/*
 * XREFs of EtwWriteErrorLogEntry @ 0x14057C26C
 * Callers:
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall EtwWriteErrorLogEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8)
{
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned __int16 v12; // r14
  unsigned __int16 v13; // si
  __int64 v14; // rcx
  int v15; // eax
  char v16; // al
  __int16 v17; // ax
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned __int16 v20; // cx
  unsigned int v21; // edx
  unsigned int v22; // r10d
  unsigned __int16 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 v29; // rax
  unsigned int v30; // edi
  __int64 v31; // rax
  __int64 result; // rax
  unsigned __int64 v33; // r8
  _WORD *v34; // rcx
  __int64 v35; // rcx
  unsigned __int16 v36; // [rsp+98h] [rbp-80h] BYREF
  __int16 v37; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v38; // [rsp+A0h] [rbp-78h] BYREF
  int v39; // [rsp+A8h] [rbp-70h] BYREF
  char v40; // [rsp+ACh] [rbp-6Ch]
  char v41; // [rsp+ADh] [rbp-6Bh]
  __int16 v42; // [rsp+AEh] [rbp-6Ah]
  __int64 v43; // [rsp+B0h] [rbp-68h]
  int v44; // [rsp+B8h] [rbp-60h]
  _QWORD v45[48]; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v46; // [rsp+248h] [rbp+130h] BYREF
  _QWORD v47[6]; // [rsp+250h] [rbp+138h]
  int v48; // [rsp+280h] [rbp+168h]
  int v49; // [rsp+284h] [rbp+16Ch]
  unsigned __int16 *v50; // [rsp+288h] [rbp+170h]
  __int64 v51; // [rsp+290h] [rbp+178h]
  __int64 v52; // [rsp+298h] [rbp+180h]
  int v53; // [rsp+2A0h] [rbp+188h]
  int v54; // [rsp+2A4h] [rbp+18Ch]

  v8 = (unsigned __int16)IopErrorLogSession;
  v9 = a3;
  v44 = (unsigned __int16)IopErrorLogSession;
  v12 = 0;
  v13 = 0;
  ExAcquireRundownProtectionCacheAwareEx(
    (PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[(unsigned __int16)IopErrorLogSession],
    1u);
  if ( (unsigned int)v8 >= 0x40 )
    v14 = 1LL;
  else
    v14 = WmipLoggerContext[v8];
  if ( (v14 & 1) != 0 || !PsEqualCurrentServerSilo(*(_QWORD *)(v14 + 912)) )
  {
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v8], 1u);
    return 3221225569LL;
  }
  else
  {
    ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v8], 1u);
    v15 = *(_DWORD *)(a2 + 12) >> 30;
    if ( v15 == 1 )
      v16 = 4;
    else
      v16 = (v15 == 2) + 2;
    v40 = v16;
    v17 = *(_WORD *)(a2 + 8);
    v46 = a4;
    v42 = v17;
    v18 = -1LL;
    v47[1] = a2 + 12;
    v39 = 0;
    v41 = 0;
    v43 = 0LL;
    v47[0] = 8LL;
    v47[2] = 4LL;
    do
      ++v18;
    while ( *(_WORD *)(a5 + 2 * v18) );
    v47[5] = a5;
    v37 = v18 + 1;
    v19 = 5;
    v47[3] = &v37;
    v48 = 2 * (unsigned __int16)(v18 + 1);
    v50 = &a7;
    v47[4] = 2LL;
    v49 = 0;
    v51 = 2LL;
    if ( a7 )
    {
      v19 = 6;
      v52 = a8;
      v53 = a7;
      v54 = 0;
    }
    v20 = *(_WORD *)(a2 + 4);
    v21 = *(unsigned __int16 *)(a2 + 2) + 40;
    if ( v21 > (unsigned int)v9 )
      v21 = v9;
    v38 = v21;
    if ( v20 && *(unsigned __int16 *)(a2 + 6) < v21 )
      *(_WORD *)(a2 + 6) = v21;
    v22 = v20;
    v23 = 0;
    v24 = 2LL * v19;
    *(_WORD *)(a2 + 4) = v20 + 1;
    v36 = 0;
    v25 = v19 + 1;
    v47[v24 - 1] = &v36;
    v47[v24] = 2LL;
    v26 = 2LL * v25;
    v27 = -1LL;
    v47[2 * v25 - 1] = a6;
    do
      ++v27;
    while ( *(_WORD *)(a6 + 2 * v27) );
    HIDWORD(v47[2 * v25]) = 0;
    v28 = v25 + 1;
    LODWORD(v47[v26]) = 2 * (unsigned __int16)(v27 + 1);
    if ( v22 )
    {
      v33 = (*(unsigned __int16 *)(a2 + 6) + a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      do
      {
        v34 = (_WORD *)(v33 + 2LL * v13);
        if ( (unsigned __int64)v34 >= a2 + v9 )
          break;
        if ( !*v34 )
        {
          ++v23;
          v12 = v13 + 1;
          v36 = v23;
        }
        ++v13;
      }
      while ( v23 < v22 );
      LOWORD(v8) = v44;
      v35 = 2LL * v28++;
      v47[v35 - 1] = v33;
      LODWORD(v47[v35]) = 2 * v12;
      HIDWORD(v47[v35]) = 0;
    }
    v29 = 2LL * v28;
    v30 = v28 + 1;
    v36 = v23 + 1;
    v47[v29 - 1] = &v38;
    v47[v29] = 4LL;
    v31 = 2LL * v30;
    LODWORD(v47[v31]) = v21;
    v47[v31 - 1] = a2;
    HIDWORD(v47[v31]) = 0;
    memset(v45, 0, sizeof(v45));
    v45[16] = -1LL;
    *(GUID *)&v45[3] = LegacyEventLogGuid;
    HIWORD(v45[14]) = v8;
    LODWORD(v45[14]) = 1;
    BYTE4(v45[14]) = -1;
    v45[17] = 0LL;
    LODWORD(v45[15]) = 64;
    result = EtwpEventWriteFull(
               (__int64)v45,
               1u,
               0LL,
               0,
               (unsigned __int16 *)&v39,
               0,
               4,
               0LL,
               0LL,
               v30 + 1,
               (__int64)&v46,
               0LL,
               0LL,
               0LL,
               0,
               0LL,
               0LL);
    if ( (int)result < 0 )
      --*(_WORD *)(a2 + 4);
  }
  return result;
}
