/*
 * XREFs of MmFlushVirtualMemory @ 0x140531D6C
 * Callers:
 *     NtFlushVirtualMemory @ 0x140531C0C (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     MiFindLastSubsection @ 0x140082B4C (MiFindLastSubsection.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MiFlushRelease @ 0x1401198B8 (MiFlushRelease.c)
 *     MiFlushAcquire @ 0x14011997C (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x140119A48 (MiFlushDirtyBitsToPfn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404B2240 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MmFlushVirtualMemory(_KPROCESS *a1, unsigned __int64 *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // edi
  char v7; // bl
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  char v12; // r13
  unsigned __int64 v13; // rax
  char *v14; // rsi
  unsigned __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // r12
  __int64 v18; // r14
  unsigned __int64 v19; // rcx
  _BOOL8 v20; // r9
  BOOL v21; // eax
  int v22; // ecx
  struct _KTHREAD *ProtoPteAddress; // rax
  unsigned int *LastSubsection; // rbp
  __int64 *v25; // r15
  __int64 v26; // r12
  ULONG_PTR v27; // rax
  _DWORD *v28; // r13
  struct _FILE_OBJECT *v29; // rsi
  int v30; // r14d
  int v31; // ebx
  _DWORD *v33; // rax
  int v34; // [rsp+44h] [rbp-C4h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-C0h]
  _DWORD *v36; // [rsp+50h] [rbp-B8h]
  unsigned int *v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h]
  unsigned int *v39; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 *v40; // [rsp+70h] [rbp-98h]
  unsigned int *v41; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v42[48]; // [rsp+80h] [rbp-88h] BYREF

  v4 = *a2;
  v5 = 0;
  v36 = a4;
  v40 = a3;
  v7 = 0;
  v8 = v4 - 1;
  v9 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v10 = *a3 + v8;
  *a2 = v9;
  v11 = v10 | 0xFFF;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v7 = 2;
    KiStackAttachProcess(a1, 0, (__int64)v42);
  }
  if ( KeGetCurrentThread()->SpecialApcDisable
    || !(unsigned __int8)KeAreInterruptsEnabled()
    || (v12 = 0, KeGetCurrentIrql()) )
  {
    v12 = 1;
  }
  v13 = MiObtainReferencedVad(v9, &v34);
  v14 = (char *)v13;
  if ( !v13 )
  {
    v5 = v34;
    if ( v34 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_32;
  }
  v15 = *(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32);
  if ( !*a3 )
  {
    v11 = (v15 << 12) | 0xFFF;
    v7 |= 1u;
  }
  v16 = *(_DWORD *)(v13 + 48);
  if ( (v16 & 0x8000) != 0 || (v17 = v11 >> 12, v11 >> 12 > v15) )
  {
LABEL_35:
    v5 = -1073741799;
    goto LABEL_31;
  }
  v18 = **(_QWORD **)(v13 + 72);
  v38 = v18;
  if ( *(_QWORD *)(v18 + 64) && (v16 & 7) != 2 )
  {
    v19 = v11 - v9 + 1;
    *v40 = v19;
    v20 = !v12
       && (*(_DWORD *)(v18 + 56) & 0x20000) != 0
       && (MEMORY[0xFFFFF58010804008] < 0x1000uLL || v19 >= 0x100000 && MEMORY[0xFFFFF58010804008] < 0x4000uLL);
    v21 = MiFlushDirtyBitsToPfn(v9, v11, (__int64)CurrentThread, v20);
    v22 = 0;
    if ( v21 )
      v22 = 4;
    v34 = v22;
    MiGetProtoPteAddress((__int64)v14, v11 >> 12, 1u, &v37);
    ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress((__int64)v14, v9 >> 12, 1u, &v39);
    LastSubsection = v37;
    v25 = (__int64 *)v39;
    CurrentThread = ProtoPteAddress;
    if ( v37 )
    {
      v26 = MiGetProtoPteAddress((__int64)v14, v17, 1u, &v41);
LABEL_20:
      if ( (unsigned int)MiFlushAcquire(v18, (__int64)v25, (__int64)LastSubsection) )
      {
        MiUnlockAndDereferenceVad(v14);
        if ( (v7 & 2) != 0 )
          KiUnstackDetachProcess((struct _KTHREAD *)v42, 0);
        v27 = MI_REFERENCE_CONTROL_AREA_FILE(v18);
        v28 = v36;
        v29 = (struct _FILE_OBJECT *)v27;
        v30 = v34;
        while ( 1 )
        {
          v31 = FsRtlAcquireFileForCcFlushEx(v29);
          if ( v31 < 0 )
            break;
          v31 = MiFlushSectionInternal(
                  (unsigned __int64)CurrentThread,
                  v26,
                  v25,
                  (__int64)LastSubsection,
                  0LL,
                  v30,
                  v28);
          FsRtlReleaseFileForCcFlush(v29);
          if ( v31 != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        }
        MI_DEREFERENCE_CONTROL_AREA_FILE(v38, (unsigned __int64)v29);
        MiFlushRelease(v38, (__int64)v25, (__int64)LastSubsection);
        return (unsigned int)v31;
      }
      v5 = -1073741670;
      goto LABEL_31;
    }
    if ( v39 )
    {
      if ( (v7 & 1) != 0 )
      {
        LastSubsection = (unsigned int *)MiFindLastSubsection(v18, 0);
        v26 = *((_QWORD *)LastSubsection + 1) + 8 * (LastSubsection[11] - 1LL);
        goto LABEL_20;
      }
    }
    else if ( (v7 & 1) != 0 )
    {
      v33 = v36;
      *v36 = 0;
      *((_QWORD *)v33 + 1) = 0LL;
      goto LABEL_31;
    }
    goto LABEL_35;
  }
  v5 = -1073741688;
LABEL_31:
  MiUnlockAndDereferenceVad(v14);
LABEL_32:
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v42, 0);
  return v5;
}
