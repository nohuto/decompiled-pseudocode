/*
 * XREFs of ?MilChannel_FreeSyncCommandReplay@@YAJPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z @ 0x1800FF330
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilChannel_FreeSyncCommandReplay(struct MIL_CHANNEL__ *a1, struct MIL_MESSAGE *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a1 )
  {
    v4 = 577;
LABEL_5:
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v4);
    return v2;
  }
  if ( !a2 )
  {
    v4 = 578;
    goto LABEL_5;
  }
  if ( *(_DWORD *)a2 == 17
    && *((int *)a2 + 2) >= 0
    && *((_DWORD *)a2 + 4)
    && *(struct MIL_MESSAGE **)((char *)a2 + 20) != (struct MIL_MESSAGE *)((char *)a2 + 28) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)((char *)a2 + 20));
  }
  return v2;
}
