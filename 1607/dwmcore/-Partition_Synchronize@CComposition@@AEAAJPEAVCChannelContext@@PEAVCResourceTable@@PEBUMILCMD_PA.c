/*
 * XREFs of ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x18010FD3C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x1801173FC (-AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_Synchronize(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SYNCHRONIZE *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  CFrameInfo *v9; // rcx
  int v10; // eax

  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, struct CResourceTable *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 8LL))(
         WPF::g_pProcessHeap,
         56LL,
         a3);
  if ( v6 )
  {
    v7 = *(_QWORD *)((char *)a4 + 4);
    v8 = *((_QWORD *)this + 5);
    *(_WORD *)(v6 + 32) = 0;
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &CResponseItem::`vftable';
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 16) = 1;
    *(_QWORD *)(v6 + 24) = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *(_QWORD *)(v6 + 40) = v7;
    *(_QWORD *)v6 = &CEventResponse::`vftable';
    *(_BYTE *)(v6 + 48) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( *((_DWORD *)a4 + 3) )
    {
      v9 = *(CFrameInfo **)(*((_QWORD *)this + 64) + 21928LL);
      if ( v9 )
      {
        v10 = CFrameInfo::AddResponse(v9, (struct CResponseItem *)v6);
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x8E5u);
      }
    }
    CResponseItem::ReleaseResponseRef((CResponseItem *)v6);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x72Cu);
    SetEvent(*(HANDLE *)((char *)a4 + 4));
    CloseHandle(*(HANDLE *)((char *)a4 + 4));
  }
  return 0LL;
}
