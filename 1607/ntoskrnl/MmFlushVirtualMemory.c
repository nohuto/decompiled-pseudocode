/*
 * XREFs of MmFlushVirtualMemory @ 0x1404B5438
 * Callers:
 *     NtFlushVirtualMemory @ 0x1404B52E4 (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x1406B8FD8 (CMFFlushHitsFile.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     KeAreAllApcsDisabled @ 0x14004EDE0 (KeAreAllApcsDisabled.c)
 *     MiFlushRelease @ 0x1400A43EC (MiFlushRelease.c)
 *     MiFlushAcquire @ 0x1400A4478 (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x1400A44FC (MiFlushDirtyBitsToPfn.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiFindLastSubsection @ 0x1400FAEB0 (MiFindLastSubsection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
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
  unsigned __int64 v12; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r12
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  BOOL v19; // r9d
  BOOL v20; // eax
  int v21; // ecx
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 *LastSubsection; // rbp
  __int64 *v24; // r15
  __int64 v25; // r12
  ULONG_PTR v26; // rax
  _QWORD *v27; // r13
  struct _FILE_OBJECT *v28; // rsi
  int v29; // r14d
  int v30; // ebx
  unsigned __int64 v32; // rcx
  _DWORD *v33; // rax
  BOOLEAN v34; // [rsp+40h] [rbp-C8h]
  int v35; // [rsp+48h] [rbp-C0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-B8h]
  _DWORD *v37; // [rsp+58h] [rbp-B0h]
  __int64 *v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v39; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int64 *v41; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v42[48]; // [rsp+80h] [rbp-88h] BYREF

  v4 = *a2;
  v5 = 0;
  v37 = a4;
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
  v34 = KeAreAllApcsDisabled();
  v12 = MiObtainReferencedVad(v9, &v35);
  v13 = (char *)v12;
  if ( !v12 )
  {
    v5 = v35;
    if ( v35 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_26;
  }
  v14 = *(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32);
  if ( !*a3 )
  {
    v11 = (v14 << 12) | 0xFFF;
    v7 |= 1u;
  }
  v15 = *(_DWORD *)(v12 + 48);
  if ( (v15 & 0x8000) != 0 || (v16 = v11 >> 12, v11 >> 12 > v14) )
  {
LABEL_32:
    v5 = -1073741799;
    goto LABEL_25;
  }
  v17 = **(_QWORD **)(v12 + 72);
  v40 = v17;
  if ( *(_QWORD *)(v17 + 64) && (v15 & 7) != 2 )
  {
    v18 = v11 - v9 + 1;
    *a3 = v18;
    v19 = 0;
    if ( !v34 && (*(_DWORD *)(v17 + 56) & 0x20000) != 0 )
    {
      v32 = *(_QWORD *)(qword_140327FD0 + 276841240);
      if ( v32 < 0x1000 || v18 >= 0x100000 && v32 < 0x4000 )
        v19 = 1;
    }
    v20 = MiFlushDirtyBitsToPfn(v9, v11, (__int64)CurrentThread, v19);
    v21 = 0;
    if ( v20 )
      v21 = 4;
    v35 = v21;
    MiGetProtoPteAddress((__int64)v13, v11 >> 12, 1, &v39);
    ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress((__int64)v13, v9 >> 12, 1, &v38);
    LastSubsection = v39;
    v24 = v38;
    CurrentThread = ProtoPteAddress;
    if ( v39 )
    {
      v25 = MiGetProtoPteAddress((__int64)v13, v16, 1, &v41);
LABEL_17:
      if ( (unsigned int)MiFlushAcquire(v17, (__int64)v24, (__int64)LastSubsection) )
      {
        MiUnlockAndDereferenceVad(v13);
        if ( (v7 & 2) != 0 )
          KiUnstackDetachProcess((struct _KTHREAD *)v42, 0);
        v26 = MiReferenceControlAreaFile(v17);
        v27 = v37;
        v28 = (struct _FILE_OBJECT *)v26;
        v29 = v35;
        while ( 1 )
        {
          v30 = FsRtlAcquireFileForCcFlushEx(v28);
          if ( v30 < 0 )
            break;
          v30 = MiFlushSectionInternal((ULONG_PTR)CurrentThread, v25, v24, (__int64)LastSubsection, 0LL, v29, v27);
          FsRtlReleaseFileForCcFlush(v28);
          if ( v30 != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
        }
        MiDereferenceControlAreaFile(v40, (unsigned __int64)v28);
        MiFlushRelease(v40, (__int64)v24, (__int64)LastSubsection);
        return (unsigned int)v30;
      }
      v5 = -1073741670;
      goto LABEL_25;
    }
    if ( v38 )
    {
      if ( (v7 & 1) != 0 )
      {
        LastSubsection = (__int64 *)MiFindLastSubsection(v17, 0);
        v25 = LastSubsection[1] + 8 * (*((unsigned int *)LastSubsection + 11) - 1LL);
        goto LABEL_17;
      }
    }
    else if ( (v7 & 1) != 0 )
    {
      v33 = v37;
      *v37 = 0;
      *((_QWORD *)v33 + 1) = 0LL;
      goto LABEL_25;
    }
    goto LABEL_32;
  }
  v5 = -1073741688;
LABEL_25:
  MiUnlockAndDereferenceVad(v13);
LABEL_26:
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v42, 0);
  return v5;
}
