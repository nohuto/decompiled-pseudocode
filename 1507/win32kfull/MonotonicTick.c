/*
 * XREFs of MonotonicTick @ 0x1C004B514
 * Callers:
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     UnqueueMouseEvent @ 0x1C004B444 (UnqueueMouseEvent.c)
 *     ProcessMouseInputViaRim @ 0x1C012D104 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01D9FE0 (ProcessMouseInput.c)
 *     StartDeviceRead @ 0x1C01E0354 (StartDeviceRead.c)
 * Callees:
 *     <none>
 */

__int64 MonotonicTick()
{
  unsigned __int64 v0; // rcx
  __int64 result; // rax

  v0 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  if ( (v0 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64 > (unsigned __int64)qword_1C0322D58 )
  {
    result = (v0 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    qword_1C0322D58 = result;
  }
  else
  {
    return ++qword_1C0322D58;
  }
  return result;
}
