/*
 * XREFs of ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0143F80
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C012D5E0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0144750 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01441EC (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0144900 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCompleteRecoveryContext(struct _TDR_RECOVERY_CONTEXT *a1, char a2, bool a3)
{
  __int64 v4; // rcx
  __int64 v7; // rcx

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 1992LL) + 400LL)
                                                          + 8LL)
                                              + 384LL))(
        v4,
        0LL);
    if ( *((_DWORD *)a1 + 4) != 6 )
    {
      v7 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(dword_1C0047324, 1u) + 1) & 0x3F);
      *((_QWORD *)&g_TdrHistory + v7 + 3) = *((_QWORD *)a1 + 13);
      *((_DWORD *)&g_TdrHistory + 2 * v7 + 8) = *((_DWORD *)a1 + 4);
      *(UUID *)((char *)&g_TdrHistory + 8 * v7 + 40) = *((UUID *)a1 + 3);
      *((_QWORD *)&g_TdrHistory + v7 + 7) = *((_QWORD *)a1 + 8);
    }
    DxgkLogCodePointPacket(0x18u, *((_DWORD *)a1 + 4), *(_DWORD *)(*((_QWORD *)a1 + 4) + 184LL), *((_DWORD *)a1 + 18));
    _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, 0LL, (signed __int64)a1);
    if ( a2 )
    {
      *((_DWORD *)a1 + 25) &= ~1u;
      TdrUpdateDbgReport(a1, 0);
    }
    TdrDereferenceRecoveryContext(a1, a3);
  }
}
