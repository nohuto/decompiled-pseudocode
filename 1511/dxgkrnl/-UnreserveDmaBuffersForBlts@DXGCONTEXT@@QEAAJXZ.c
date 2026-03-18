/*
 * XREFs of ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C014CF30
 * Callers:
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C014C5C8 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0158D5C (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::UnreserveDmaBuffersForBlts(DXGCONTEXT *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 i; // rdi
  __int64 v5; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 5183LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_QWORD *)this + 37) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 76); i = (unsigned int)(i + 1) )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 37) + 8 * i);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 424LL)
                                                            + 8LL)
                                                + 480LL))(
          v5,
          0LL);
        *(_QWORD *)(*((_QWORD *)this + 37) + 8 * i) = 0LL;
      }
    }
    *((_QWORD *)this + 37) = 0LL;
    *((_DWORD *)this + 76) = 0;
  }
  return 0LL;
}
