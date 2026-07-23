/*
 * XREFs of MiLogCommitRequestFailed @ 0x1401ECC60
 * Callers:
 *     MiCommitRequestFailed @ 0x1401ECC18 (MiCommitRequestFailed.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 *     EtwGetProcessAppSessionGuid @ 0x14054C480 (EtwGetProcessAppSessionGuid.c)
 *     PsQueryProcessPageFileQuota @ 0x140581F8C (PsQueryProcessPageFileQuota.c)
 *     PsQueryJobMemoryUsageByProcess @ 0x14068017C (PsQueryJobMemoryUsageByProcess.c)
 */

char __fastcall MiLogCommitRequestFailed(__int64 a1, __int64 a2, int a3)
{
  int *v3; // rax
  int v7; // ett
  __int64 v8; // r14
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // r9
  const struct _TlgProvider_t *v12; // r10
  __int64 v13; // r11
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+70h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-90h] BYREF
  __int64 v22; // [rsp+80h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v33[16]; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  __int64 *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  __int64 *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]
  __int64 *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h]
  __int64 *v43; // [rsp+148h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+48h]
  __int64 *v45; // [rsp+158h] [rbp+50h]
  __int64 v46; // [rsp+160h] [rbp+58h]
  __int64 *v47; // [rsp+168h] [rbp+60h]
  __int64 v48; // [rsp+170h] [rbp+68h]
  __int64 *v49; // [rsp+178h] [rbp+70h]
  __int64 v50; // [rsp+180h] [rbp+78h]
  __int64 *v51; // [rsp+188h] [rbp+80h]
  __int64 v52; // [rsp+190h] [rbp+88h]
  __int64 *v53; // [rsp+198h] [rbp+90h]
  __int64 v54; // [rsp+1A0h] [rbp+98h]
  __int64 *v55; // [rsp+1A8h] [rbp+A0h]
  __int64 v56; // [rsp+1B0h] [rbp+A8h]
  __int64 *v57; // [rsp+1B8h] [rbp+B0h]
  __int64 v58; // [rsp+1C0h] [rbp+B8h]
  __int64 *v59; // [rsp+1C8h] [rbp+C0h]
  __int64 v60; // [rsp+1D0h] [rbp+C8h]
  _UNKNOWN *retaddr; // [rsp+200h] [rbp+F8h] BYREF

  v3 = (int *)&retaddr;
  if ( qword_1403277E0 )
  {
    _m_prefetchw((const void *)(a1 + 1740));
    LODWORD(v3) = *(_DWORD *)(a1 + 1740);
    do
    {
      v7 = (int)v3;
      LODWORD(v3) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(a1 + 1740),
                      (unsigned int)v3 | 0x200000,
                      (signed __int32)v3);
    }
    while ( v7 != (_DWORD)v3 );
    if ( ((unsigned int)v3 & 0x200000) == 0 )
    {
      EtwGetProcessAppSessionGuid(a1, v33);
      PsQueryProcessPageFileQuota(a1, &v16, &v17);
      v8 = *(_QWORD *)(a1 + 1264);
      PsQueryJobMemoryUsageByProcess(v9, (unsigned int)&v18, (unsigned int)&v19, (unsigned int)&v20, (__int64)&v21);
      v3 = MiPartitionIdToPointer(*(_WORD *)(a1 + 1444));
      v10 = *((_QWORD *)v3 + 901);
      if ( qword_1403277E0->LevelPlus1 > 5 )
      {
        LOBYTE(v3) = TlgKeywordOn(qword_1403277E0, 0x400000000000uLL);
        if ( (_BYTE)v3 )
        {
          v23 = v16;
          v24 = v17;
          v27 = v18;
          v28 = v19;
          v29 = v20;
          v30 = v21;
          v35 = v33;
          v37 = &v22;
          v39 = &v15;
          v41 = &v23;
          v43 = &v24;
          v45 = &v25;
          v47 = &v26;
          v49 = &v27;
          v51 = &v28;
          v53 = &v29;
          v55 = &v30;
          v57 = &v31;
          v59 = &v32;
          v22 = a2;
          LODWORD(v15) = a3;
          v25 = v13;
          v26 = v8;
          v31 = v11;
          v32 = v10;
          v36 = 16LL;
          v38 = 8LL;
          v40 = 4LL;
          v42 = 8LL;
          v44 = 8LL;
          v46 = 8LL;
          v48 = 8LL;
          v50 = 8LL;
          v52 = 8LL;
          v54 = 8LL;
          v56 = 8LL;
          v58 = 8LL;
          v60 = 8LL;
          LOBYTE(v3) = TlgWriteEx(v12, &unk_14027C7D1, 0LL, 1u, 0LL, 0LL, 0xFu, &pData);
        }
      }
    }
  }
  return (char)v3;
}
