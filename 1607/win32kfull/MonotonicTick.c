/*
 * XREFs of MonotonicTick @ 0x1C00E15A4
 * Callers:
 *     ProcessMouseInputViaRim @ 0x1C00E0064 (ProcessMouseInputViaRim.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     UnqueueMouseEvent @ 0x1C00E14C8 (UnqueueMouseEvent.c)
 *     StartDeviceRead @ 0x1C01D6BC0 (StartDeviceRead.c)
 * Callees:
 *     <none>
 */

__int64 MonotonicTick()
{
  unsigned __int64 v0; // rcx
  __int64 result; // rax

  v0 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  if ( (v0 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64 > (unsigned __int64)qword_1C0328F60 )
  {
    result = (v0 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    qword_1C0328F60 = result;
  }
  else
  {
    return ++qword_1C0328F60;
  }
  return result;
}
