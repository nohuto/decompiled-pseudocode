/*
 * XREFs of ?Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z @ 0x1800AE614
 * Callers:
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800AE7F0 (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall SharedBufferDataFlipChain::Copy(
        SharedBufferDataFlipChain *this,
        const struct SharedBufferDataFlipChain *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  size_t v4; // r15
  int v7; // eax
  void *v8; // rcx

  v2 = *((unsigned int *)a2 + 20);
  v3 = 0;
  v4 = 88 * v2;
  if ( (unsigned int)v2 <= *((_DWORD *)this + 20)
    || (v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, char *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
               WPF::g_pProcessHeap,
               (char *)this + 88,
               v4),
        v3 = v7,
        v7 >= 0) )
  {
    v8 = (void *)*((_QWORD *)this + 11);
    *(_OWORD *)this = *(_OWORD *)a2;
    *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
    *((_QWORD *)this + 10) = *((_QWORD *)a2 + 10);
    memcpy_0(v8, *((const void **)a2 + 11), v4);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7Bu);
  }
  return v3;
}
