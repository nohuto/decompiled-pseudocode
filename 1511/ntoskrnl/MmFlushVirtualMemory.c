/*
 * XREFs of MmFlushVirtualMemory @ 0x140455438
 * Callers:
 *     NtFlushVirtualMemory @ 0x1404552D8 (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x140676460 (CMFFlushHitsFile.c)
 * Callees:
 *     MiFindLastSubsection @ 0x1400081A0 (MiFindLastSubsection.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     KeAreAllApcsDisabled @ 0x140098520 (KeAreAllApcsDisabled.c)
 *     MiFlushRelease @ 0x140098554 (MiFlushRelease.c)
 *     MiFlushAcquire @ 0x1400985E0 (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x140098664 (MiFlushDirtyBitsToPfn.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
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
  unsigned int *v12; // rax
  unsigned int *v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r12
  __int64 v17; // r14
  unsigned __int64 v18; // rcx
  BOOL v19; // r9d
  BOOL v20; // eax
  int v21; // ecx
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 LastSubsection; // rbp
  __int64 *v24; // r15
  __int64 v25; // r12
  ULONG_PTR v26; // rax
  _DWORD *v27; // r13
  struct _FILE_OBJECT *v28; // rsi
  int v29; // r14d
  int v30; // ebx
  _DWORD *v32; // rax
  BOOLEAN v33; // [rsp+40h] [rbp-C8h]
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-B8h]
  _DWORD *v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h]
  __int64 *v39; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v41; // [rsp+80h] [rbp-88h] BYREF

  v4 = *a2;
  v5 = 0;
  v36 = a4;
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
    KiStackAttachProcess(a1, 0LL, (__int64)&v41);
  }
  v33 = KeAreAllApcsDisabled();
  v12 = MiObtainReferencedVad(v9, &v34);
  v13 = v12;
  if ( !v12 )
  {
    v5 = v34;
    if ( v34 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_26;
  }
  v14 = v12[7] | ((unsigned __int64)*((unsigned __int8 *)v12 + 33) << 32);
  if ( !*a3 )
  {
    v11 = (v14 << 12) | 0xFFF;
    v7 |= 1u;
  }
  v15 = v12[12];
  if ( (v15 & 0x8000) != 0 || (v16 = v11 >> 12, v11 >> 12 > v14) )
  {
LABEL_32:
    v5 = -1073741799;
    goto LABEL_25;
  }
  v17 = **((_QWORD **)v12 + 9);
  v38 = v17;
  if ( *(_QWORD *)(v17 + 64) && (v15 & 7) != 2 )
  {
    v18 = v11 - v9 + 1;
    *a3 = v18;
    v19 = !v33
       && (*(_DWORD *)(v17 + 56) & 0x20000) != 0
       && (MEMORY[0xFFFFF58010804008] < 0x1000uLL || v18 >= 0x100000 && MEMORY[0xFFFFF58010804008] < 0x4000uLL);
    v20 = MiFlushDirtyBitsToPfn(v9, v11, (__int64)CurrentThread, v19);
    v21 = 0;
    if ( v20 )
      v21 = 4;
    v34 = v21;
    MiGetProtoPteAddress((__int64)v13, v11 >> 12, 1u, &v37);
    ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress((__int64)v13, v9 >> 12, 1u, (__int64 *)&v39);
    LastSubsection = v37;
    v24 = v39;
    CurrentThread = ProtoPteAddress;
    if ( v37 )
    {
      v25 = MiGetProtoPteAddress((__int64)v13, v16, 1u, &v40);
LABEL_17:
      if ( (unsigned int)MiFlushAcquire(v17, (__int64)v24, LastSubsection) )
      {
        MiUnlockAndDereferenceVad(v13);
        if ( (v7 & 2) != 0 )
          KiUnstackDetachProcess(&v41, 0LL);
        v26 = MI_REFERENCE_CONTROL_AREA_FILE(v17);
        v27 = v36;
        v28 = (struct _FILE_OBJECT *)v26;
        v29 = v34;
        while ( 1 )
        {
          v30 = FsRtlAcquireFileForCcFlushEx(v28);
          if ( v30 < 0 )
            break;
          v30 = MiFlushSectionInternal((ULONG_PTR)CurrentThread, v25, v24, LastSubsection, 0LL, v29, v27);
          FsRtlReleaseFileForCcFlush(v28);
          if ( v30 != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        }
        MI_DEREFERENCE_CONTROL_AREA_FILE(v38, (unsigned __int64)v28);
        MiFlushRelease(v38, (__int64)v24, LastSubsection);
        return (unsigned int)v30;
      }
      v5 = -1073741670;
      goto LABEL_25;
    }
    if ( v39 )
    {
      if ( (v7 & 1) != 0 )
      {
        LastSubsection = MiFindLastSubsection(v17, 0);
        v25 = *(_QWORD *)(LastSubsection + 8) + 8 * (*(unsigned int *)(LastSubsection + 44) - 1LL);
        goto LABEL_17;
      }
    }
    else if ( (v7 & 1) != 0 )
    {
      v32 = v36;
      *v36 = 0;
      *((_QWORD *)v32 + 1) = 0LL;
      goto LABEL_25;
    }
    goto LABEL_32;
  }
  v5 = -1073741688;
LABEL_25:
  MiUnlockAndDereferenceVad(v13);
LABEL_26:
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess(&v41, 0LL);
  return v5;
}
