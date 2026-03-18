/*
 * XREFs of EtwpPrepareDirtyBuffer @ 0x14006364C
 * Callers:
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     EtwpFlushActiveBuffers @ 0x1404A1BD0 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1406E7FB0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpPrepareDirtyBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 12) & 0x400) != 0 )
    return EtwpEnqueueFreeBuffer(a1);
  *(_DWORD *)(a2 + 44) = 3;
  result = (*(__int64 (**)(void))(a1 + 40))();
  *(_QWORD *)(a2 + 16) = result;
  return result;
}
