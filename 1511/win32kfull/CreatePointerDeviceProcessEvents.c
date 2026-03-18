/*
 * XREFs of CreatePointerDeviceProcessEvents @ 0x1C009E2E0
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1C009E334 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 */

__int64 CreatePointerDeviceProcessEvents()
{
  __int64 result; // rax

  result = CreatePointerDeviceProcessEvent(
             0x100000u,
             1,
             1u,
             L"{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-running",
             &ghPntrProcRunningEvent);
  if ( (_DWORD)result )
    return CreatePointerDeviceProcessEvent(
             2u,
             0,
             0,
             L"{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-request",
             &ghPntrProcRequestEvent);
  return result;
}
