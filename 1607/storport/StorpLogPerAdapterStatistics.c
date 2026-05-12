/*
 * XREFs of StorpLogPerAdapterStatistics @ 0x1C003CC34
 * Callers:
 *     StorpLogStatistics @ 0x1C003D964 (StorpLogStatistics.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00022A8 (RaidAcquireAdapterRemoveLock.c)
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C001582C (StorpInitializeHierarchicalResetBuckets.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

void __fastcall StorpLogPerAdapterStatistics(__int64 a1)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  struct _IO_WORKITEM *WorkItem; // rax
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+31h] [rbp-CFh] BYREF
  char v13; // [rsp+32h] [rbp-CEh] BYREF
  char v14; // [rsp+33h] [rbp-CDh] BYREF
  _BYTE v15[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD v26[4]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  char *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  int *v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  char *v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  int *v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  int *v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  char *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]

  v2 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 5212);
  if ( ((_DWORD)v2
     || *(_DWORD *)(a1 + 5224)
     || *(_DWORD *)(a1 + 5236)
     || *(_DWORD *)(a1 + 5248)
     || *(_DWORD *)(a1 + 5260))
    && (unsigned int)dword_1C004F010 > 5
    && TlgKeywordOn(v2, 0x400000000000uLL) )
  {
    v16 = *(_DWORD *)(a1 + 56);
    v18 = *(_DWORD *)(a1 + 5216);
    v11 = *(_BYTE *)(a1 + 5220);
    v19 = *(_DWORD *)(a1 + 5224);
    v20 = *(_DWORD *)(a1 + 5228);
    v12 = *(_BYTE *)(a1 + 5232);
    v21 = *(_DWORD *)(a1 + 5236);
    v22 = *(_DWORD *)(a1 + 5240);
    v13 = *(_BYTE *)(a1 + 5244);
    v23 = *(_DWORD *)(a1 + 5248);
    v24 = *(_DWORD *)(a1 + 5252);
    v14 = *(_BYTE *)(a1 + 5256);
    v25 = *(_DWORD *)(a1 + 5260);
    v26[0] = *(_DWORD *)(a1 + 5264);
    v15[0] = *(_BYTE *)(a1 + 5268);
    v28 = a1 + 5192;
    v30 = &v16;
    v32 = &v17;
    v34 = &v18;
    v36 = &v11;
    v38 = &v19;
    v40 = &v20;
    v42 = &v12;
    v44 = &v21;
    v46 = &v22;
    v48 = &v13;
    v50 = &v23;
    v52 = &v24;
    v54 = &v14;
    v56 = &v25;
    v58 = v26;
    v60 = v15;
    v17 = (int)v3;
    v29 = 16LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 1LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 1LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 1LL;
    TlgWrite(v3, &unk_1C0047C70, v4, v5, 0x13u, &pData);
  }
  v6 = (const struct _TlgProvider_t *)*(unsigned int *)(a1 + 5272);
  if ( ((_DWORD)v6
     || *(_DWORD *)(a1 + 5284)
     || *(_DWORD *)(a1 + 5296)
     || *(_DWORD *)(a1 + 5308)
     || *(_DWORD *)(a1 + 5320))
    && (unsigned int)dword_1C004F010 > 5
    && TlgKeywordOn(v6, 0x400000000000uLL) )
  {
    v26[0] = *(_DWORD *)(a1 + 56);
    v24 = *(_DWORD *)(a1 + 5276);
    v15[0] = *(_BYTE *)(a1 + 5280);
    v23 = *(_DWORD *)(a1 + 5284);
    v22 = *(_DWORD *)(a1 + 5288);
    v14 = *(_BYTE *)(a1 + 5292);
    v21 = *(_DWORD *)(a1 + 5296);
    v20 = *(_DWORD *)(a1 + 5300);
    v13 = *(_BYTE *)(a1 + 5304);
    v19 = *(_DWORD *)(a1 + 5308);
    v18 = *(_DWORD *)(a1 + 5312);
    v12 = *(_BYTE *)(a1 + 5316);
    v17 = *(_DWORD *)(a1 + 5320);
    v16 = *(_DWORD *)(a1 + 5324);
    v11 = *(_BYTE *)(a1 + 5328);
    v28 = a1 + 5192;
    v30 = v26;
    v32 = &v25;
    v34 = &v24;
    v36 = v15;
    v38 = &v23;
    v40 = &v22;
    v42 = &v14;
    v44 = &v21;
    v46 = &v20;
    v48 = &v13;
    v50 = &v19;
    v52 = &v18;
    v54 = &v12;
    v56 = &v17;
    v58 = &v16;
    v60 = &v11;
    v25 = (int)v7;
    v29 = 16LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 1LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 1LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 1LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 1LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 1LL;
    TlgWrite(v7, &unk_1C00485EA, v8, v9, 0x13u, &pData);
  }
  StorpInitializeHierarchicalResetBuckets(a1);
  if ( !*(_BYTE *)(a1 + 5436) && (int)RaidAcquireAdapterRemoveLock(a1) >= 0 )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
    if ( WorkItem )
      IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)StorpAdapterTopologyWorkItemRoutine, NormalWorkQueue, WorkItem);
    else
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
  }
}
