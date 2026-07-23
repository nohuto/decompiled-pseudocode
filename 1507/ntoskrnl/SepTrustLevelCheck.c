/*
 * XREFs of SepTrustLevelCheck @ 0x1400CE734
 * Callers:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     SepGetProcessTrustLabelAce @ 0x1400CE7B0 (SepGetProcessTrustLabelAce.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     SeUnlockSubjectContext @ 0x1404C52E0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1404C5390 (SeLockSubjectContext.c)
 */

__int64 __fastcall SepTrustLevelCheck(
        __int64 a1,
        __int64 a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        __int64 a4,
        PSID Sid1,
        char a6,
        int *a7)
{
  NTSTATUS v7; // esi
  char v8; // r15
  __int64 ProcessTrustLabelAce; // rax
  int v13; // r14d
  void *v14; // r12
  struct _KTHREAD *CurrentThread; // rax
  PSID v16; // rbp
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  BOOLEAN v19[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 DominatesTrust; // [rsp+60h] [rbp+8h] BYREF

  DominatesTrust = a1;
  v7 = 0;
  v19[0] = 0;
  LOBYTE(DominatesTrust) = 0;
  v8 = 0;
  ProcessTrustLabelAce = SepGetProcessTrustLabelAce(a2);
  if ( !ProcessTrustLabelAce
    || (v13 = *(_DWORD *)(ProcessTrustLabelAce + 4), v14 = (void *)(ProcessTrustLabelAce + 8),
                                                     ProcessTrustLabelAce == -8) )
  {
    *a7 = -1;
    return (unsigned int)v7;
  }
  if ( a6 )
  {
    v8 = 1;
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(a4 + 48), 1u);
    }
    else
    {
      SeLockSubjectContext(a3);
    }
  }
  if ( a4 )
  {
    v16 = Sid1;
    goto LABEL_15;
  }
  if ( !a3->ClientToken )
  {
LABEL_14:
    v16 = (PSID)*((_QWORD *)a3->PrimaryToken + 138);
LABEL_15:
    v7 = RtlSidDominatesForTrust(v16, v14, v19);
    if ( v7 >= 0 )
    {
      if ( v19[0] )
        *a7 = -1;
      else
        *a7 = v13 | 0x1000000;
    }
    goto LABEL_19;
  }
  v16 = (PSID)*((_QWORD *)a3->ClientToken + 138);
  v7 = RtlSidDominatesForTrust(*((PSID *)a3->PrimaryToken + 138), v16, (PBOOLEAN)&DominatesTrust);
  if ( v7 >= 0 )
  {
    if ( (_BYTE)DominatesTrust )
      goto LABEL_15;
    goto LABEL_14;
  }
LABEL_19:
  if ( v8 )
  {
    if ( a4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      v17 = KeGetCurrentThread();
      v18 = v17->KernelApcDisable + 1;
      v17->KernelApcDisable = v18;
      if ( !v18
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
        && !v17->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v17);
      }
    }
    else
    {
      SeUnlockSubjectContext(a3);
    }
  }
  return (unsigned int)v7;
}
