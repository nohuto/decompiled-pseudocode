/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x14009C2E4
 * Callers:
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x140471024 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x140664ED8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    return EtwpEnqueueFreeBuffer();
  *(_DWORD *)(a2 + 44) = 3;
  result = (*(__int64 (**)(void))(a1 + 40))();
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
