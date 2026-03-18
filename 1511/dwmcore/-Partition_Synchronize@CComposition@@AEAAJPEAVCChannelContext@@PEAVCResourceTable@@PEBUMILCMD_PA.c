/*
 * XREFs of ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x1800FB328
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x180101B38 (-AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z.c)
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
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v6 = &CResponseItem::`vftable';
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 16) = 1;
    *(_QWORD *)(v6 + 24) = v8;
    *(_WORD *)(v6 + 32) = 0;
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
      v9 = *(CFrameInfo **)(*((_QWORD *)this + 63) + 22304LL);
      if ( v9 )
      {
        v10 = CFrameInfo::AddResponse(v9, (struct CResponseItem *)v6);
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x99Au);
      }
    }
    CResponseItem::ReleaseResponseRef((CResponseItem *)v6);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x856u);
    SetEvent(*(HANDLE *)((char *)a4 + 4));
    CloseHandle(*(HANDLE *)((char *)a4 + 4));
  }
  return 0LL;
}
