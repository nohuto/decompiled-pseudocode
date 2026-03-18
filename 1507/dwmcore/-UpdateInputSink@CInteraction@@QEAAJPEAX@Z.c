/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x18005A1C4
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x18005A3DC (--1CInteraction@@MEAA@XZ.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x18005A5E4 (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x18005ACFC (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??_GCInputSinkStruct@@QEAAPEAXI@Z @ 0x18005ADD0 (--_GCInputSinkStruct@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  unsigned int v2; // ebx
  void *v3; // rbp
  CInputSinkStruct *v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rax
  int v8; // eax
  CInputSinkStruct *v10; // rcx

  v2 = 0;
  v3 = a2;
  if ( !a2 )
  {
    v5 = (CInputSinkStruct *)*((_QWORD *)this + 9);
    if ( !v5 )
      return v2;
    CInputSinkStruct::`scalar deleting destructor'(v5, 0);
    *((_QWORD *)this + 9) = 0LL;
    goto LABEL_9;
  }
  if ( *((_QWORD *)this + 9)
    || (v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
               WPF::g_pProcessHeap,
               56LL),
        (*((_QWORD *)this + 9) = v7) != 0LL) )
  {
    v8 = CInputSinkStruct::ReplaceInputHandle(*((CInputSinkStruct **)this + 9), v3);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x127u);
    v3 = 0LL;
LABEL_9:
    if ( (v2 & 0x80000000) == 0 )
      return v2;
    goto LABEL_12;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x123u);
LABEL_12:
  if ( v3 )
    CloseHandle(v3);
  v10 = (CInputSinkStruct *)*((_QWORD *)this + 9);
  if ( v10 )
  {
    CInputSinkStruct::`scalar deleting destructor'(v10, v6);
    *((_QWORD *)this + 9) = 0LL;
  }
  return v2;
}
