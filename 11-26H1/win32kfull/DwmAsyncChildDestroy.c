/*
 * XREFs of DwmAsyncChildDestroy @ 0x1401D38DC
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140038D64 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall DwmAsyncChildDestroy(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  _OWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-28h]

  v5 = -1073741823;
  IncrementDWMWindowUniqueness((__int64)Object, a2, a3);
  if ( Object )
  {
    memset(v7, 0, sizeof(v7));
    v8[0] = 0LL;
    LODWORD(v7[0]) = 3407884;
    WORD2(v7[0]) = 0x8000;
    LODWORD(v8[1]) = 1073741844;
    *(_QWORD *)((char *)&v8[1] + 4) = a2;
    EtwUpdateEvent(a2);
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
