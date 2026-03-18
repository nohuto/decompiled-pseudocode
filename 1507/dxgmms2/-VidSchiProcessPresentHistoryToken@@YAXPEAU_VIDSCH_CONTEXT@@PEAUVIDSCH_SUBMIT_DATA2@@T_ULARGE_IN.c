/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N@Z @ 0x1C00014D0
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0001460 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00175D4 (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00016F8 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0012658 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C00126B4 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C00132A0 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@IIIH@Z @ 0x1C00139E4 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_SUBMIT_DATA2 *a2,
        union _ULARGE_INTEGER a3,
        char a4)
{
  __int64 v5; // r14
  __int64 v8; // rsi
  _QWORD *v9; // rax
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v10; // r12
  bool v11; // zf
  int v12; // eax
  char v13; // dl
  char v14; // al
  void (__fastcall *v15)(_QWORD); // rax
  _QWORD *v16; // rax
  struct _VIDSCH_GLOBAL *v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-48h]

  v5 = *((_QWORD *)a1 + 13);
  v8 = *(_QWORD *)(v5 + 32);
  if ( (*(_DWORD *)a2 & 0x2000000) != 0 )
  {
    v10 = (struct VIDSCH_SUBMIT_DATA2 *)((char *)a2 + 360);
    v11 = !_BitScanForward((unsigned int *)&v12, (unsigned __int8)*((_DWORD *)a2 + 90));
    v13 = -1;
    if ( !v11 )
      v13 = v12;
    v14 = v13;
    if ( v13 == -1 )
      v14 = 0;
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v8, *((_DWORD *)a2 + 29), v14)
      && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v8, a2) )
    {
      VidSchiSubmitIndependentFlip(a1, a2, a3);
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8LL * *((unsigned int *)a2 + 29) + 2640) + 14736LL) != -1 )
      {
        v15 = *(void (__fastcall **)(_QWORD))(v8 + 2528);
        if ( v15 )
          v15(*(_QWORD *)(v8 + 2560));
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v16[3] = *((_QWORD *)a2 + 13);
      v16[4] = *((unsigned int *)a2 + 28);
      if ( a4 )
      {
        v16[5] = 0LL;
        v16[6] = *((_QWORD *)a2 + 19);
        v16[7] = *((_QWORD *)a2 + 20);
      }
      else
      {
        v16[5] = *((_QWORD *)a2 + 19);
        v16[6] = *((_QWORD *)a2 + 20);
      }
      WdLogEvent5_WdPresentTokenEvent(v16);
      LOBYTE(v18) = a4;
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)a2 + 12),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
        0,
        0,
        v18,
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 3),
        (__int64)a2);
      VidSchiUnreferencePrimaryAllocations(v17, v10, 1u, *((_DWORD *)a2 + 34), *((_DWORD *)a2 + 34), 0);
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 908));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 1000));
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 4LL * *((unsigned int *)a2 + 29) + 936));
      VidSchiCheckPendingDeviceCommand(v5);
    }
  }
  else
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v9[3] = *((_QWORD *)a2 + 13);
    v9[4] = *((unsigned int *)a2 + 28);
    v9[5] = *((_QWORD *)a2 + 19);
    v9[6] = *((_QWORD *)a2 + 20);
    WdLogEvent5_WdPresentTokenEvent(v9);
    LOBYTE(v18) = 0;
    VidSchiPropagatePresentHistoryToken(
      *((PKSPIN_LOCK *)a2 + 12),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
      0,
      0,
      v18,
      *((_QWORD *)a2 + 4),
      *((_QWORD *)a2 + 3),
      (__int64)a2);
  }
}
