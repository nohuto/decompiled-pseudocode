/*
 * XREFs of ?PublishFocusChange@@YAXXZ @ 0x1C00A96D8
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C00A7D88 (xxxSetForegroundThreadWithWindowHint.c)
 * Callees:
 *     <none>
 */

void PublishFocusChange(void)
{
  int v0; // [rsp+50h] [rbp+8h] BYREF

  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    v0 = 0;
    if ( gptiForeground )
      v0 = *(_DWORD *)(*(_QWORD *)(gptiForeground + 376LL) + 56LL);
    ZwUpdateWnfStateData(&WNF_SHEL_FOCUS_CHANGE, &v0, 4LL);
  }
}
