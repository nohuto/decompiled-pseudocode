/*
 * XREFs of ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C01492B0
 * Callers:
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C01488F0 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01549EC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::UnreserveDmaBuffersForBlts(DXGCONTEXT *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 i; // rdi
  __int64 v8; // rcx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 5219LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 37) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 76); i = (unsigned int)(i + 1) )
    {
      v8 = *(_QWORD *)(*((_QWORD *)this + 37) + 8 * i);
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 400LL)
                                                            + 8LL)
                                                + 480LL))(
          v8,
          0LL);
        *(_QWORD *)(*((_QWORD *)this + 37) + 8 * i) = 0LL;
      }
    }
    *((_QWORD *)this + 37) = 0LL;
    *((_DWORD *)this + 76) = 0;
  }
  return 0LL;
}
