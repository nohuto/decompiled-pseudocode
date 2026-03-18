/*
 * XREFs of ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x180037BAC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTokenMatchPolicy@@PEAVCResponseItem@@@Z @ 0x180025988 (--$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1800AA9FC (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 *     ?SendResponse@CAsyncFlushResponse@@UEAAJJ@Z @ 0x1800AAAA0 (-SendResponse@CAsyncFlushResponse@@UEAAJJ@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddAsyncFlushResponse(
        CLegacySurfaceManager *this,
        struct CChannelContext *a2,
        unsigned int a3,
        int a4)
{
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rax
  CAsyncFlushResponse *v12; // rbx
  _QWORD *v13; // rax
  int matched; // eax
  PVOID RestartKey; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(CLegacySurfaceManager *))(*(_QWORD *)this + 8LL))(this);
  v17 = a4;
  v10 = *(_QWORD *)(v9 + 40);
  RestartKey = 0LL;
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          56LL);
  v12 = (CAsyncFlushResponse *)v11;
  if ( v11 )
  {
    *(_DWORD *)(v11 + 16) = 1;
    *(_QWORD *)v11 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v11 = &CResponseItem::`vftable';
    *(_DWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 24) = v10;
    *(_WORD *)(v11 + 32) = 0;
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    *(_DWORD *)(v11 + 48) = a3;
    *(_QWORD *)v11 = &CAsyncFlushResponse::`vftable';
    *(_QWORD *)(v11 + 40) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v13 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
    if ( v13 )
    {
      while ( 1 )
      {
        matched = CWindowNode::AddResponseToOutstandingDxSurfaces<ProcessTokenMatchPolicy>(v13[1], &v17, (__int64)v12);
        v8 = matched;
        if ( matched < 0 )
          break;
        v13 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
        if ( !v13 )
          goto LABEL_15;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, matched, 0x28Cu);
LABEL_15:
      if ( v8 < 0 )
        CAsyncFlushResponse::SendResponse(v12, v8);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x281u);
    CAsyncFlushResponse::SendResponseWorker(a2, a3, -2147024882);
  }
  if ( v12 )
    CResponseItem::ReleaseResponseRef(v12);
  return (unsigned int)v8;
}
