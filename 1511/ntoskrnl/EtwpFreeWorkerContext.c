/*
 * XREFs of EtwpFreeWorkerContext @ 0x1400F3FC4
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall EtwpFreeWorkerContext(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  ExFreePoolWithTag(a1, 0x4C777445u);
}
