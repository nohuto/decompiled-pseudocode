/*
 * XREFs of SepIdAssignableAsGroup @ 0x14069122C
 * Callers:
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 */

BOOLEAN __fastcall SepIdAssignableAsGroup(__int64 a1, void *a2)
{
  BOOLEAN v2; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // edi
  unsigned int v8; // r14d
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v2 = 0;
  if ( !a2 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v8 = *(_DWORD *)(a1 + 124);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 152);
    do
    {
      v2 = RtlEqualSid(a2, *(PSID *)(v9 + 16LL * v7));
      if ( v2 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v2;
}
