/*
 * XREFs of CmpFreeCallbackContext @ 0x1401B31CC
 * Callers:
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpFreeCallbackContext(struct _SLIST_ENTRY *a1)
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
