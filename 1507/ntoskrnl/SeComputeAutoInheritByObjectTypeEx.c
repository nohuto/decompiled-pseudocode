/*
 * XREFs of SeComputeAutoInheritByObjectTypeEx @ 0x140045360
 * Callers:
 *     SeComputeAutoInheritByObjectType @ 0x140127EE0 (SeComputeAutoInheritByObjectType.c)
 *     ObpAssignSecurity @ 0x140486910 (ObpAssignSecurity.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400459A0 (RtlFindAceByType.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SeComputeAutoInheritByObjectTypeEx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *Index)
{
  _DWORD *v5; // rsi
  int v10; // ebp
  int v11; // r15d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rbx
  unsigned int v14; // ecx
  _QWORD *v15; // rax
  int v16; // edi
  __int64 v17; // rcx
  int v18; // eax
  char v19; // bl
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  __int16 v25; // ax
  ACL *v26; // rcx
  _DWORD *AceByType; // rax
  __int64 v28; // rax
  __int16 v29; // ax
  ACL *v30; // rcx
  __int64 v31; // rax
  _BYTE *v32; // rax

  v5 = Index;
  v10 = 0;
  v11 = 0;
  if ( Index )
  {
    if ( *Index != 8 )
      return 3221225485LL;
    Index[1] = -1;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&SepMandatoryObjectTypePolicyLock, v13, &SepMandatoryObjectTypePolicyLock);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = 0;
  if ( SepMandatoryObjectTypePolicyCount )
  {
    v15 = SepMandatoryObjectTypePolicy;
    while ( a1 != *v15 )
    {
      ++v14;
      v15 += 3;
      if ( v14 >= SepMandatoryObjectTypePolicyCount )
      {
        v16 = 0;
        goto LABEL_17;
      }
    }
    v17 = 3LL * v14;
    v18 = SepMandatoryObjectTypePolicy[2 * v17 + 2];
    if ( (v18 & 1) != 0 )
    {
      v10 = SepMandatoryObjectTypePolicy[2 * v17 + 4];
      v11 = SepMandatoryObjectTypePolicy[2 * v17 + 3];
    }
    if ( (v18 & 2) != 0 )
    {
      v16 = SepMandatoryObjectTypePolicy[2 * v17 + 5];
      v19 = 1;
      goto LABEL_18;
    }
    v16 = 0;
  }
  else
  {
    v16 = 0;
  }
LABEL_17:
  v19 = 0;
LABEL_18:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v22, v20, v21);
  }
  if ( v11 && a2 )
  {
    v25 = *(_WORD *)(a2 + 2);
    if ( (v25 & 0x10) != 0 )
    {
      if ( v25 < 0 )
      {
        v28 = *(unsigned int *)(a2 + 12);
        v26 = (_DWORD)v28 ? (ACL *)(a2 + v28) : 0LL;
      }
      else
      {
        v26 = *(ACL **)(a2 + 24);
      }
    }
    else
    {
      v26 = 0LL;
    }
    AceByType = RtlFindAceByType(v26, 0x11u, 0LL);
    if ( AceByType )
    {
      AceByType[1] |= v11;
      v10 = 0;
    }
  }
  if ( v19 )
  {
    if ( a2 )
    {
      LODWORD(Index) = 0;
      while ( 1 )
      {
        v29 = *(_WORD *)(a2 + 2);
        if ( (v29 & 0x10) != 0 )
        {
          if ( v29 < 0 )
          {
            v31 = *(unsigned int *)(a2 + 12);
            v30 = (_DWORD)v31 ? (ACL *)(a2 + v31) : 0LL;
          }
          else
          {
            v30 = *(ACL **)(a2 + 24);
          }
        }
        else
        {
          v30 = 0LL;
        }
        v32 = RtlFindAceByType(v30, 0x11u, (PULONG)&Index);
        if ( v32 )
        {
          if ( (v32[1] & 8) == 0 )
            break;
        }
        LODWORD(Index) = (_DWORD)Index + 1;
        if ( !v32 )
          goto LABEL_64;
      }
      *((_DWORD *)v32 + 1) &= v16;
    }
    else
    {
LABEL_64:
      if ( v5 )
      {
        v5[1] = v16;
        v10 |= 0x800u;
      }
    }
  }
  if ( a3 )
  {
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 4) == 0) && (*(_WORD *)(a3 + 2) & 0x400) != 0 )
      v10 |= 1u;
    if ( (!a2 || (*(_BYTE *)(a2 + 2) & 0x10) == 0) && (*(_WORD *)(a3 + 2) & 0x800) != 0 )
      v10 |= 2u;
  }
  *a4 = v10;
  return 0LL;
}
