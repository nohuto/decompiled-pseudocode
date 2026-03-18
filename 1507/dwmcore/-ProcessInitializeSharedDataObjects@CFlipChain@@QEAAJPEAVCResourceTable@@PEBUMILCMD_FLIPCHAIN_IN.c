/*
 * XREFs of ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010960C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180108CE8 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?Create@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@SAJPEAUSharedBufferDataFlipChain@@PEAPEAV1@@Z @ 0x180108E88 (-Create@-$CLocalMrowWriter@USharedBufferDataFlipChain@@@@SAJPEAUSharedBufferDataFlipChain@@PEAPE.c)
 *     ?ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ @ 0x1801098BC (-ReadSharedDataFromDwm@CFlipChain@@AEAAXXZ.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180109984 (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x18010A234 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 */

__int64 __fastcall CFlipChain::ProcessInitializeSharedDataObjects(
        CFlipChain *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS *a3)
{
  _QWORD *v3; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // r14
  _QWORD *v6; // r15
  __int64 v8; // r12
  int v9; // eax
  int v10; // ebx
  void (__fastcall ***v11)(_QWORD, __int64); // r14
  __int64 v12; // rax
  _QWORD *v13; // r14
  int v14; // eax
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0LL;
  v3 = (_QWORD *)((char *)this + 200);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 25);
  v6 = (_QWORD *)*((_QWORD *)a3 + 5);
  v8 = *((_QWORD *)a3 + 4);
  if ( v4 )
  {
    (**v4)(*((_QWORD *)this + 25), 1LL);
    *v3 = 0LL;
  }
  v9 = CLocalMrowWriter<SharedBufferDataFlipChain>::Create((__int64)this, v3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    CFlipChain::ReadSharedDataFromDwm(this);
    v11 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 26);
    if ( v11 )
    {
      (**v11)(*((_QWORD *)this + 26), 1LL);
      *((_QWORD *)this + 26) = 0LL;
    }
    CFlipChain::ReleaseDeviceResources(this);
    v12 = *((_QWORD *)this + 21);
    *((_QWORD *)this + 26) = v8;
    *v6 = v12;
    ++*(_DWORD *)v6;
    v6[1] = *((_QWORD *)this + 22);
    *((_DWORD *)this + 26) = 0;
    v13 = (_QWORD *)*((_QWORD *)a3 + 6);
    *v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v3 + 48LL))(*v3, &v16);
    v10 = v14;
    if ( v14 >= 0 )
    {
      *v13 = v16;
      CFlipChain::CacheSharedHandlesForRect(this, *((_DWORD *)a3 + 3), (const RECT *)a3 + 1);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x182u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x168u);
  }
  **((_DWORD **)a3 + 7) = v10;
  CFlipChain::WriteSharedDataToDwm(this);
  return 0LL;
}
