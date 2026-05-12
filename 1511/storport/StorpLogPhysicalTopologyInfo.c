/*
 * XREFs of StorpLogPhysicalTopologyInfo @ 0x1C0039458
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C00262D0 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C000B288 (RaidDriverGetName.c)
 *     RtlStringCchPrintfW @ 0x1C000C774 (RtlStringCchPrintfW.c)
 *     _TlgKeywordOn @ 0x1C0011B18 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0014C54 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0014CF0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     _TlgCreateSz @ 0x1C003C064 (_TlgCreateSz.c)
 */

char __fastcall StorpLogPhysicalTopologyInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r15
  int v6; // ebx
  int v7; // esi
  const struct _TlgProvider_t *v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned int v16; // r14d
  _DWORD *v17; // rbx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // esi
  char *v21; // rcx
  __int128 v22; // xmm1
  int *v23; // rcx
  TraceLoggingHProvider v24; // rcx
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  const struct _TlgProvider_t *v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // r9
  __int128 v32; // xmm1
  __int64 v33; // r9
  LPCGUID v34; // r8
  LPCGUID v35; // r9
  int v37; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh] BYREF
  struct _TlgProvider_t hProvider; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  int *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  struct _TlgProvider_t *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  struct _TlgProvider_t *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+F0h] [rbp-10h] BYREF
  char *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  unsigned __int64 *p_KeywordAny; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  __int128 psz; // [rsp+130h] [rbp+30h] BYREF
  CHAR v60[24]; // [rsp+140h] [rbp+40h] BYREF
  CHAR v61[56]; // [rsp+158h] [rbp+58h] BYREF
  wchar_t pszDest[32]; // [rsp+190h] [rbp+90h] BYREF

  v3 = a3;
  psz = 0uLL;
  memset(pszDest, 0, sizeof(pszDest));
  v6 = 0;
  v7 = 0;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)&psz);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"%s", *((_QWORD *)&psz + 1));
  v8 = (const struct _TlgProvider_t *)*(unsigned int *)(a2 + 8);
  if ( v3 >= 40 * (__int64)v8 + 16 && (_DWORD)v8 )
  {
    v9 = (_DWORD *)(a2 + 32);
    v10 = (unsigned int)v8;
    do
    {
      v6 += *(v9 - 3);
      v7 += *v9;
      v9 += 10;
      --v10;
    }
    while ( v10 );
  }
  if ( (unsigned int)dword_1C0048030 > 5 && TlgKeywordOn(v8, 0x400000000000uLL) )
  {
    hProvider.LevelPlus1 = v11;
    hProvider.AnnotationFunc = (void (*)(...))(a1 + 5192);
    v37 = v6;
    v38 = v7;
    v40 = 16LL;
    TlgCreateWsz(&pDesc, pszDest);
    v43 = 4LL;
    v44 = &v37;
    p_hProvider = &hProvider;
    v46 = (struct _TlgProvider_t *)&v38;
    v45 = 4LL;
    v47 = 4LL;
    TlgWrite(&hProvider, &unk_1C0041134, v12, v13, 7u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
  }
  v14 = *(unsigned int *)(a2 + 8);
  v15 = 40 * v14 + 16;
  if ( v3 >= v15 )
  {
    LOBYTE(psz) = 0;
    *(_QWORD *)((char *)&psz + 1) = 0LL;
    memset(v61, 0, 41);
    LOBYTE(v15) = 0;
    memset(v60, 0, 17);
    v16 = 0;
    if ( (_DWORD)v14 )
    {
      do
      {
        LOBYTE(v15) = v16;
        v17 = (_DWORD *)(a2 + 8 * (v16 + 4LL * v16 + 2));
        v18 = v17[1];
        if ( v18 )
        {
          v19 = v17[3];
          if ( v19 >= 0x28 )
          {
            v15 = (unsigned int)v17[2];
            if ( v15 >= (unsigned __int64)v18 << 7 )
            {
              LODWORD(v15) = 8 * (v16 + 4 * v16 + 2) + v19 + (v18 << 7);
              if ( (unsigned int)v15 <= (unsigned int)v3 )
              {
                v20 = 0;
                do
                {
                  v21 = (char *)v17 + (unsigned int)v17[3];
                  v15 = *((_QWORD *)v21 + 2);
                  *(_QWORD *)&psz = v15;
                  BYTE8(psz) = 0;
                  *(_OWORD *)v61 = *(_OWORD *)(v21 + 24);
                  *(_OWORD *)&v61[16] = *(_OWORD *)(v21 + 40);
                  *(_QWORD *)&v61[32] = *((_QWORD *)v21 + 7);
                  v61[40] = 0;
                  v22 = *((_OWORD *)v21 + 4);
                  v60[16] = 0;
                  *(_OWORD *)v60 = v22;
                  if ( (unsigned int)dword_1C0048030 > 5 )
                  {
                    LOBYTE(v15) = TlgKeywordOn((TraceLoggingHProvider)v21, 0x400000000000uLL);
                    if ( (_BYTE)v15 )
                    {
                      v38 = *v23;
                      v37 = v23[1];
                      hProvider.LevelPlus1 = v23[2];
                      *(&hProvider.LevelPlus1 + 1) = v23[3];
                      hProvider.AnnotationFunc = (void (*)(...))(a1 + 5192);
                      v40 = 16LL;
                      TlgCreateWsz(&pDesc, pszDest);
                      v43 = 4LL;
                      v44 = &v37;
                      p_hProvider = (struct _TlgProvider_t *)&v38;
                      v46 = &hProvider;
                      v45 = 4LL;
                      v48 = (struct _TlgProvider_t *)(&hProvider.LevelPlus1 + 1);
                      v47 = 4LL;
                      v49 = 4LL;
                      TlgCreateSz(&v50, (LPCSTR)&psz);
                      TlgCreateSz(&v51, v61);
                      TlgCreateSz(&v52, v60);
                      LOBYTE(v15) = TlgWrite(
                                      v24,
                                      &unk_1C0041413,
                                      v25,
                                      v26,
                                      0xBu,
                                      (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
                    }
                  }
                  ++v20;
                }
                while ( v20 < v17[1] );
              }
            }
          }
        }
        v27 = (unsigned int)v17[4];
        if ( (_DWORD)v27 )
        {
          v28 = (unsigned int)v17[6];
          if ( (unsigned int)v28 >= 0x28 )
          {
            v15 = (unsigned int)v17[3];
            if ( v28 >= v15 + ((unsigned __int64)(unsigned int)v17[1] << 7) )
            {
              v15 = (unsigned int)v17[5];
              v29 = (const struct _TlgProvider_t *)(136 * v27);
              if ( v15 >= 136 * v27 )
              {
                LODWORD(v15) = 8 * (v16 + 4 * v16 + 2) + v28 + 136 * v27;
                if ( (unsigned int)v15 <= (unsigned int)v3 )
                {
                  v30 = 0;
                  do
                  {
                    v31 = (__int64)&v17[34 * v30] + (unsigned int)v17[6];
                    v15 = *(_QWORD *)(v31 + 24);
                    *(_QWORD *)&psz = v15;
                    BYTE8(psz) = 0;
                    *(_OWORD *)v61 = *(_OWORD *)(v31 + 32);
                    *(_OWORD *)&v61[16] = *(_OWORD *)(v31 + 48);
                    *(_QWORD *)&v61[32] = *(_QWORD *)(v31 + 64);
                    v61[40] = 0;
                    v32 = *(_OWORD *)(v31 + 72);
                    v60[16] = 0;
                    *(_OWORD *)v60 = v32;
                    if ( (unsigned int)dword_1C0048030 > 5 )
                    {
                      LOBYTE(v15) = TlgKeywordOn(v29, 0x400000000000uLL);
                      if ( (_BYTE)v15 )
                      {
                        *(&hProvider.LevelPlus1 + 1) = *(_DWORD *)v33;
                        v38 = *(_DWORD *)(v33 + 8);
                        v37 = *(_DWORD *)(v33 + 12);
                        hProvider.LevelPlus1 = *(_DWORD *)(v33 + 16);
                        HIDWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v33 + 4);
                        LODWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v33 + 20);
                        hProvider.KeywordAny = *(_QWORD *)(v33 + 88);
                        hProvider.AnnotationFunc = (void (*)(...))(a1 + 5192);
                        v40 = 16LL;
                        TlgCreateWsz(&pDesc, pszDest);
                        v43 = 4LL;
                        v44 = &v38;
                        p_hProvider = (struct _TlgProvider_t *)(&hProvider.LevelPlus1 + 1);
                        v46 = (struct _TlgProvider_t *)&v37;
                        v45 = 4LL;
                        v48 = &hProvider;
                        v47 = 4LL;
                        v49 = 4LL;
                        TlgCreateSz(&v50, (LPCSTR)&psz);
                        TlgCreateSz(&v51, v61);
                        TlgCreateSz(&v52, v60);
                        v54 = 4LL;
                        p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
                        v53 = (char *)&hProvider.ProviderMetadataPtr + 4;
                        p_KeywordAny = &hProvider.KeywordAny;
                        v56 = 4LL;
                        v58 = 8LL;
                        LOBYTE(v15) = TlgWrite(
                                        (TraceLoggingHProvider)((char *)&hProvider.ProviderMetadataPtr + 4),
                                        &unk_1C0041070,
                                        v34,
                                        v35,
                                        0xEu,
                                        (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAll);
                      }
                    }
                    ++v30;
                  }
                  while ( v30 < v17[4] );
                }
              }
            }
          }
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a2 + 8) );
    }
  }
  return v15;
}
