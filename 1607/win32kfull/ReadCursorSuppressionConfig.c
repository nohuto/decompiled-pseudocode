/*
 * XREFs of ReadCursorSuppressionConfig @ 0x1C0134940
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C0093FF0 (TransitionCursorSuppressionState.c)
 * Callees:
 *     <none>
 */

__int64 ReadCursorSuppressionConfig()
{
  unsigned int v0; // ebx
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    FastGetProfileDwordW(0LL, 49LL, L"EnableCursorSuppression", 0LL, &v2, 0);
    return v2 != 0;
  }
  return v0;
}
