/*
 * XREFs of DbgkpFreeDebugEvent @ 0x1405EE7B0
 * Callers:
 *     DbgkpWakeTarget @ 0x1405EF9A0 (DbgkpWakeTarget.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 */

void __fastcall DbgkpFreeDebugEvent(__int64 a1)
{
  int v1; // eax
  void *v3; // rcx

  v1 = *(_DWORD *)(a1 + 128);
  if ( v1 == 2 )
  {
    v3 = *(void **)(a1 + 144);
  }
  else
  {
    if ( v1 != 5 )
      goto LABEL_7;
    v3 = *(void **)(a1 + 136);
  }
  if ( v3 )
    ObCloseHandle(v3, 0);
LABEL_7:
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 56), 0x4F676244u);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 64), 0x4F676244u);
  ExFreePoolWithTag((PVOID)a1, 0);
}
