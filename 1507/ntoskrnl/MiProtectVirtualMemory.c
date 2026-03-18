/*
 * XREFs of MiProtectVirtualMemory @ 0x1404B9700
 * Callers:
 *     NtProtectVirtualMemory @ 0x1404B9510 (NtProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140010004 (MiIsProcessCfgEnabled.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiAllowProtectionChange @ 0x1400DCB94 (MiAllowProtectionChange.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     MiProtectAweRegion @ 0x140224890 (MiProtectAweRegion.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiCheckSecuredVad @ 0x1404749C8 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        ULONG_PTR *a4,
        int a5,
        _DWORD *a6)
{
  int v8; // r15d
  int v9; // r12d
  __int64 result; // rax
  unsigned int ProtectionMask; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r10
  char v15; // r11
  unsigned int v16; // edi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r14
  ULONG_PTR v20; // rax
  __int64 v21; // r9
  ULONG_PTR v22; // r13
  int v23; // ebx
  __int16 v24; // dx
  unsigned __int64 v25; // r15
  unsigned int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // ebx
  int v30; // r8d
  unsigned int v31; // r9d
  int v32; // ecx
  char *v33; // rcx
  __int64 *ProtoPteAddress; // rdi
  __int64 v35; // r9
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  unsigned __int64 *v38; // r14
  __int64 v39; // rbx
  __int64 v40; // r9
  unsigned int *v41; // r14
  unsigned int *v42; // rax
  __int64 PteShadow; // rbx
  int v44; // edi
  signed __int64 *v45; // rbx
  struct _KTHREAD *v46; // rcx
  __int16 v47; // ax
  int v48; // eax
  unsigned __int64 v49; // r14
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // [rsp+40h] [rbp-C8h]
  int v52; // [rsp+48h] [rbp-C0h]
  int v53; // [rsp+4Ch] [rbp-BCh]
  int v54; // [rsp+50h] [rbp-B8h] BYREF
  int v55; // [rsp+54h] [rbp-B4h] BYREF
  ULONG_PTR v56; // [rsp+58h] [rbp-B0h]
  int v57; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h]
  struct _KTHREAD *v59; // [rsp+70h] [rbp-98h]
  unsigned int *v60; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v61; // [rsp+80h] [rbp-88h]
  unsigned __int64 v62; // [rsp+88h] [rbp-80h]
  _QWORD *Teb; // [rsp+90h] [rbp-78h]
  unsigned __int64 v64; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-68h]
  ULONG_PTR v66; // [rsp+A8h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-58h]
  unsigned int *v68; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v69[9]; // [rsp+C0h] [rbp-48h] BYREF
  int v73; // [rsp+130h] [rbp+28h]

  v52 = 1;
  *a6 = 1;
  v55 = 0;
  v53 = 0;
  v8 = 1;
  LODWORD(P) = 1;
  v59 = (struct _KTHREAD *)*a3;
  CurrentThread = v59;
  v66 = *a4;
  BugCheckParameter2 = v66;
  v9 = a5;
  if ( a5 < 0 )
  {
    v9 = a5 & 0x7FFFFFFF;
    v53 = 1;
  }
  if ( (v9 & 0x40000000) != 0 )
  {
    v9 &= ~0x40000000u;
    if ( (v9 & 0xFFFFFF0F) != 0 )
      return 3221225714LL;
    v8 = 0;
    LODWORD(P) = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  v16 = ProtectionMask;
  LODWORD(v61) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v17 = (v13 + v12 - 1) | 0xFFF;
  v64 = v17;
  v18 = v12 & 0xFFFFFFFFFFFFF000uLL;
  v51 = v18;
  Teb = v14;
  v19 = (unsigned __int64)v14;
  v62 = (unsigned __int64)v14;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == v15 || *(_QWORD **)(a2 + 1064) != v14 )
    {
      v19 = v62;
    }
    else
    {
      Teb = KeGetCurrentThread()->Teb;
      v56 = (ULONG_PTR)Teb;
      v19 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
      v62 = v19;
    }
  }
  P = v14;
  v61 = v17 >> 12;
  v20 = MiObtainReferencedVad(v18, &v54);
  v22 = v20;
  v56 = v20;
  if ( !v20 )
  {
    v23 = v54;
    if ( v54 == -1073741664 )
LABEL_16:
      v23 = -1073741800;
LABEL_110:
    if ( P )
      MiUnlockAndDereferenceVad((char *)P);
    return (unsigned int)v23;
  }
  P = (PVOID)v20;
  if ( v61 > (*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) )
  {
    v23 = -1073741800;
    goto LABEL_110;
  }
  v73 = 0;
  if ( (v16 & 2) == 0 )
    goto LABEL_29;
  v23 = MiAllowProtectionChange(a2, a1, v20, v16, v51, v17);
  v54 = v23;
  if ( v23 < 0 )
    goto LABEL_110;
  if ( (*(_DWORD *)(v22 + 48) & 0x10) == 0 && MiIsProcessCfgEnabled() && v8 == 1 )
  {
    v25 = (unsigned __int64)v59;
    if ( (v24 & 0x4000) != 0 )
    {
      v23 = MiCheckSecuredVad(v22, (unsigned __int64)v59, v66, v16);
      if ( v23 < 0 )
        goto LABEL_110;
      v73 = 1;
    }
    v69[0] = v51;
    v69[1] = v17;
    v23 = MiCommitVadCfgBits(v22, v69, 0LL);
    v54 = v23;
    if ( v23 < 0 )
      goto LABEL_110;
  }
  else
  {
LABEL_29:
    v25 = (unsigned __int64)v59;
  }
  v26 = *(_DWORD *)(v22 + 48);
  v27 = v26 & 7;
  switch ( v27 )
  {
    case 5:
LABEL_31:
      if ( v16 == (unsigned __int8)v26 >> 3 )
      {
        MiUnlockAndDereferenceVad((char *)v22);
        *a4 = v17 - v51 + 1;
        *a3 = v51;
        *a6 = MmProtectToValue[v16];
        return 0LL;
      }
      goto LABEL_16;
    case 3:
      if ( v16 <= 0x18 )
      {
        v28 = 16777234;
        if ( _bittest(&v28, v16) )
        {
          v29 = MiProtectAweRegion(v51, v17, v16, v21);
          MiUnlockAndDereferenceVad((char *)v22);
          *a4 = v17 - v51 + 1;
          *a3 = v51;
          *a6 = v29;
          return 0LL;
        }
      }
      goto LABEL_16;
    case 1:
      v23 = -1073741800;
      goto LABEL_110;
  }
  v30 = v53;
  if ( v53 == 1 && ((v26 & 0x8000) != 0 || (*(_DWORD *)(**(_QWORD **)(v22 + 72) + 56LL) & 0x20) != 0) )
    goto LABEL_109;
  if ( (v26 & 0x4000) != 0 && !v73 )
  {
    v23 = MiCheckSecuredVad(v22, v25, v66, v16);
    v54 = v23;
    if ( v23 < 0 )
      goto LABEL_110;
    v30 = v53;
  }
  v26 = *(_DWORD *)(v22 + 48);
  if ( (v26 & 0x8000) != 0 )
  {
    if ( (v9 & 0x88) == 0 && v30 != 1 )
    {
      if ( (v26 & 7) == 6 )
      {
        if ( (v9 & 0xFFFFF9F9) != 0 )
        {
          v23 = -1073741755;
          goto LABEL_110;
        }
        v9 &= 0xFFFFF9FF;
        v48 = (unsigned __int8)v26 >> 6;
        if ( v48 == 3 && (v26 & 0x38) != 0 )
        {
          v9 |= 0x400u;
        }
        else if ( v48 == 1 )
        {
          v9 |= 0x200u;
        }
        v16 = MiMakeProtectionMask(v9);
      }
      v23 = MiProtectPrivateMemory(v22, v51, v17, v16, v9, &v57, &v55);
      if ( v23 < 0 )
        goto LABEL_110;
      if ( v19 )
      {
        if ( v19 < v17 )
        {
          v49 = v19 >> 12;
          if ( v49 >= (*(unsigned int *)(v22 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 32) << 32)) )
          {
            v50 = *(unsigned int *)(v22 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32);
            if ( v49 <= v50 && (v17 + 1) >> 12 <= v50 )
              Teb[2] = v17 + 1;
          }
        }
      }
      goto LABEL_106;
    }
LABEL_109:
    v23 = -1073741582;
    goto LABEL_110;
  }
  if ( (v26 & 7) == 7 )
    goto LABEL_31;
  if ( (v9 & 0x600) != 0 )
    goto LABEL_109;
  v31 = *(_DWORD *)(**(_QWORD **)(v22 + 72) + 56LL);
  if ( ((v31 >> 5) & 1) == 0 )
  {
    v32 = MmCompatibleProtectionMask[(v26 >> 3) & 7] | 0x700;
    if ( (v9 | v32) != v32 )
    {
      v23 = -1073741746;
      goto LABEL_110;
    }
  }
  if ( (v31 & 0x80u) == 0 || ((v31 >> 5) & 1) != 0 )
  {
    if ( MiVadMapsLargeImage(v22) )
    {
      if ( v9 == 64 || v9 == 4 )
      {
        MiUnlockAndDereferenceVad(v33);
        *a4 = v17 - v51 + 1;
        *a3 = v51;
        *a6 = MmProtectToValue[v16];
        return 0LL;
      }
      v23 = -1073741746;
      goto LABEL_110;
    }
    ProtoPteAddress = (__int64 *)MiGetProtoPteAddress((__int64)v33, v51 >> 12, 5u, &v68);
    if ( !ProtoPteAddress )
      goto LABEL_87;
    v36 = MiGetProtoPteAddress(v22, v61, 5u, &v60);
    v56 = v36;
    if ( !v36 )
      goto LABEL_87;
    CurrentThread = KeGetCurrentThread();
    v37 = ***(_QWORD ***)(v22 + 72);
    --CurrentThread->SpecialApcDisable;
    v38 = (unsigned __int64 *)(v37 + 40);
    BugCheckParameter2 = (ULONG_PTR)v38;
    v39 = KeAbPreAcquire((ULONG_PTR)v38, 0LL, 0LL, v35);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v38, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v38, v39, (ULONG_PTR)v38, v40);
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    v41 = v68;
    v42 = v60;
    while ( 1 )
    {
      if ( v41 != v42 )
      {
        v36 = *((_QWORD *)v41 + 1) + 8LL * (v41[11] - 1);
        v42 = v60;
      }
      if ( (unsigned __int64)ProtoPteAddress > v36 )
      {
LABEL_75:
        v44 = v52;
      }
      else
      {
        while ( 1 )
        {
          PteShadow = *ProtoPteAddress;
          if ( MiPteInShadowRange((__int64)ProtoPteAddress) )
            PteShadow = MiReadPteShadow((__int64)ProtoPteAddress, PteShadow);
          if ( !PteShadow )
            break;
          if ( (unsigned __int64)++ProtoPteAddress > v36 )
          {
            v42 = v60;
            goto LABEL_75;
          }
        }
        v44 = 0;
        v52 = 0;
        v42 = v60;
      }
      if ( v41 == v42 )
        break;
      v41 = (unsigned int *)*((_QWORD *)v41 + 2);
      v68 = v41;
      ProtoPteAddress = (__int64 *)*((_QWORD *)v41 + 1);
      v36 = v56;
      if ( !ProtoPteAddress )
      {
        v44 = 0;
        break;
      }
    }
    v45 = (signed __int64 *)BugCheckParameter2;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v45);
    KeAbPostRelease((ULONG_PTR)v45);
    v46 = CurrentThread;
    v47 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v47;
    if ( !v47 && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
      KiCheckForKernelApcDelivery();
    if ( !v44 )
    {
LABEL_87:
      v23 = -1073741779;
      goto LABEL_110;
    }
  }
  v23 = MiSetProtectionOnSection(a2, v22, v51, v17, v9, v53, &v57, &v55);
  if ( v23 < 0 )
    goto LABEL_110;
LABEL_106:
  MiUnlockAndDereferenceVad((char *)v22);
  *a4 = v17 - v51 + 1;
  *a3 = v51;
  *a6 = v57;
  result = 0LL;
  if ( v55 == 1 )
    return 1073741847LL;
  return result;
}
