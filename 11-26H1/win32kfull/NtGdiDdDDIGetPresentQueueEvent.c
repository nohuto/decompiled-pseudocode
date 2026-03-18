/*
 * XREFs of NtGdiDdDDIGetPresentQueueEvent @ 0x140348CB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtGdiDdDDIGetPresentQueueEvent(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v4; // edi
  int IsCurrentProcessDwm; // eax
  signed int PresentQueueEvent; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  Handle = 0LL;
  IsCurrentProcessDwm = UserUnsafeIsCurrentProcessDwm(a1, a2, a3);
  PresentQueueEvent = IsCurrentProcessDwm == 0 ? 0xC0000022 : 0;
  if ( IsCurrentProcessDwm )
    PresentQueueEvent = GreSfmGetPresentQueueEvent(v4, &Handle, (unsigned int)-IsCurrentProcessDwm);
  if ( PresentQueueEvent < 0 )
  {
    if ( Handle )
      ObCloseHandle(Handle, 1);
  }
  else
  {
    RtlCopyToUser(a2, &Handle, 8uLL);
  }
  return (unsigned int)PresentQueueEvent;
}
