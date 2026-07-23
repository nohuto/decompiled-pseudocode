/*
 * XREFs of SepTrustLevelCheck @ 0x14008DE30
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlSidDominatesForTrust @ 0x14007A050 (RtlSidDominatesForTrust.c)
 *     SepGetProcessTrustLabelAce @ 0x14008DE80 (SepGetProcessTrustLabelAce.c)
 *     SeUnlockSubjectContext @ 0x140470920 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x140470960 (SeLockSubjectContext.c)
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
  char v9; // si
  __int64 ProcessTrustLabelAce; // rax
  __int64 result; // rax
  int v12; // r15d
  void *v13; // r12
  struct _KTHREAD *CurrentThread; // rax
  PSID v15; // r14
  NTSTATUS v16; // ebp
  BOOLEAN v17[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 DominatesTrust; // [rsp+60h] [rbp+8h] BYREF

  DominatesTrust = a1;
  v17[0] = 0;
  LOBYTE(DominatesTrust) = 0;
  v9 = 0;
  ProcessTrustLabelAce = SepGetProcessTrustLabelAce(a2);
  if ( !ProcessTrustLabelAce
    || (v12 = *(_DWORD *)(ProcessTrustLabelAce + 4), v13 = (void *)(ProcessTrustLabelAce + 8),
                                                     ProcessTrustLabelAce == -8) )
  {
    result = 0LL;
    *a7 = -1;
    return result;
  }
  if ( a6 )
  {
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
    v9 = 1;
  }
  if ( a4 )
  {
    v15 = Sid1;
    goto LABEL_15;
  }
  if ( !a3->ClientToken )
  {
LABEL_14:
    v15 = (PSID)*((_QWORD *)a3->PrimaryToken + 138);
LABEL_15:
    v16 = RtlSidDominatesForTrust(v15, v13, v17);
    if ( v16 >= 0 )
    {
      if ( v17[0] )
        *a7 = -1;
      else
        *a7 = v12 | 0x1000000;
    }
    goto LABEL_19;
  }
  v15 = (PSID)*((_QWORD *)a3->ClientToken + 138);
  v16 = RtlSidDominatesForTrust(*((PSID *)a3->PrimaryToken + 138), v15, (PBOOLEAN)&DominatesTrust);
  if ( v16 >= 0 )
  {
    if ( (_BYTE)DominatesTrust )
      goto LABEL_15;
    goto LABEL_14;
  }
LABEL_19:
  if ( v9 )
  {
    if ( a4 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
      KeLeaveCriticalRegion();
    }
    else
    {
      SeUnlockSubjectContext(a3);
    }
  }
  return (unsigned int)v16;
}
