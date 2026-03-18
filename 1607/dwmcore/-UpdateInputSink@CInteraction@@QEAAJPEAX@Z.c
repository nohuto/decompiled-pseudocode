/*
 * XREFs of ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x1800A47D4
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800A4958 (--1CInteraction@@MEAA@XZ.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800A4B4C (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z @ 0x1800A68E4 (-ReplaceInputHandle@CInputSinkStruct@@QEAAJPEAX@Z.c)
 *     ??_GCInputSinkStruct@@QEAAPEAXI@Z @ 0x1800A69C4 (--_GCInputSinkStruct@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::UpdateInputSink(CInteraction *this, void *a2)
{
  unsigned int v2; // ebx
  void *v3; // rsi
  CInputSinkStruct *v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rax
  int v8; // eax
  CInputSinkStruct *v10; // rcx

  v2 = 0;
  v3 = a2;
  if ( !a2 )
  {
    v5 = (CInputSinkStruct *)*((_QWORD *)this + 21);
    if ( !v5 )
      return v2;
    CInputSinkStruct::`scalar deleting destructor'(v5, 0);
    *((_QWORD *)this + 21) = 0LL;
    goto LABEL_9;
  }
  if ( *((_QWORD *)this + 21)
    || (v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
               WPF::g_pProcessHeap,
               56LL),
        (*((_QWORD *)this + 21) = v7) != 0LL) )
  {
    v8 = CInputSinkStruct::ReplaceInputHandle(*((CInputSinkStruct **)this + 21), v3);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x21Du);
    v3 = 0LL;
LABEL_9:
    if ( (v2 & 0x80000000) == 0 )
      return v2;
    goto LABEL_12;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x219u);
LABEL_12:
  if ( v3 )
    CloseHandle(v3);
  v10 = (CInputSinkStruct *)*((_QWORD *)this + 21);
  if ( v10 )
  {
    CInputSinkStruct::`scalar deleting destructor'(v10, v6);
    *((_QWORD *)this + 21) = 0LL;
  }
  return v2;
}
