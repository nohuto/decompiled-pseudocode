/*
 * XREFs of ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007305C
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007A3A0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C007A574 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C000239C (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_pqqqqqqqqppp @ 0x1C001CAA4 (Template_pqqqqqqqqppp.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00922DC (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyContext(DXGCONTEXT *this, PERESOURCE **a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  char *v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  char v17; // si
  __int64 v18; // rcx
  __int64 v19; // rcx
  char v20; // di
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rdx
  char **v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  __int128 v28; // xmm1
  int v29; // r11d
  int v30; // edi
  __int128 v31; // [rsp+80h] [rbp-38h] BYREF
  __int128 v32; // [rsp+90h] [rbp-28h]

  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 80));
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v25 + 24) = 1150LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]);
  if ( !*((_BYTE *)this + 348) )
  {
    v9 = *((_QWORD *)this + 2);
    v10 = (char *)this + 144;
    *((_BYTE *)this + 348) = 1;
    v11 = *(_QWORD *)(v9 + 16);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 568, 0LL);
    *(_QWORD *)(v11 + 576) = KeGetCurrentThread();
    v12 = *((_QWORD *)this + 18);
    if ( v12 )
    {
      v24 = (char **)*((_QWORD *)this + 19);
      if ( *(char **)(v12 + 8) != v10 || *v24 != v10 )
        __fastfail(3u);
      *v24 = (char *)v12;
      *(_QWORD *)(v12 + 8) = v24;
      --*(_DWORD *)(v11 + 560);
    }
    *(_QWORD *)(v11 + 576) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 568, 0LL);
    KeLeaveCriticalRegion();
    v16 = *((_QWORD *)this + 29);
    if ( v16 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 960LL))();
      *((_QWORD *)this + 29) = 0LL;
    }
    if ( *((_QWORD *)this + 27) || *((_QWORD *)this + 28) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
      {
        v17 = 0;
      }
      else
      {
        v17 = 1;
        if ( *((_BYTE *)a2 + 64) )
          COREACCESS::Release((COREACCESS *)(a2 + 4));
        COREACCESS::Release((COREACCESS *)(a2 + 1));
      }
      v18 = *((_QWORD *)this + 27);
      v31 = 7uLL;
      if ( v18 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 376LL)
                                                                + 8LL)
                                                    + 240LL))(
          v18,
          &v31);
      v19 = *((_QWORD *)this + 28);
      if ( v19 )
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 376LL)
                                                                + 8LL)
                                                    + 240LL))(
          v19,
          &v31);
      if ( v17 )
      {
        COREACCESS::AcquireShared((COREACCESS *)(a2 + 1));
        if ( *((_BYTE *)a2 + 64) )
          COREACCESS::AcquireShared((COREACCESS *)(a2 + 4));
      }
      if ( *((DXGCONTEXT **)this + 33) != (DXGCONTEXT *)((char *)this + 264)
        || (v20 = 0, *(_QWORD *)(*((_QWORD *)this + 2) + 576LL) != *((_QWORD *)this + 2) + 576LL) )
      {
        v20 = 1;
      }
      v21 = *((_QWORD *)this + 27);
      if ( v21 && v20 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 376LL)
                                                            + 8LL)
                                                + 248LL))(
          v21,
          0LL);
      v16 = *((_QWORD *)this + 28);
      if ( v16 && v20 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 376LL)
                                                            + 8LL)
                                                + 248LL))(
          v16,
          0LL);
    }
    if ( *((_QWORD *)this + 35) )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v16, v13, v14, v15);
        *(_QWORD *)(v26 + 24) = 1232LL;
        WdLogEvent5_WdAssertion(v26);
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL)
                                     + 496LL))(*((_QWORD *)this + 35));
      (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                         + 8LL)
                                             + 480LL))(
        *((_QWORD *)this + 35),
        (char *)this + 312);
      *((_QWORD *)this + 35) = 0LL;
    }
    v22 = *((_QWORD *)this + 36);
    if ( v22 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL)
                                                          + 8LL)
                                              + 480LL))(
        v22,
        0LL);
      *((_QWORD *)this + 36) = 0LL;
    }
    if ( *((_QWORD *)this + 26) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 400LL) + 8LL) + 432LL))();
      *((_QWORD *)this + 26) = 0LL;
    }
    if ( *((_QWORD *)this + 27) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL) + 224LL))();
      *((_QWORD *)this + 27) = 0LL;
    }
    if ( *((_QWORD *)this + 28) )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 376LL) + 8LL) + 224LL))();
      *((_QWORD *)this + 28) = 0LL;
    }
    if ( (*((_DWORD *)this + 10) & 1) != 0 )
    {
      v23 = (void *)*((_QWORD *)this + 21);
      if ( v23 )
      {
        ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v23);
        *((_QWORD *)this + 21) = 0LL;
      }
    }
    if ( bTracingEnabled )
    {
      v27 = *((_QWORD *)this + 2);
      v28 = *((_OWORD *)this + 12);
      v29 = *((_DWORD *)this + 81);
      v30 = *((_DWORD *)this + 80);
      v31 = *((_OWORD *)this + 11);
      v32 = v28;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_pqqqqqqqqppp(
          DWORD1(v31),
          &EventDestroyContext,
          v31,
          v27,
          v30,
          v29,
          (_DWORD)v31,
          DWORD1(v31),
          DWORD2(v31),
          HIDWORD(v31),
          (_DWORD)v32,
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
