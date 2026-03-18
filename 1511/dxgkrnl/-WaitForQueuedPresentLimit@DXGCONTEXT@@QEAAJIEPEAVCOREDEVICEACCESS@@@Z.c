/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C005BE80
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C007D300 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEA.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0086EC0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C016189C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01625E4 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rbx
  __int64 v10; // r8
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 80LL));
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 400LL)
                                                                              + 8LL)
                                                                  + 184LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
                  a2,
                  0LL);
  if ( (_DWORD)v8 != -1071775486 )
    goto LABEL_2;
  if ( !a3 )
    goto LABEL_7;
  COREDEVICEACCESS::Release(a4);
  LOBYTE(v10) = 1;
  v8 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 400LL)
                                                                  + 8LL)
                                                      + 184LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 544LL),
         a2,
         v10);
  v11 = COREDEVICEACCESS::AcquireShared(a4);
  if ( v11 >= 0 )
  {
LABEL_2:
    if ( (int)v8 >= 0 )
      return (unsigned int)v8;
LABEL_7:
    v13 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v13 + 24) = (int)v8;
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdEvent(v13);
    if ( (_DWORD)v8 != -1071775486 && (_DWORD)v8 != -1073741130 && (_DWORD)v8 != -1071775232 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v15 + 24) = 2049LL;
      WdLogEvent5_WdAssertion(v15);
    }
    return (unsigned int)v8;
  }
  v12 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v12 + 24) = v8;
  WdLogEvent5_WdEvent(v12);
  return (unsigned int)v11;
}
