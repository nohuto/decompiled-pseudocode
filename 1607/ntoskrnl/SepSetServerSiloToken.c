/*
 * XREFs of SepSetServerSiloToken @ 0x14068D424
 * Callers:
 *     SepCopyClientTokenAndSetSilo @ 0x14068D15C (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1400807E0 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceLogonSessionSilo @ 0x1404785A4 (SepReferenceLogonSessionSilo.c)
 *     SepAddTokenLogonSession @ 0x140693730 (SepAddTokenLogonSession.c)
 *     SepRemoveTokenLogonSession @ 0x140693AF8 (SepRemoveTokenLogonSession.c)
 */

__int64 __fastcall SepSetServerSiloToken(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v7, 0);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
  {
    v5 = -1073741816;
  }
  else
  {
    v5 = SepReferenceLogonSessionSilo((_DWORD *)(a1 + 24), a2, &v8);
    if ( v5 < 0 )
      goto LABEL_10;
    if ( SeTokenLeakTracking )
      SepRemoveTokenLogonSession(a1);
    SepDeReferenceLogonSessionDirect(*(_QWORD **)(a1 + 216));
    *(_QWORD *)(a1 + 216) = v8;
    if ( SeTokenLeakTracking )
      SepAddTokenLogonSession();
  }
  if ( v5 >= 0 )
    *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_10:
  _InterlockedOr(v7, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
