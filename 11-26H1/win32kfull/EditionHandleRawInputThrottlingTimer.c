/*
 * XREFs of EditionHandleRawInputThrottlingTimer @ 0x1401AB950
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x1401ABC8C (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     RawInputRequestedForMouse @ 0x1401ABFA8 (RawInputRequestedForMouse.c)
 */

void EditionHandleRawInputThrottlingTimer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  struct tagPROCESS_HID_TABLE **v2; // rdi
  struct tagPROCESS_HID_TABLE *i; // rbx

  if ( (unsigned int)RawInputRequestedForMouse() )
  {
    v2 = (struct tagPROCESS_HID_TABLE **)(W32GetUserSessionState(v1, v0) + 224);
    for ( i = *v2; i != (struct tagPROCESS_HID_TABLE *)v2; i = *(struct tagPROCESS_HID_TABLE **)i )
      FlushThrottledRawMouseInput(i, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  }
}
