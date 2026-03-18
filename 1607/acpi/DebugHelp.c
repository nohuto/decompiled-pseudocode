/*
 * XREFs of DebugHelp @ 0x1C005AB90
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugHelp(__int64 a1, const char *a2, int a3)
{
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+44h] [rbp+Ch]

  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    strncpy_s((char *)&v4, 8uLL, a2, 8uLL);
    PrintDebugMessage(0, (const void *)v4, (const void *)v5, 0LL, 0LL);
  }
  else if ( !a3 )
  {
    PrintDebugMessage(0, (const void *)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
