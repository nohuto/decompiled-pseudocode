/*
 * XREFs of ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010BD38
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1800AA600 (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800AA678 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180141D98 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?Create@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@SAJPEAUSharedBufferDataFlipChain@@PEAPEAV1@@Z @ 0x180141F40 (-Create@-$CLocalMrowWriter@USharedBufferDataFlipChain@@@@SAJPEAUSharedBufferDataFlipChain@@PEAPE.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180142264 (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 */

__int64 __fastcall CFlipChain::ProcessInitializeSharedDataObjects(
        CFlipChain *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS *a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // r15
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  __int64 v8; // rbp
  int v9; // eax
  int v10; // esi
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  __int64 v12; // rax
  _QWORD *v13; // r15
  int v14; // eax
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0LL;
  v3 = (_QWORD *)((char *)this + 272);
  v4 = (_QWORD *)*((_QWORD *)a3 + 5);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 34);
  v8 = *((_QWORD *)a3 + 4);
  if ( v6 )
  {
    (**v6)(v6, 1LL);
    *v3 = 0LL;
  }
  v9 = CLocalMrowWriter<SharedBufferDataFlipChain>::Create(v6, v3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x168u);
  }
  else
  {
    CFlipChain::ReadSharedDataFromDwm(this);
    v11 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 35);
    if ( v11 )
    {
      (**v11)(v11, 1LL);
      *((_QWORD *)this + 35) = 0LL;
    }
    CFlipChain::ReleaseDeviceResources(this);
    v12 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 35) = v8;
    *v4 = v12;
    ++*(_DWORD *)v4;
    v4[1] = *((_QWORD *)this + 31);
    *((_DWORD *)this + 44) = 0;
    v13 = (_QWORD *)*((_QWORD *)a3 + 6);
    *v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v3 + 48LL))(*v3, &v16);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x182u);
    }
    else
    {
      *v13 = v16;
      CFlipChain::CacheSharedHandlesForRect(this);
    }
  }
  **((_DWORD **)a3 + 7) = v10;
  CFlipChain::WriteSharedDataToDwm(this);
  return 0LL;
}
