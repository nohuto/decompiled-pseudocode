/*
 * XREFs of ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0004730
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019A0 (VidSchiCheckConditionDeviceCommand.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00019F0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003BA0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnwaitContext @ 0x1C000D158 (VidSchiUnwaitContext.c)
 *     ?AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C000FA88 (-AddPendingTerminationAtDpcLevel@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00116C4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0011ED8 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C001D004 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     Template_px @ 0x1C0023A60 (Template_px.c)
 */

void __fastcall VidSchiProcessVsyncCompletedFlipEntry(
        struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        unsigned int *a4,
        bool *a5,
        bool a6)
{
  __int64 v6; // r10
  unsigned __int64 *v7; // r12
  struct _VIDSCH_VSYNC_COMPLETED_ENTRY_INFO *v8; // rdx
  __int64 v9; // rcx
  unsigned int *v10; // r14
  unsigned int *v11; // r9
  bool v12; // r8
  unsigned int v13; // r11d
  int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // r13d
  unsigned int v18; // r15d
  __int64 v19; // r14
  int v20; // edx
  __int64 v21; // rcx
  int v22; // esi
  char v23; // dl
  int v24; // r12d
  bool v25; // zf
  int v26; // eax
  unsigned int v27; // r13d
  char v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  _QWORD **v32; // rdi
  _QWORD *v33; // r9
  _VIDSCH_SYNC_POINT *v34; // r9
  _VIDSCH_SYNC_POINT *v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rdi
  _QWORD *v38; // r15
  int i; // esi
  _QWORD *v40; // rcx
  int v41; // edx
  int v42; // r13d
  __int64 **v43; // rdi
  int v44; // r13d
  _QWORD *v45; // r15
  __int64 v46; // rdi
  KSPIN_LOCK *v47; // rsi
  struct _KEVENT *v48; // r15
  struct _KEVENT *v49; // r15
  struct _KEVENT *v50; // r15
  struct _KEVENT *v51; // r15
  KIRQL v52; // r13
  struct _KEVENT *v53; // rsi
  _DWORD *v54; // rax
  unsigned int v55; // r9d
  int v56; // r11d
  int v57; // eax
  unsigned int v58; // edi
  unsigned int j; // r10d
  __int64 v60; // r12
  int v61; // eax
  int v62; // eax
  unsigned int v63; // eax
  struct _KEVENT *v64; // rsi
  int v65; // ecx
  struct _KEVENT *v66; // rsi
  int v67; // ecx
  _QWORD *v68; // r9
  _QWORD *v69; // r11
  __int64 v70; // rcx
  _QWORD *v71; // rax
  _VIDSCH_SYNC_POINT *v72; // rcx
  __int64 v73; // r11
  unsigned int v74; // r10d
  unsigned int v75; // edx
  __int64 v76; // r8
  _QWORD *v77; // rax
  _QWORD *v78; // rdx
  _QWORD *v79; // r10
  _QWORD *v80; // r8
  _QWORD *v81; // rax
  __int64 v82; // rdx
  _QWORD *v83; // rcx
  _QWORD *v84; // r8
  _QWORD *v85; // rdx
  _QWORD *v86; // rdx
  _QWORD *v87; // rcx
  __int64 v88; // r9
  struct VIDMM_ALLOC *v89; // r10
  __int64 v90; // rcx
  _QWORD *v91; // rdx
  _VIDSCH_SYNC_POINT *v92; // rdx
  _VIDSCH_SYNC_POINT **v93; // rax
  __int64 *v94; // rcx
  __int64 v95; // rax
  struct _VIDSCH_CONTEXT *v96; // rcx
  struct _KEVENT *v97; // rsi
  int v98; // ecx
  struct _KEVENT *v99; // rsi
  int Flink; // ecx
  int v101; // ecx
  KSPIN_LOCK *v102; // rdi
  struct _KEVENT *v103; // rcx
  KIRQL v104; // [rsp+40h] [rbp-C0h]
  KIRQL v105; // [rsp+40h] [rbp-C0h]
  KIRQL v106; // [rsp+40h] [rbp-C0h]
  KIRQL v107; // [rsp+40h] [rbp-C0h]
  __int64 v108; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v109; // [rsp+48h] [rbp-B8h]
  char v110; // [rsp+50h] [rbp-B0h]
  _QWORD *v111; // [rsp+58h] [rbp-A8h]
  _QWORD *v112; // [rsp+58h] [rbp-A8h]
  int v113; // [rsp+60h] [rbp-A0h]
  _VIDSCH_SYNC_POINT *v114; // [rsp+68h] [rbp-98h]
  _VIDSCH_SYNC_POINT *v115; // [rsp+70h] [rbp-90h]
  int v116; // [rsp+78h] [rbp-88h]
  int v117; // [rsp+7Ch] [rbp-84h]
  unsigned int v118; // [rsp+80h] [rbp-80h]
  _VIDSCH_SYNC_POINT *v119; // [rsp+88h] [rbp-78h]
  _QWORD *v120; // [rsp+90h] [rbp-70h]
  _QWORD *v121; // [rsp+90h] [rbp-70h]
  _QWORD *v122; // [rsp+98h] [rbp-68h]
  _QWORD *v123; // [rsp+98h] [rbp-68h]
  unsigned __int64 v124; // [rsp+A0h] [rbp-60h]
  __int64 v125; // [rsp+A8h] [rbp-58h]
  __int64 v126; // [rsp+B0h] [rbp-50h]
  VIDMM_GLOBAL *v127; // [rsp+C0h] [rbp-40h]
  _QWORD *v128; // [rsp+C8h] [rbp-38h]
  __int64 v129; // [rsp+D0h] [rbp-30h]
  __int64 v130; // [rsp+D8h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE v132; // [rsp+F8h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v133; // [rsp+110h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE v134; // [rsp+128h] [rbp+28h] BYREF
  struct _KLOCK_QUEUE_HANDLE v135; // [rsp+140h] [rbp+40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v136; // [rsp+158h] [rbp+58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v137; // [rsp+170h] [rbp+70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v138; // [rsp+188h] [rbp+88h] BYREF

  v6 = *(_QWORD *)a1;
  v7 = a2;
  v8 = a1;
  v126 = v6;
  v9 = *((unsigned int *)a1 + 4);
  v10 = a4;
  v117 = v9;
  v11 = a3;
  v12 = a6;
  v14 = *((_DWORD *)v8 + 6);
  v15 = *(_QWORD *)(v6 + 8 * v9 + 2968);
  v118 = *((_DWORD *)v8 + 5);
  v13 = v118;
  v116 = v14;
  v16 = *(_QWORD *)(v15 + 8LL * v118 + 24);
  v17 = ((_BYTE)v14 + 1) & 0x3F;
  v125 = v16;
  v113 = v17;
  v18 = *(_DWORD *)(v16 + 44);
  v110 = v18;
  if ( v18 == v17 )
    goto LABEL_49;
  while ( 2 )
  {
    v19 = v16 + 1224LL * v18;
    if ( !v12 )
      *(_DWORD *)(v19 + 1100) = 11;
    *(_DWORD *)(v19 + 1160) = *((_DWORD *)v8 + 7);
    *(_QWORD *)(v19 + 1144) = *((_QWORD *)v8 + 4);
    *(_QWORD *)(v19 + 1152) = *((_QWORD *)v8 + 5);
    if ( (*(_DWORD *)(v19 + 1164) & 0x10) != 0 )
      v20 = (unsigned __int8)**(_DWORD **)(v19 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v19 + 1208) + 1LL);
    else
      v20 = (1 << *(_DWORD *)(v6 + 128)) - 1;
    v21 = *v11;
    LODWORD(v124) = v20;
    *(_DWORD *)(v15 + 2280) &= ~v20;
    HIDWORD(v124) = *(_DWORD *)(v19 + 1096);
    v7[v21] = v124;
    *v11 = v21 + 1;
    if ( (*(_DWORD *)(v19 + 1164) & 0x10) != 0 )
      LOWORD(v22) = *(_WORD *)(v15 + 18736) & ((unsigned __int8)**(_WORD **)(v19 + 1208) | *(unsigned __int8 *)(*(_QWORD *)(v19 + 1208) + 1LL));
    else
      LOWORD(v22) = *(_WORD *)(v15 + 18736);
    v23 = 0;
    LOWORD(v24) = 0;
    if ( !(_WORD)v22 )
      goto LABEL_37;
    do
    {
      v25 = !_BitScanForward((unsigned int *)&v26, (unsigned __int16)v22);
      if ( v25 )
        LOBYTE(v26) = -1;
      v27 = 0;
      v28 = v26;
      if ( !*(_WORD *)(v15 + 18738) )
        goto LABEL_16;
      v29 = (__int64)(char)v26 << 6;
      v108 = v29;
      do
      {
        v130 = v29 + v27;
        v129 = 32 * v130 + v15;
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v129 + 2360) + 16LL) + 8LL));
        v114 = *(_VIDSCH_SYNC_POINT **)(v15 + 16);
        v30 = *((_QWORD *)v114 + 4);
        v127 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v30 + 8) + 408LL);
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v30 + 1888), &LockHandle);
        v32 = (_QWORD **)(v30 + 1920);
        v33 = *v32;
        if ( *v32 != v32 )
        {
          do
          {
            v111 = (_QWORD *)*v33;
            if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v31, (__int64)(v33 - 27)) )
            {
              v70 = *v68;
              v71 = (_QWORD *)v68[1];
              if ( *(_QWORD **)(*v68 + 8LL) != v68 || (_QWORD *)*v71 != v68 )
                __fastfail(3u);
              *v71 = v70;
              *(_QWORD *)(v70 + 8) = v71;
              VIDMM_GLOBAL::AddPendingTermination(*(VIDMM_GLOBAL **)*(v68 - 26), (struct VIDMM_ALLOC *)(v68 - 27));
              v69 = v111;
            }
            v33 = v69;
          }
          while ( v69 != v32 );
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v34 = v114;
        v35 = (_VIDSCH_SYNC_POINT *)*((_QWORD *)v114 + 145);
        if ( v35 == (_VIDSCH_SYNC_POINT *)((char *)v114 + 1160) )
          goto LABEL_15;
        while ( 1 )
        {
          v72 = v35;
          v119 = v35;
          v35 = *(_VIDSCH_SYNC_POINT **)v35;
          v115 = v35;
          v73 = *((_QWORD *)v72 + 2);
          if ( v73 > *((_QWORD *)v34 + 144) )
            break;
LABEL_84:
          v78 = (_QWORD *)*((_QWORD *)v72 + 11);
          v79 = (_QWORD *)((char *)v72 + 88);
          v112 = (_QWORD *)((char *)v72 + 88);
          if ( v78 != (_QWORD *)((char *)v72 + 88) )
          {
            do
            {
              v80 = v78 - 29;
              v81 = v78;
              v122 = (_QWORD *)*v78;
              v82 = *v78;
              v83 = (_QWORD *)v80[30];
              v120 = v80;
              if ( *(_QWORD **)(v82 + 8) != v80 + 29 || (_QWORD *)*v83 != v81 )
                __fastfail(3u);
              *v83 = v82;
              *(_QWORD *)(v82 + 8) = v83;
              VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v80);
              v78 = v122;
              v79 = v112;
              v120[29] = 0LL;
              v120[30] = 0LL;
            }
            while ( v122 != v112 );
            v34 = v114;
            v35 = v115;
            v72 = v119;
          }
          v84 = (_QWORD *)*((_QWORD *)v72 + 9);
          v85 = (_QWORD *)((char *)v72 + 72);
          v121 = (_QWORD *)((char *)v72 + 72);
          if ( v84 != (_QWORD *)((char *)v72 + 72) )
          {
            do
            {
              v123 = v84 - 27;
              v86 = (_QWORD *)*v84;
              v87 = (_QWORD *)v84[1];
              v128 = (_QWORD *)*v84;
              if ( *(_QWORD **)(*v84 + 8LL) != v84 || (_QWORD *)*v87 != v84 )
                __fastfail(3u);
              *v87 = v86;
              v86[1] = v87;
              if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v87, (__int64)(v84 - 27)) )
              {
                VIDMM_GLOBAL::AddPendingTerminationAtDpcLevel(v127, v89);
              }
              else
              {
                KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(v88 + 32) + 1888LL), &v132);
                v90 = *((_QWORD *)v114 + 4) + 1920LL;
                v91 = *(_QWORD **)(*((_QWORD *)v114 + 4) + 1928LL);
                if ( *v91 != v90 )
                  __fastfail(3u);
                v123[27] = v90;
                v123[28] = v91;
                *v91 = v123 + 27;
                *(_QWORD *)(v90 + 8) = v123 + 27;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v132);
              }
              v85 = v121;
              v84 = v128;
              v34 = v114;
            }
            while ( v128 != v121 );
            v35 = v115;
            v72 = v119;
            v79 = v112;
          }
          if ( (_QWORD *)*v85 == v85 && (_QWORD *)*v79 == v79 )
          {
            v92 = *(_VIDSCH_SYNC_POINT **)v72;
            v93 = (_VIDSCH_SYNC_POINT **)*((_QWORD *)v72 + 1);
            if ( *(_VIDSCH_SYNC_POINT **)(*(_QWORD *)v72 + 8LL) != v72 || *v93 != v72 )
              __fastfail(3u);
            v25 = bTracingEnabled == 0;
            *v93 = v92;
            *((_QWORD *)v92 + 1) = v93;
            if ( !v25 )
            {
              v92 = (_VIDSCH_SYNC_POINT *)*((_QWORD *)v34 + 1);
              if ( !v92 )
                v92 = v34;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                Template_px(v72, v92, v84, v92, *((_QWORD *)v72 + 2));
                v72 = v119;
              }
            }
            _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v72, (unsigned int)v92);
            v34 = v114;
            v35 = v115;
          }
          if ( v35 == (_VIDSCH_SYNC_POINT *)((char *)v114 + 1160) )
            goto LABEL_15;
        }
        v74 = *((_DWORD *)v72 + 16);
        v75 = 0;
        if ( !v74 )
        {
LABEL_83:
          *((_QWORD *)v34 + 144) = v73;
          goto LABEL_84;
        }
        v76 = *((_QWORD *)v72 + 3);
        while ( 1 )
        {
          v77 = (_QWORD *)(v76 + 16LL * v75);
          if ( *v77 )
          {
            if ( *(_QWORD *)(*v77 + 152LL) < v77[1] )
              break;
          }
          v76 = *((_QWORD *)v72 + 3);
          if ( ++v75 >= v74 )
          {
            v35 = v115;
            goto LABEL_83;
          }
        }
LABEL_15:
        v29 = v108;
        ++v27;
        v23 = 1;
        *(_QWORD *)(v129 + 2352) = 0LL;
        *(_QWORD *)(v129 + 2360) = 0LL;
        *(_WORD *)(v129 + 2376) = 0;
        *(_QWORD *)(32 * (v130 + 74) + v15) = 0LL;
      }
      while ( v27 < *(unsigned __int16 *)(v15 + 18738) );
LABEL_16:
      v22 = (unsigned __int16)v22 & ~(1 << v28);
      v24 = (unsigned __int16)v24 | (1 << v28);
      *(_WORD *)(v15 + 18736) &= ~(1 << v28);
    }
    while ( (_WORD)v22 );
    if ( v23 )
    {
      v36 = *(_QWORD *)(v15 + 16);
      if ( v36 )
      {
        v37 = *(_QWORD **)(v36 + 64);
        v38 = (_QWORD *)(v36 + 64);
        for ( i = 0; v37 != v38; i |= v41 )
        {
          v40 = v37 - 3;
          v41 = 0;
          if ( (v37[19] & 0x10) != 0 )
          {
            *((_DWORD *)v40 + 44) &= ~0x10u;
            v41 = (unsigned __int8)VidSchiUnwaitContext(v40, 18639LL);
          }
          v37 = (_QWORD *)*v37;
        }
        v42 = 0;
        v43 = (__int64 **)(v15 + 46896);
        while ( *v43 != (__int64 *)v43 )
        {
          v94 = *v43;
          v95 = **v43;
          if ( (__int64 **)(*v43)[1] != v43 || *(__int64 **)(v95 + 8) != v94 )
            __fastfail(3u);
          *v43 = (__int64 *)v95;
          v96 = (struct _VIDSCH_CONTEXT *)(v94 - 5);
          *(_QWORD *)(v95 + 8) = v43;
          *((_QWORD *)v96 + 5) = 0LL;
          *((_QWORD *)v96 + 6) = 0LL;
          v42 |= VidSchiUpdateFlipContextStatus(v96);
        }
        v44 = i | v42;
      }
      else
      {
        v44 = 0;
      }
      v45 = *(_QWORD **)(v15 + 16);
      if ( v45 )
      {
        v46 = v45[4];
        v47 = (KSPIN_LOCK *)(v46 + 1872);
        v104 = KfRaiseIrql(2u);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v46 + 1872), &v133);
        if ( (_QWORD *)v45[12] == v45 + 12 )
          goto LABEL_28;
        v97 = (struct _KEVENT *)v45[12];
        while ( LODWORD(v97->Header.WaitListHead.Blink) == 4 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v97[1].Header.Lock + 4LL * LODWORD(v97[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v97[1].Header.Lock + 204LL) )
            goto LABEL_120;
LABEL_121:
          v97 = *(struct _KEVENT **)&v97->Header.Lock;
          if ( v97 == (struct _KEVENT *)(v45 + 12) )
          {
            v47 = (KSPIN_LOCK *)(v46 + 1872);
LABEL_28:
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v133);
            KeLowerIrql(v104);
            v48 = (struct _KEVENT *)(v45 + 14);
            v105 = KfRaiseIrql(2u);
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v47, &v134);
            if ( *(struct _KEVENT **)&v48->Header.Lock == v48 )
              goto LABEL_29;
            v99 = *(struct _KEVENT **)&v48->Header.Lock;
            while ( 2 )
            {
              if ( LODWORD(v99->Header.WaitListHead.Blink) == 4 )
              {
                if ( *(_DWORD *)(*(_QWORD *)&v99[1].Header.Lock + 4LL * LODWORD(v99[1].Header.WaitListHead.Blink) + 996) < *(_DWORD *)(*(_QWORD *)&v99[1].Header.Lock + 204LL) )
                  goto LABEL_129;
              }
              else if ( ((__int64)v99[1].Header.WaitListHead.Flink & 4) == 0
                     || (Flink = (int)v99[1].Header.WaitListHead.Blink->Flink,
                         (HIDWORD(v99[5].Header.WaitListHead.Blink) = Flink) == 0) )
              {
LABEL_129:
                ++v99[5].Header.LockNV;
                KeSetEvent(v99 + 4, 0, 0);
              }
              v99 = *(struct _KEVENT **)&v99->Header.Lock;
              if ( v99 == v48 )
              {
                v47 = (KSPIN_LOCK *)(v46 + 1872);
LABEL_29:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v134);
                KeLowerIrql(v105);
                v49 = (struct _KEVENT *)(v46 + 1816);
                v106 = KfRaiseIrql(2u);
                KeAcquireInStackQueuedSpinLockAtDpcLevel(v47, &v135);
                if ( *(struct _KEVENT **)&v49->Header.Lock == v49 )
                  goto LABEL_30;
                v66 = *(struct _KEVENT **)&v49->Header.Lock;
                while ( 2 )
                {
                  if ( LODWORD(v66->Header.WaitListHead.Blink) == 4 )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)&v66[1].Header.Lock
                                   + 4LL * LODWORD(v66[1].Header.WaitListHead.Blink)
                                   + 996) >= *(_DWORD *)(*(_QWORD *)&v66[1].Header.Lock + 204LL) )
                      goto LABEL_65;
                  }
                  else if ( ((__int64)v66[1].Header.WaitListHead.Flink & 4) != 0 )
                  {
                    v67 = (int)v66[1].Header.WaitListHead.Blink->Flink;
                    HIDWORD(v66[5].Header.WaitListHead.Blink) = v67;
                    if ( v67 )
                    {
LABEL_65:
                      v66 = *(struct _KEVENT **)&v66->Header.Lock;
                      if ( v66 == v49 )
                      {
                        v47 = (KSPIN_LOCK *)(v46 + 1872);
LABEL_30:
                        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v135);
                        KeLowerIrql(v106);
                        v50 = (struct _KEVENT *)(v46 + 1800);
                        v107 = KfRaiseIrql(2u);
                        KeAcquireInStackQueuedSpinLockAtDpcLevel(v47, &v136);
                        if ( *(struct _KEVENT **)&v50->Header.Lock == v50 )
                          goto LABEL_31;
                        v64 = *(struct _KEVENT **)&v50->Header.Lock;
                        while ( 2 )
                        {
                          if ( LODWORD(v64->Header.WaitListHead.Blink) == 4 )
                          {
                            if ( *(_DWORD *)(*(_QWORD *)&v64[1].Header.Lock
                                           + 4LL * LODWORD(v64[1].Header.WaitListHead.Blink)
                                           + 996) >= *(_DWORD *)(*(_QWORD *)&v64[1].Header.Lock + 204LL) )
                              goto LABEL_59;
                          }
                          else if ( ((__int64)v64[1].Header.WaitListHead.Flink & 4) != 0 )
                          {
                            v65 = (int)v64[1].Header.WaitListHead.Blink->Flink;
                            HIDWORD(v64[5].Header.WaitListHead.Blink) = v65;
                            if ( v65 )
                            {
LABEL_59:
                              v64 = *(struct _KEVENT **)&v64->Header.Lock;
                              if ( v64 == v50 )
                              {
                                v47 = (KSPIN_LOCK *)(v46 + 1872);
LABEL_31:
                                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v136);
                                KeLowerIrql(v107);
                                *(_QWORD *)(v46 + 1648) = MEMORY[0xFFFFF78000000320];
                                KeSetEvent((PRKEVENT)(v46 + 1616), 0, 0);
                                *(_QWORD *)(v46 + 1760) = MEMORY[0xFFFFF78000000320];
                                KeSetEvent((PRKEVENT)(v46 + 1728), 0, 0);
                                if ( v44 )
                                {
                                  *(_QWORD *)(v46 + 1368) = MEMORY[0xFFFFF78000000320];
                                  KeSetEvent((PRKEVENT)(v46 + 1336), 0, 0);
                                }
                                v51 = (struct _KEVENT *)(v46 + 1832);
                                v52 = KfRaiseIrql(2u);
                                KeAcquireInStackQueuedSpinLockAtDpcLevel(v47, &v137);
                                v53 = *(struct _KEVENT **)(v46 + 1832);
                                if ( *(struct _KEVENT **)&v51->Header.Lock == v51 )
                                {
LABEL_34:
                                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v137);
                                  KeLowerIrql(v52);
                                  if ( *(_WORD *)(v15 + 18740) )
                                  {
                                    v102 = *(KSPIN_LOCK **)(v46 + 1848);
                                    KeAcquireInStackQueuedSpinLock(v102, &v138);
                                    v103 = (struct _KEVENT *)v102[1];
                                    if ( v103 )
                                      KeSetEvent(v103, 0, 0);
                                    KeReleaseInStackQueuedSpinLock(&v138);
                                  }
                                  goto LABEL_35;
                                }
                                while ( 2 )
                                {
                                  if ( LODWORD(v53->Header.WaitListHead.Blink) == 4 )
                                  {
                                    if ( *(_DWORD *)(*(_QWORD *)&v53[1].Header.Lock
                                                   + 4LL * LODWORD(v53[1].Header.WaitListHead.Blink)
                                                   + 996) < *(_DWORD *)(*(_QWORD *)&v53[1].Header.Lock + 204LL) )
                                      goto LABEL_141;
                                  }
                                  else if ( ((__int64)v53[1].Header.WaitListHead.Flink & 4) == 0
                                         || (v101 = (int)v53[1].Header.WaitListHead.Blink->Flink,
                                             (HIDWORD(v53[5].Header.WaitListHead.Blink) = v101) == 0) )
                                  {
LABEL_141:
                                    ++v53[5].Header.LockNV;
                                    KeSetEvent(v53 + 4, 0, 0);
                                  }
                                  v53 = *(struct _KEVENT **)&v53->Header.Lock;
                                  if ( v53 == v51 )
                                    goto LABEL_34;
                                  continue;
                                }
                              }
                              continue;
                            }
                          }
                          break;
                        }
                        ++v64[5].Header.LockNV;
                        KeSetEvent(v64 + 4, 0, 0);
                        goto LABEL_59;
                      }
                      continue;
                    }
                  }
                  break;
                }
                ++v66[5].Header.LockNV;
                KeSetEvent(v66 + 4, 0, 0);
                goto LABEL_65;
              }
              continue;
            }
          }
        }
        if ( ((__int64)v97[1].Header.WaitListHead.Flink & 4) != 0 )
        {
          v98 = (int)v97[1].Header.WaitListHead.Blink->Flink;
          HIDWORD(v97[5].Header.WaitListHead.Blink) = v98;
          if ( v98 )
            goto LABEL_121;
        }
LABEL_120:
        ++v97[5].Header.LockNV;
        KeSetEvent(v97 + 4, 0, 0);
        goto LABEL_121;
      }
LABEL_35:
      *(_WORD *)(v15 + 18740) &= ~(_WORD)v24;
    }
    v17 = v113;
    LOBYTE(v18) = v110;
LABEL_37:
    v54 = *(_DWORD **)(v19 + 1208);
    v55 = (unsigned __int8)*v54;
    if ( (unsigned __int8)*v54 )
    {
      v56 = 0;
      do
      {
        v25 = !_BitScanForward((unsigned int *)&v57, v55);
        if ( v25 )
          LOBYTE(v57) = -1;
        v58 = 0;
        for ( j = (char)v57; v58 < *(_DWORD *)(v19 + 1124); ++v58 )
        {
          v109 = ((unsigned __int64)j << 6) + v58;
          v60 = 32 * v109 + v15;
          *(_QWORD *)(v60 + 2360) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 1208)
                                                          + *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL)
                                                          * ((8 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                                                          + 48
                                                          * (v56 + v58 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL) + 1LL))
                                              + 96LL);
          *(_QWORD *)(v60 + 2352) = *(_QWORD *)(*(_QWORD *)(v19 + 1208)
                                              + *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL)
                                              * ((8 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                                              + 48LL * (v56 + v58 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL))
                                              + 24);
          v61 = *(unsigned __int16 *)(v15 + 18740);
          if ( *(_BYTE *)(*(_QWORD *)(v19 + 1208)
                        + *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL)
                        * ((8 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                        + 48LL * (v56 + v58 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL))
                        + 56) )
            v62 = v61 | (1 << j);
          else
            v62 = v61 & ~(1 << j);
          *(_WORD *)(v15 + 18740) = v62;
          *(_WORD *)(v60 + 2376) = *(_WORD *)(*(_QWORD *)(v19 + 1208)
                                            + *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL)
                                            * ((8 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                                            + 48LL * (v56 + v58 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL))
                                            + 32);
          *(_QWORD *)(32 * (v109 + 74) + v15) = *(_QWORD *)(*(_QWORD *)(v19 + 1208)
                                                          + *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL)
                                                          * ((8 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 8LL) + 167) & 0xFFFFFFF8)
                                                          + 48LL
                                                          * (v56 + v58 * *(_DWORD *)(*(_QWORD *)(v19 + 1208) + 4LL))
                                                          + 40);
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v60 + 2360) + 16LL) + 8LL));
        }
        ++v56;
        *(_WORD *)(v15 + 18736) |= 1 << j;
        v55 &= ~(1 << j);
      }
      while ( v55 );
      *(_WORD *)(v15 + 18738) = *(_WORD *)(v19 + 1124);
    }
    v16 = v125;
    v6 = v126;
    v18 = ((_BYTE)v18 + 1) & 0x3F;
    v12 = a6;
    v110 = v18;
    if ( v18 != v17 )
    {
      v8 = a1;
      v11 = a3;
      v7 = a2;
      continue;
    }
    break;
  }
  v14 = v116;
  LODWORD(v9) = v117;
  v13 = v118;
  v10 = a4;
LABEL_49:
  if ( !v12 )
  {
    v63 = VidSchiCompleteFlipEntry(v6, v9, v13, *(_DWORD *)(v16 + 44), v14, 0, 0LL);
    *v10 = v63;
    *(_DWORD *)(v16 + 44) = v17;
    if ( *(_DWORD *)(v16 + 48) == v14 )
      *(_DWORD *)(v16 + 48) = v17;
    if ( v63 )
      *a5 = 1;
  }
}
