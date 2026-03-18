/*
 * XREFs of ?PublishFocusChange@@YAXXZ @ 0x1C0081838
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C0081354 (xxxSetForegroundThreadWithWindowHint.c)
 * Callees:
 *     <none>
 */

void PublishFocusChange(void)
{
  int v0; // [rsp+50h] [rbp+8h] BYREF

  if ( gSessionId && !gProtocolType )
  {
    v0 = 0;
    if ( gptiForeground )
      v0 = *(_DWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 56LL);
    ZwUpdateWnfStateData(&WNF_SHEL_FOCUS_CHANGE, &v0, 4LL);
  }
}
