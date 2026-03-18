/*
 * XREFs of ?MilChannel_FreeSyncCommandReplay@@YAJPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z @ 0x1800E0C10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
