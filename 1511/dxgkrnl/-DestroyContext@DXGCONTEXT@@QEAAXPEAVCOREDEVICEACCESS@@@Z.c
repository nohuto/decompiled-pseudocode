/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0084B64
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006D8D0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C006DABC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C0003040 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqqqqqqqppp @ 0x1C001CDB8 (Template_pqqqqqqqqppp.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0068B2C (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  char *v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // si
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // di
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rdx
  char **v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r9
  __int128 v23; // xmm1
  int v24; // r11d
  int v25; // edi
  __int128 v26; // [rsp+80h] [rbp-38h] BYREF
  __int128 v27; // [rsp+90h] [rbp-28h]

  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 80));
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v20 + 24) = 1161LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]);
  if ( !*((_BYTE *)this + 348) )
  {
    v6 = *((_QWORD *)this + 2);
    v7 = (char *)this + 144;
    *((_BYTE *)this + 348) = 1;
    v8 = *(_QWORD *)(v6 + 16);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v8 + 640, 0LL);
    *(_QWORD *)(v8 + 648) = KeGetCurrentThread();
    v9 = *((_QWORD *)this + 18);
    if ( v9 )
    {
      v19 = (char **)*((_QWORD *)this + 19);
      if ( *(char **)(v9 + 8) != v7 || *v19 != v7 )
        __fastfail(3u);
      *v19 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v19;
      --*(_DWORD *)(v8 + 632);
    }
    *(_QWORD *)(v8 + 648) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 640, 0LL);
    KeLeaveCriticalRegion();
    v11 = *((_QWORD *)this + 29);
    if ( v11 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 968LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    if ( *((_QWORD *)this + 27) || *((_QWORD *)this + 28) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
      {
        v12 = 0;
      }
      else
      {
        v12 = 1;
        if ( *((_BYTE *)a2 + 64) )
          COREACCESS::Release((COREACCESS *)(a2 + 4));
        COREACCESS::Release((COREACCESS *)(a2 + 1));
      }
      v13 = *((_QWORD *)this + 27);
      v26 = 9uLL;
      if ( v13 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 400LL)
                                                                + 8LL)
                                                    + 240LL))(
          v13,
          &v26);
      v14 = *((_QWORD *)this + 28);
      if ( v14 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 400LL)
                                                                + 8LL)
                                                    + 240LL))(
          v14,
          &v26);
      if ( v12 )
      {
        COREACCESS::AcquireShared((COREACCESS *)(a2 + 1));
        if ( *((_BYTE *)a2 + 64) )
          COREACCESS::AcquireShared((COREACCESS *)(a2 + 4));
      }
      if ( *((DXGCONTEXT **)this + 33) != (DXGCONTEXT *)((char *)this + 264)
        || (v15 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 576LL) != *((_QWORD *)this + 2) + 576LL) )
      {
        v15 = 1;
      }
      v16 = *((_QWORD *)this + 27);
      if ( v16 && v15 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 400LL)
                                                            + 8LL)
                                                + 248LL))(
          v16,
          0LL);
      v11 = *((_QWORD *)this + 28);
      if ( v11 && v15 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 400LL)
                                                            + 8LL)
                                                + 248LL))(
          v11,
          0LL);
    }
    if ( *((_QWORD *)this + 35) )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v11);
        *(_QWORD *)(v21 + 24) = 1243LL;
        WdLogEvent5_WdAssertion(v21);
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL)
                                     + 496LL))(*((_QWORD *)this + 35));
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                         + 8LL)
                                             + 480LL))(
        *((_QWORD *)this + 35),
        (char *)this + 312);
      *((_QWORD *)this + 35) = 0LL;
    }
    v17 = *((_QWORD *)this + 36);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL)
                                                          + 8LL)
                                              + 480LL))(
        v17,
        0LL);
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( *((_QWORD *)this + 26) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL) + 432LL))();
      *((_QWORD *)this + 26) = 0LL;
    }
    if ( *((_QWORD *)this + 27) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 224LL))();
      *((_QWORD *)this + 27) = 0LL;
    }
    if ( *((_QWORD *)this + 28) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 224LL))();
      *((_QWORD *)this + 28) = 0LL;
    }
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v18 = (void *)*((_QWORD *)this + 21);
      if ( v18 )
      {
        ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v18, v10);
        *((_QWORD *)this + 21) = 0LL;
      }
    }
    if ( bTracingEnabled )
    {
      v22 = *((_QWORD *)this + 2);
      v23 = *((_OWORD *)this + 12);
      v24 = *((_DWORD *)this + 81);
      v25 = *((_DWORD *)this + 80);
      v26 = *((_OWORD *)this + 11);
      v27 = v23;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_pqqqqqqqqppp(
          DWORD1(v26),
          &EventDestroyContext,
          v26,
          v22,
          v25,
          v24,
          (_DWORD)v26,
          DWORD1(v26),
          DWORD2(v26),
          HIDWORD(v26),
          (_DWORD)v27,
          0,
          this,
          0LL,
          0LL);
    }
    if ( !*((_BYTE *)this + 349) )
      DXGADAPTER::NotifyContextCreation(
        *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
        this,
        0,
        *((_DWORD *)this + 80));
  }
}
