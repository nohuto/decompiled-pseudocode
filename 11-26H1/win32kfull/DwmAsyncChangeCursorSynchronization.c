/*
 * XREFs of DwmAsyncChangeCursorSynchronization @ 0x140346AD4
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z @ 0x1400F9C18 (-HandleRoutingStateAction@CursorApiRouter@@AEAAXW4RoutingStateActionNeeded@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncChangeCursorSynchronization(PVOID Object, int a2)
{
  unsigned int v3; // edi
  _DWORD v5[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+48h] [rbp-10h]
  int v8; // [rsp+4Ch] [rbp-Ch]

  v3 = -1073741823;
  if ( Object )
  {
    memset(v5, 0, sizeof(v5));
    v5[0] = 3145736;
    v6 = 0LL;
    v8 = a2;
    LOWORD(v5[1]) = 0x8000;
    v7 = 1073741920;
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
