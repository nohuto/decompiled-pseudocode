/*
 * XREFs of ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800AA678
 * Callers:
 *     ??1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ @ 0x1800AA89C (--1CSyncSharedDataGuard@CFlipChain@@QEAA@XZ.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x18010BD38 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800A9470 (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipChain::WriteSharedDataToDwm(CFlipChain *this)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v4; // rax
  int updated; // eax
  _DWORD v7[4]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v8; // [rsp+40h] [rbp+7h]
  __int64 v9; // [rsp+48h] [rbp+Fh]
  __int64 v10; // [rsp+50h] [rbp+17h]
  __int64 v11; // [rsp+58h] [rbp+1Fh]
  CFlipChain *v12; // [rsp+60h] [rbp+27h]
  char v13; // [rsp+68h] [rbp+2Fh]
  __int64 v14; // [rsp+6Ch] [rbp+33h]
  __int64 v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+80h] [rbp+47h]
  __int64 v17; // [rsp+88h] [rbp+4Fh]

  v1 = *((_QWORD *)this + 34);
  v2 = 0;
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 66);
    v7[1] = *((_DWORD *)this + 56);
    v7[2] = *((_DWORD *)this + 44);
    v8 = *((_QWORD *)this + 30);
    v9 = 0LL;
    v4 = *((_QWORD *)this + 4);
    v7[0] = v3;
    HIDWORD(v9) = v3;
    v12 = this;
    v11 = *(_QWORD *)(v4 + 328);
    v13 ^= (v13 ^ *((_BYTE *)this + 344)) & 3;
    v14 = *((_QWORD *)this + 40);
    v15 = *((_QWORD *)this + 41);
    LODWORD(v9) = *((_DWORD *)this + 62);
    v10 = *((_QWORD *)this + 32);
    v16 = *((_DWORD *)this + 78);
    v17 = *((_QWORD *)this + 36);
    updated = CMrowWriter<SharedBufferDataFlipChain>::UpdateData(v1, (const struct SharedBufferDataFlipChain *)v7);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x312u);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      0LL);
  }
  return v2;
}
