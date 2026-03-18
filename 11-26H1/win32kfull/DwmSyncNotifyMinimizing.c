/*
 * XREFs of DwmSyncNotifyMinimizing @ 0x14014A6DC
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     ?DwmSyncLPCAllowed@@YAJXZ @ 0x14014C610 (-DwmSyncLPCAllowed@@YAJXZ.c)
 */

__int64 __fastcall DwmSyncNotifyMinimizing(PVOID Object, __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  _OWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v8[4]; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+80h] [rbp+10h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v4 = DwmSyncLPCAllowed();
    if ( v4 >= 0 )
    {
      memset(v7, 0, sizeof(v7));
      v8[0] = 0LL;
      WORD2(v7[0]) = 0x8000;
      v9 = 52LL;
      LODWORD(v7[0]) = 3407884;
      LODWORD(v8[1]) = 1073741825;
      *(_QWORD *)((char *)&v8[1] + 4) = a2;
      v5 = ((__int64 (__fastcall *)(PVOID, __int64, _OWORD *, _OWORD *, __int64 *, _QWORD))LpcSendWaitReceivePort)(
             Object,
             0x20000LL,
             v7,
             v7,
             &v9,
             0LL);
      v4 = v5;
      if ( v5 >= 0 && (v5 == 192 || v5 == 258 || BYTE4(v7[0]) != 2) )
        v4 = -1073741823;
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
