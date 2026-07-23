/*
 * XREFs of EtwpFreeFilterInfo @ 0x14048F784
 * Callers:
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x1406A9370 (EtwpFreeEventNameFilter.c)
 */

void __fastcall EtwpFreeFilterInfo(__int64 a1)
{
  PVOID *v2; // rdi
  __int64 v3; // rsi
  PVOID *v4; // rdi
  __int64 v5; // rsi
  void *v6; // rcx

  v2 = (PVOID *)a1;
  v3 = 3LL;
  do
  {
    if ( *v2 )
      ExFreePoolWithTag(*v2, 0);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = (PVOID *)(a1 + 24);
  v5 = 2LL;
  do
  {
    if ( *v4 )
      ExFreePoolWithTag(*v4, 0);
    ++v4;
    --v5;
  }
  while ( v5 );
  if ( *(_QWORD *)(a1 + 40) )
    EtwpFreeEventNameFilter();
  v6 = *(void **)(a1 + 48);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
