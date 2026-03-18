/*
 * XREFs of ?Insert@?$CQueue@PEAVCBufferedInteractionOutput@@@@AEAAJ_NPEAVCBufferedInteractionOutput@@@Z @ 0x1801703AC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18016B11C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18016FB44 (-AddBufferedOutput@CInteractionContextWrapper@@AEAAJII_KPEBUINTERACTION_CONTEXT_OUTPUT@@@Z.c)
 *     ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801722B4 (-RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CQueue<CBufferedInteractionOutput *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  int v6; // r9d
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( *(_BYTE *)(a1 + 20) )
  {
    v6 = -2147023781;
    v10 = 152;
LABEL_3:
    v5 = v6;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v10);
    goto LABEL_12;
  }
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   24LL);
  if ( v7 )
  {
    *v7 = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
  {
    v6 = -2147024882;
    v10 = 155;
    goto LABEL_3;
  }
  v7[2] = a3;
  v8 = *(_QWORD **)(a1 + 8);
  if ( *v8 != a1 )
    __fastfail(3u);
  *v7 = a1;
  v7[1] = v8;
  *v8 = v7;
  *(_QWORD *)(a1 + 8) = v7;
  ++*(_DWORD *)(a1 + 16);
LABEL_12:
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return v5;
}
