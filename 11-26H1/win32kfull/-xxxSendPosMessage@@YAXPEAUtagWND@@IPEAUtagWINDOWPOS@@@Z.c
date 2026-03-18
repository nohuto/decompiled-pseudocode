/*
 * XREFs of ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1401C89A4
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140260B0C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1401C8AC8 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxSendPosMessage(struct tagTHREADINFO **a1, unsigned int a2, struct tagWINDOWPOS *a3)
{
  __int64 v3; // r14
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v7 = PtiCurrent((__int64)a1);
  v8 = v7;
  if ( (*((_DWORD *)v7 + 340) & 0x40000) == 0 || v7 == a1[2] )
  {
    xxxSendTransformableMessageTimeout(a1, a2, 0LL, (__int64)a3, 0, 0, 0LL, 1u, 0);
LABEL_3:
    *(_QWORD *)a3 = v3;
    return;
  }
  if ( !tagQ::IsSingleThreadAttached(*((tagQ **)v7 + 58)) )
    goto LABEL_6;
  v9 = *((_QWORD *)v8 + 199);
  if ( !v9 )
    goto LABEL_6;
  if ( *(struct tagTHREADINFO **)(v9 + 16) == v8 )
  {
    LODWORD(v10) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 370LL);
  }
  if ( *(struct tagTHREADINFO **)(*((_QWORD *)v8 + 199) + 16LL) != a1[2] )
  {
LABEL_6:
    v10 = 0LL;
    xxxSendTransformableMessageTimeout(a1, a2, 0LL, (__int64)a3, 2u, 0x64u, &v10, 1u, 0);
    goto LABEL_3;
  }
}
