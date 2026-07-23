/*
 * XREFs of CmpFreeCallbackContext @ 0x1401A9E0C
 * Callers:
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpFreeCallbackContext(_SLIST_ENTRY *a1)
{
  unsigned int v1; // edx

  v1 = CmpCallBackCount * KeNumberProcessors_0;
  if ( (unsigned int)(CmpCallBackCount * KeNumberProcessors_0) > 0x40 )
    v1 = 64;
  if ( LOWORD(CmpCallbackContextSList.Alignment) >= v1 )
    ExFreePoolWithTag(a1, 0);
  else
    RtlpInterlockedPushEntrySList(&CmpCallbackContextSList, a1);
}
