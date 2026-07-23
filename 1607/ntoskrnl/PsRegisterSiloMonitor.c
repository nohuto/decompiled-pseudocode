/*
 * XREFs of PsRegisterSiloMonitor @ 0x1405523D8
 * Callers:
 *     CmpInitServerSilo @ 0x1407AE8A8 (CmpInitServerSilo.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsGetCurrentSilo @ 0x140405240 (PsGetCurrentSilo.c)
 *     PspStorageAllocSlot @ 0x1405524D8 (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsRegisterSiloMonitor(__int64 a1, _QWORD *a2)
{
  _WORD *v4; // rax
  __int64 CurrentSilo; // rax
  __int64 v6; // rbp
  char *PoolWithTag; // rax
  char *v8; // rdi
  int v9; // ebx

  if ( !*(_BYTE *)a1 )
    return 3221225485LL;
  v4 = *(_WORD **)(a1 + 8);
  if ( !v4 || !*v4 || !*(_QWORD *)(a1 + 16) && !*(_QWORD *)(a1 + 24) )
    return 3221225485LL;
  CurrentSilo = PsGetCurrentSilo();
  if ( !PsIsHostSilo(CurrentSilo) )
    return 3221225569LL;
  v6 = **(unsigned __int16 **)(a1 + 8);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6 + 56, 0x4D6C6953u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v6 + 56);
  v8[16] = *(_BYTE *)(a1 + 1);
  v8[17] = *(_BYTE *)(a1 + 2);
  *((_QWORD *)v8 + 3) = *(_QWORD *)(a1 + 16);
  *((_QWORD *)v8 + 4) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)v8 + 6) = v8 + 56;
  *((_WORD *)v8 + 21) = v6;
  RtlCopyUnicodeString((PUNICODE_STRING)(v8 + 40), *(PCUNICODE_STRING *)(a1 + 8));
  v9 = PspStorageAllocSlot(v8 + 20);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0x4D6C6953u);
    return (unsigned int)v9;
  }
  else
  {
    *a2 = v8;
    return 0LL;
  }
}
