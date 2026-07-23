/*
 * XREFs of EtwpFreePlaceholderList @ 0x1400876B8
 * Callers:
 *     EtwpFreeCompression @ 0x1400875AC (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x14022AA50 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 992);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 992) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
