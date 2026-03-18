/*
 * XREFs of InvokeInterpreter @ 0x1C00EE7E4
 * Callers:
 *     itrp_LOOPCALL @ 0x1C00EE630 (itrp_LOOPCALL.c)
 *     itrp_CALL_helper @ 0x1C02DCD00 (itrp_CALL_helper.c)
 *     itrp_IDefPatch @ 0x1C02DD490 (itrp_IDefPatch.c)
 * Callees:
 *     <none>
 */

void __fastcall InvokeInterpreter(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      itrp_InnerExecute(a2, a3);
    else
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
  }
  else
  {
    itrp_InnerTraceExecute(a2, a3);
  }
}
