/*
 * XREFs of MonotonicTick @ 0x1C00856E4
 * Callers:
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     UnqueueMouseEvent @ 0x1C0085604 (UnqueueMouseEvent.c)
 *     ProcessMouseInputViaRim @ 0x1C014F024 (ProcessMouseInputViaRim.c)
 *     ProcessMouseInput @ 0x1C01DA5F0 (ProcessMouseInput.c)
 *     StartDeviceRead @ 0x1C01E0968 (StartDeviceRead.c)
 * Callees:
 *     <none>
 */

__int64 MonotonicTick()
{
  unsigned __int64 v0; // rcx
  __int64 result; // rax

  v0 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (unsigned int)v0 > dword_1C03238C0 )
  {
    result = (unsigned int)v0;
    dword_1C03238C0 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  else
  {
    return (unsigned int)++dword_1C03238C0;
  }
  return result;
}
