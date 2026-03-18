/*
 * XREFs of ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800AE480
 * Callers:
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AE0D8 (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x1800F4780 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800AE7F0 (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 */

__int64 __fastcall CFlipChain::WriteSharedDataToDwm(CFlipChain *this)
{
  __int64 v1; // r9
  unsigned int v2; // esi
  int v3; // edx
  __int64 v4; // rax
  int updated; // eax
  _DWORD v7[4]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v8; // [rsp+48h] [rbp+7h]
  __int64 v9; // [rsp+50h] [rbp+Fh]
  __int64 v10; // [rsp+58h] [rbp+17h]
  __int64 v11; // [rsp+60h] [rbp+1Fh]
  CFlipChain *v12; // [rsp+68h] [rbp+27h]
  char v13; // [rsp+70h] [rbp+2Fh]
  __int64 v14; // [rsp+74h] [rbp+33h]
  __int64 v15; // [rsp+80h] [rbp+3Fh]
  int v16; // [rsp+88h] [rbp+47h]
  __int64 v17; // [rsp+90h] [rbp+4Fh]

  v1 = *((_QWORD *)this + 25);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 48);
    v7[1] = *((_DWORD *)this + 38);
    v7[2] = *((_DWORD *)this + 26);
    v8 = *((_QWORD *)this + 21);
    v9 = 0LL;
    v4 = *((_QWORD *)this + 4);
    v7[0] = v3;
    HIDWORD(v9) = v3;
    v12 = this;
    v11 = *(_QWORD *)(v4 + 328);
    v13 ^= (v13 ^ *((_BYTE *)this + 272)) & 3;
    v14 = *((_QWORD *)this + 31);
    v15 = *((_QWORD *)this + 32);
    LODWORD(v9) = *((_DWORD *)this + 44);
    v10 = *((_QWORD *)this + 23);
    v16 = *((_DWORD *)this + 60);
    v17 = *((_QWORD *)this + 27);
    updated = CMrowWriter<SharedBufferDataFlipChain>::UpdateData(v1, v7);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x312u);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      0LL);
  }
  return v2;
}
