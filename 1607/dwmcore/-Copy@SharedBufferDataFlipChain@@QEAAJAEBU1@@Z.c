/*
 * XREFs of ?Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z @ 0x1800AA3EC
 * Callers:
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800A9470 (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SharedBufferDataFlipChain::Copy(
        SharedBufferDataFlipChain *this,
        const struct SharedBufferDataFlipChain *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  size_t v4; // rbp
  int v7; // eax
  void *v8; // rcx

  v2 = *((unsigned int *)a2 + 20);
  v3 = 0;
  v4 = 88 * v2;
  if ( (unsigned int)v2 <= *((_DWORD *)this + 20)
    || (v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, char *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
               WPF::g_pProcessHeap,
               (char *)this + 88,
               88 * v2),
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
