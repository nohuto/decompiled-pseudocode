/*
 * XREFs of SeQueryServerSiloToken @ 0x1404B5B9C
 * Callers:
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x14065335C (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall SeQueryServerSiloToken(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741637;
  }
  else
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 160LL);
    v5 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return v5;
}
