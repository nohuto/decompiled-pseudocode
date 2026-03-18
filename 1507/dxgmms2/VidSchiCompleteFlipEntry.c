/*
 * XREFs of VidSchiCompleteFlipEntry @ 0x1C00157C8
 * Callers:
 *     VidSchiCancelIndependentFlips @ 0x1C00156AC (VidSchiCancelIndependentFlips.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C001740C (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0017F3C (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0019F38 (VidSchiRestartQueuedFlip.c)
 *     VidSchiCompletePendingFlip @ 0x1C001DEE8 (VidSchiCompletePendingFlip.c)
 * Callees:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00016F8 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000DFB4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001318C (-VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C00139E4 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 *     Template_pxqqpqx @ 0x1C0014F8C (Template_pxqqpqx.c)
 *     VidSchiSignalFlipEvents @ 0x1C001A3FC (VidSchiSignalFlipEvents.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C001B084 (VidSchiTryEnterIndependentFlip.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C001B530 (VidSchiUpdateFlipDeviceStatus.c)
 */

__int64 __fastcall VidSchiCompleteFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        _BYTE *a7)
{
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // r10
  int v14; // r13d
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  __int64 v17; // r8
  __int64 v18; // rbp
  __int64 v19; // rbx
  unsigned int v20; // ecx
  int v21; // r8d
  unsigned __int8 v22; // cf
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // r15
  CRefCountedBuffer *v26; // rcx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v27; // rdx
  bool v28; // r14
  __int64 v29; // r8
  __int64 v30; // rdx
  ULONG v31; // eax
  struct _VIDSCH_GLOBAL *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int i; // edx
  __int64 v36; // rax
  __int64 v37; // r8
  bool v38; // zf
  int v39; // eax
  __int64 v40; // r9
  char v41; // cl
  int v42; // eax
  char v43; // dl
  __int64 v44; // rdx
  void (__fastcall *v45)(_QWORD, __int64, __int64, __int64); // rax
  int v46; // eax
  char v47; // dl
  char v48; // bl
  int v49; // eax
  unsigned int updated; // eax
  __int64 v51; // [rsp+28h] [rbp-C0h]
  __int64 v52; // [rsp+30h] [rbp-B8h]
  __int64 v53; // [rsp+40h] [rbp-A8h]
  int v54; // [rsp+50h] [rbp-98h]
  int v55; // [rsp+54h] [rbp-94h]
  int v56; // [rsp+58h] [rbp-90h]
  unsigned int v57; // [rsp+5Ch] [rbp-8Ch]
  __int64 v58; // [rsp+60h] [rbp-88h]
  __int64 v59; // [rsp+70h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v61; // [rsp+98h] [rbp-50h] BYREF
  BOOL v62; // [rsp+F0h] [rbp+8h]

  v7 = a2;
  v8 = a7;
  v57 = a4;
  if ( a7 )
    *a7 = 0;
  if ( !*((_DWORD *)a1 + 228) )
    return 0LL;
  v11 = *((_QWORD *)a1 + v7 + 330);
  v12 = v7;
  v13 = *(_QWORD *)(v11 + 8LL * a3 + 16);
  v59 = v13;
  if ( !v13 )
    return 0LL;
  v14 = a6;
  v15 = 0;
  v55 = 0;
  v16 = 0;
  v54 = 0;
  v17 = 4673LL;
  while ( 1 )
  {
    v18 = 0LL;
    v19 = v13 + 1144LL * (unsigned int)a4;
    v20 = *(_DWORD *)(v19 + 1100);
    if ( v20 > 0xC || !_bittest((const int *)&v17, v20) )
      v18 = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 104LL);
    v62 = 1;
    v56 = 1;
    if ( !a6 )
    {
      if ( v20 - 10 > 1 )
        goto LABEL_86;
      goto LABEL_35;
    }
    if ( a6 == 9 || a6 == 6 )
    {
      if ( v20 > 0xC || (v22 = _bittest((const int *)&v17, v20), v21 = 0, !v22) )
        v21 = 1;
      if ( a6 == 9 )
      {
        v62 = v20 == 5;
      }
      else if ( v20 == 5 )
      {
        v21 = 0;
      }
      if ( v20 - 7 <= 1 )
      {
        ++*(_QWORD *)(v18 + 8 * v12 + 344);
        _InterlockedIncrement((volatile signed __int32 *)a1 + 230);
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 2328));
        if ( *(_DWORD *)(v19 + 1100) == 8 && !*(_BYTE *)(v19 + 1113) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 4 * v12 + 872));
          v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 40) + 24LL)
                                      + 8LL * *(unsigned int *)(*(_QWORD *)(v18 + 32) + 4LL))
                          + 8 * v12
                          + 520);
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + v12 + 647) + 8LL));
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
          _InterlockedIncrement((volatile signed __int32 *)a1 + 227);
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 1000));
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 4 * v12 + 936));
          v56 = 0;
        }
      }
      goto LABEL_34;
    }
    if ( a6 != 12 )
      goto LABEL_86;
    if ( v20 - 2 <= 1 )
    {
      v21 = (*(_DWORD *)(v19 + 1148) >> 5) & 1;
      if ( !v21 )
      {
LABEL_85:
        v17 = 4673LL;
        goto LABEL_86;
      }
      *(_DWORD *)(v13 + 40) = ((_BYTE)a4 + 1) & 0x3F;
LABEL_34:
      if ( !v21 )
      {
LABEL_84:
        v8 = a7;
        goto LABEL_85;
      }
LABEL_35:
      if ( *(_DWORD *)(v19 + 1100) == 1 )
      {
        --*((_DWORD *)a1 + 229);
        --*(_DWORD *)(v11 + 2324);
      }
      v24 = *(_QWORD *)(v19 + 1176);
      *(_DWORD *)(v19 + 1100) = a6;
      if ( v24 )
      {
        v25 = *(_QWORD *)(v19 + 1184);
        if ( v25 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v25 + 16), &LockHandle);
          v26 = *(CRefCountedBuffer **)(v25 + 8);
          if ( v26 )
            CRefCountedBuffer::RefCountedBufferRelease(v26);
          *(_QWORD *)(v25 + 8) = v24;
          _InterlockedIncrement((volatile signed __int32 *)(v24 + 4));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          *(_QWORD *)(v19 + 1184) = 0LL;
        }
        CRefCountedBuffer::RefCountedBufferRelease(*(CRefCountedBuffer **)(v19 + 1176));
        v15 = v55;
        *(_QWORD *)(v19 + 1176) = 0LL;
      }
      if ( !a6 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)a1 + 235, &v61);
        if ( (*(_DWORD *)(v19 + 1148) & 0x20) == 0 )
          *(_DWORD *)(*(_QWORD *)(v11 + 8) + 4 * v12 + 476) = *(_DWORD *)(v19 + 1104);
        *(_DWORD *)(*(_QWORD *)(v11 + 8) + 4 * v12 + 540) = *(_DWORD *)(v19 + 1144);
        *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * v12 + 608) = *(_QWORD *)(v19 + 1136);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v61);
      }
      if ( (*(_DWORD *)(v19 + 1148) & 0x20) == 0 )
        goto LABEL_66;
      v27 = *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v19 + 1168);
      if ( !v27 )
        goto LABEL_66;
      v28 = 1;
      if ( a6 )
      {
        if ( a6 != 9 )
        {
          if ( a6 == 6 )
          {
            VidSchiPropagatePresentHistoryToken(
              *(PKSPIN_LOCK *)(v19 + 1160),
              v27,
              1,
              (*(_DWORD *)(v19 + 1148) & 0x40) != 0,
              0,
              *(_QWORD *)(v19 + 1184),
              *(_QWORD *)(v19 + 1176),
              0LL);
            goto LABEL_53;
          }
          goto LABEL_52;
        }
        if ( !v62 )
LABEL_52:
          v28 = 0;
      }
LABEL_53:
      VidSchiPropagatePresentHistoryToken(
        *(PKSPIN_LOCK *)(v19 + 1160),
        *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v19 + 1168),
        v28,
        (*(_DWORD *)(v19 + 1148) & 0x40) != 0,
        0,
        *(_QWORD *)(v19 + 1184),
        *(_QWORD *)(v19 + 1176),
        0LL);
      if ( bTracingEnabled && a6 )
      {
        LODWORD(v58) = a3;
        if ( v18 )
          v29 = *((unsigned int *)a1 + 538);
        else
          v29 = 0LL;
        if ( v18 )
        {
          v30 = *(_QWORD *)(v18 + 8);
          if ( !v30 )
            v30 = v18;
        }
        else
        {
          v30 = 0LL;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v53) = v29;
          LODWORD(v52) = *(_DWORD *)(v19 + 1104);
          LODWORD(v51) = a2;
          HIDWORD(v58) = *(_DWORD *)(v19 + 1096);
          Template_pxqqpqx(
            *(_QWORD *)(v19 + 1192),
            v30,
            v29,
            *((_QWORD *)a1 + 2),
            *(_QWORD *)(*(_QWORD *)(v19 + 1192) + 32LL),
            v51,
            v52,
            v30,
            v53,
            v58);
        }
      }
LABEL_66:
      if ( v56 )
      {
        v31 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)**(_DWORD **)(v19 + 1192));
        VidSchiUnreferencePrimaryAllocations(
          v32,
          *(struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 **)(v19 + 1192),
          v31,
          *(_DWORD *)(v19 + 1116),
          *(_DWORD *)(v19 + 1116),
          1);
        if ( v18 )
          VidSchiCheckPendingDeviceCommand((_QWORD *)v18, v33, v34);
      }
      for ( i = 0; i < *(_DWORD *)(v19 + 1124); --*(_DWORD *)(*(_QWORD *)(v19 + 8 * v36 + 56) + 768LL) )
        v36 = i++;
      v55 = ++v15;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 1000), 0xFFFFFFFF);
      _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 227, 0xFFFFFFFF);
      _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 4 * v12 + 936), 0xFFFFFFFF);
      if ( (*(_BYTE *)(v19 + 1148) & 0x10) != 0 )
        v37 = (unsigned __int8)**(_DWORD **)(v19 + 1192) | (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v19 + 1192)
                                                                                            + 1LL);
      else
        v37 = (unsigned int)((1 << *((_DWORD *)a1 + 31)) - 1);
      v38 = !_BitScanForward((unsigned int *)&v39, v37);
      v40 = (unsigned int)v37;
      v41 = -1;
      if ( !v38 )
        v41 = v39;
      if ( (_DWORD)v37 )
      {
        do
        {
          --*(_DWORD *)(280LL * v41 + *((_QWORD *)a1 + v12 + 330) + 156);
          v40 = ~(1 << v41) & (unsigned int)v40;
          v38 = !_BitScanForward((unsigned int *)&v42, v40);
          v43 = -1;
          if ( !v38 )
            v43 = v42;
          v41 = v43;
        }
        while ( (_DWORD)v40 );
      }
      v16 = v37 | v54;
      v54 |= v37;
      _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 4 * v12 + 872), 0xFFFFFFFF);
      --*(_DWORD *)(v18 + 1004);
      v44 = *(unsigned int *)(*((_QWORD *)a1 + v12 + 330) + 14736LL);
      if ( (_DWORD)v44 != -1 )
      {
        v45 = (void (__fastcall *)(_QWORD, __int64, __int64, __int64))*((_QWORD *)a1 + 316);
        if ( v45 )
          v45(*((_QWORD *)a1 + 320), v44, v37, v40);
      }
      v13 = v59;
      a4 = v57;
      *(_DWORD *)(v59 + 48) = v57;
      goto LABEL_84;
    }
    if ( v20 == 5 && (*(_DWORD *)(v19 + 1148) & 0x20) != 0 && v8 )
      *v8 = 1;
LABEL_86:
    if ( (_DWORD)a4 == a5 )
      break;
    a4 = ((_BYTE)a4 + 1) & 0x3F;
    v57 = a4;
  }
  if ( v15 )
  {
    v38 = !_BitScanForward((unsigned int *)&v46, v16);
    v47 = -1;
    if ( !v38 )
      v47 = v46;
    if ( v16 )
    {
      do
      {
        v48 = v47;
        VidSchiTryEnterIndependentFlip(a1, a2, (unsigned int)v47);
        v16 &= ~(1 << v48);
        v38 = !_BitScanForward((unsigned int *)&v49, v16);
        v47 = -1;
        if ( !v38 )
          v47 = v49;
      }
      while ( v16 );
      v14 = a6;
    }
  }
  *((_DWORD *)a1 + 228) -= v15;
  *(_DWORD *)(v11 + 2320) -= v15;
  _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 230, -v15);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 2328), -v15);
  if ( !v14 )
    VidSchiQueueDeferredVisibilityWorkItem((struct _VIDSCH_PRESENT_INFO *)v11, a1, v17, a4);
  updated = VidSchiUpdateFlipDeviceStatus(v11);
  VidSchiSignalFlipEvents(v11, updated);
  return v15;
}
