/*
 * XREFs of DebugHelp @ 0x1C00434C0
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugHelp(__int64 a1, const char *a2, int a3)
{
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+44h] [rbp+Ch]

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    strncpy_s((char *)&v4, 8uLL, a2, 8uLL);
    PrintDebugMessage(0, v4, v5, 0, 0LL);
  }
  else if ( !a3 )
  {
    PrintDebugMessage(0, -1, 0, 0, 0LL);
  }
  return 0LL;
}
