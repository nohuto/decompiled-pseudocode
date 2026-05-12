/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00408B4
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C003CBE0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0014C64 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0018D00 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0019BC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     Template_qcccjqqb @ 0x1C0042144 (Template_qcccjqqb.c)
 *     _TlgCreateSz @ 0x1C0042814 (_TlgCreateSz.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *OutputBuffer; // rdi
  _DWORD *v4; // rsi
  PIRP v5; // rax
  NTSTATUS KeywordAny; // eax
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // r14
  const struct _TlgProvider_t *v11; // rcx
  __int64 v12; // rcx
  const WCHAR *v13; // rdx
  const GUID *v14; // r8
  const GUID *v15; // r9
  struct _TlgProvider_t *p_hProvider; // rcx
  void (**p_AnnotationFunc)(...); // rax
  const void *v18; // rdx
  __int64 v19; // rcx
  const WCHAR *v20; // rdx
  char v21; // [rsp+60h] [rbp-A0h] BYREF
  char v22; // [rsp+61h] [rbp-9Fh] BYREF
  char v23; // [rsp+62h] [rbp-9Eh] BYREF
  char v24; // [rsp+63h] [rbp-9Dh] BYREF
  char v25; // [rsp+64h] [rbp-9Ch] BYREF
  char v26; // [rsp+65h] [rbp-9Bh] BYREF
  char v27; // [rsp+66h] [rbp-9Ah] BYREF
  char v28; // [rsp+67h] [rbp-99h] BYREF
  struct _TlgProvider_t hProvider; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  unsigned int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  char *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  char *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+140h] [rbp+40h] BYREF
  char *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  char *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  __int64 *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  char *v51; // [rsp+180h] [rbp+80h]
  __int64 v52; // [rsp+188h] [rbp+88h] BYREF
  char v53; // [rsp+190h] [rbp+90h] BYREF
  __int64 v54; // [rsp+1B0h] [rbp+B0h]
  __int64 v55; // [rsp+1B8h] [rbp+B8h]
  __int64 v56; // [rsp+1C0h] [rbp+C0h]
  __int64 v57; // [rsp+1C8h] [rbp+C8h]
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+1D0h] [rbp+D0h]
  __int64 v59; // [rsp+1D8h] [rbp+D8h]
  char *v60; // [rsp+1E0h] [rbp+E0h]
  __int64 v61; // [rsp+1E8h] [rbp+E8h]
  char *v62; // [rsp+1F0h] [rbp+F0h]
  __int64 v63; // [rsp+1F8h] [rbp+F8h]
  char *v64; // [rsp+200h] [rbp+100h]
  __int64 v65; // [rsp+208h] [rbp+108h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+220h] [rbp+120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+230h] [rbp+130h] BYREF
  struct _TlgProvider_t *v69; // [rsp+240h] [rbp+140h]
  __int64 v70; // [rsp+248h] [rbp+148h]
  char *v71; // [rsp+250h] [rbp+150h]
  __int64 v72; // [rsp+258h] [rbp+158h]
  __int64 *v73; // [rsp+260h] [rbp+160h]
  __int64 v74; // [rsp+268h] [rbp+168h]
  char *v75; // [rsp+270h] [rbp+170h]
  __int64 v76; // [rsp+278h] [rbp+178h] BYREF
  CHAR psz[16]; // [rsp+280h] [rbp+180h] BYREF
  CHAR v78[24]; // [rsp+290h] [rbp+190h] BYREF

  memset(&hProvider.KeywordAny, 0, 40);
  memset(psz, 0, 9);
  memset(v78, 0, 17);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  OutputBuffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x230uLL);
    *(_QWORD *)OutputBuffer = 50LL;
    v4 = OutputBuffer + 2;
    OutputBuffer[2] = 3;
    OutputBuffer[3] = 2;
    *((_QWORD *)OutputBuffer + 2) = 2LL;
    OutputBuffer[6] = 40;
    OutputBuffer[7] = 512;
    KeInitializeEvent((PRKEVENT)&hProvider.RegHandle, NotificationEvent, 0);
    v5 = IoBuildDeviceIoControlRequest(
           0x2D1400u,
           *(PDEVICE_OBJECT *)(a1 + 8),
           OutputBuffer,
           0x230u,
           OutputBuffer,
           0x230u,
           0,
           (PKEVENT)&hProvider.RegHandle,
           (PIO_STATUS_BLOCK)&hProvider.KeywordAny);
    if ( !v5 )
      goto LABEL_25;
    v5->IoStatus.Status = -1073741637;
    KeywordAny = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 8), v5);
    if ( KeywordAny == 259 )
    {
      KeWaitForSingleObject(&hProvider.RegHandle, Executive, 0, 0, 0LL);
      KeywordAny = hProvider.KeywordAny;
    }
    if ( KeywordAny < 0 )
      goto LABEL_25;
    if ( *OutputBuffer != 48 )
      goto LABEL_25;
    if ( OutputBuffer[1] != 48 )
      goto LABEL_25;
    v8 = (unsigned int)OutputBuffer[6];
    if ( (unsigned int)v8 < 0x28 || OutputBuffer[7] < 0x200u )
      goto LABEL_25;
    v9 = *(_QWORD *)(a1 + 96);
    v10 = (char *)v4 + v8;
    *(_BYTE *)(a1 + 1706) = *((_BYTE *)v4 + v8);
    if ( v9 )
    {
      *(_QWORD *)psz = *(_QWORD *)(v9 + 8);
      *(_OWORD *)v78 = *(_OWORD *)(v9 + 16);
    }
    v11 = (const struct _TlgProvider_t *)*(unsigned __int8 *)(a1 + 1704);
    if ( (unsigned int)v11 < g_StorpTraceLoggingCriticalEventMaximum
      && (*(_BYTE *)(a1 + 1705) || *(_BYTE *)(a1 + 1706) || (*(_BYTE *)(a1 + 154) & 2) != 0) )
    {
      LOBYTE(v11) = (_BYTE)v11 + 1;
      *(_BYTE *)(a1 + 1704) = (_BYTE)v11;
      if ( (unsigned int)dword_1C004F010 <= 5 || !TlgKeywordOn(v11, 0x800000000000uLL) )
        goto LABEL_23;
      v12 = *(_QWORD *)(a1 + 24);
      *(&hProvider.LevelPlus1 + 1) = *(_DWORD *)(v12 + 56);
      v21 = *(_BYTE *)(a1 + 88);
      v22 = *(_BYTE *)(a1 + 89);
      v23 = *(_BYTE *)(a1 + 90);
      v13 = *(const WCHAR **)(v12 + 4800);
      v24 = *(_BYTE *)(a1 + 1706);
      v25 = v10[5];
      v30 = v12 + 5192;
      v31 = 16LL;
      v32 = a1 + 1688;
      v34 = &hProvider.LevelPlus1 + 1;
      v36 = &v21;
      v38 = &v22;
      v40 = &v23;
      v33 = 16LL;
      v35 = 4LL;
      v37 = 1LL;
      v39 = 1LL;
      v41 = 1LL;
      TlgCreateWsz(&pDesc, v13);
      TlgCreateSz(&v43, psz);
      TlgCreateSz(&v44, v78);
      v46 = 1LL;
      v47 = &v25;
      p_hProvider = (struct _TlgProvider_t *)&v24;
      v45 = &v24;
      v49 = &v52;
      v48 = 1LL;
      v50 = 2LL;
      v51 = v10;
      v52 = 216LL;
      p_AnnotationFunc = &hProvider.AnnotationFunc;
      v18 = &unk_1C0047126;
    }
    else
    {
      if ( (unsigned int)dword_1C004F010 <= 5 || !TlgKeywordOn(v11, 0x400000000000uLL) )
        goto LABEL_23;
      v19 = *(_QWORD *)(a1 + 24);
      LODWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v19 + 56);
      v26 = *(_BYTE *)(a1 + 88);
      v27 = *(_BYTE *)(a1 + 89);
      v28 = *(_BYTE *)(a1 + 90);
      v20 = *(const WCHAR **)(v19 + 4800);
      LOBYTE(hProvider.LevelPlus1) = *(_BYTE *)(a1 + 1706);
      BYTE1(hProvider.LevelPlus1) = v10[5];
      v54 = v19 + 5192;
      v55 = 16LL;
      v56 = a1 + 1688;
      p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
      v60 = &v26;
      v62 = &v27;
      v64 = &v28;
      v57 = 16LL;
      v59 = 4LL;
      v61 = 1LL;
      v63 = 1LL;
      v65 = 1LL;
      TlgCreateWsz(&v66, v20);
      TlgCreateSz(&v67, psz);
      TlgCreateSz(&v68, v78);
      v70 = 1LL;
      v71 = (char *)&hProvider.LevelPlus1 + 1;
      p_hProvider = &hProvider;
      v69 = &hProvider;
      v73 = &v76;
      v72 = 1LL;
      v74 = 2LL;
      v75 = v10;
      v76 = 216LL;
      p_AnnotationFunc = (void (**)(...))&v53;
      v18 = &unk_1C0047071;
    }
    TlgWrite(p_hProvider, v18, v14, v15, 0xFu, (EVENT_DATA_DESCRIPTOR *)p_AnnotationFunc);
LABEL_23:
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000000LL) != 0 )
      Template_qcccjqqb(
        a1 + 1688,
        v7,
        *(_QWORD *)(a1 + 24),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a1 + 1688,
        *(_BYTE *)(a1 + 1706));
LABEL_25:
    ExFreePoolWithTag(OutputBuffer, 0x65546152u);
  }
}
