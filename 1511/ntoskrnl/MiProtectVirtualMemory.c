/*
 * XREFs of MiProtectVirtualMemory @ 0x140418F80
 * Callers:
 *     NtProtectVirtualMemory @ 0x140418D90 (NtProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 *     MiIsProcessCfgEnabled @ 0x140037FE4 (MiIsProcessCfgEnabled.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     MiMakeProtectionMask @ 0x140062870 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     MiAllowProtectionChange @ 0x1400F5AE4 (MiAllowProtectionChange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckSecuredVad @ 0x14047BB18 (MiCheckSecuredVad.c)
 *     MiProtectAweRegion @ 0x140626D90 (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x140629E98 (MiProtectEnclavePages.c)
 */

__int64 __fastcall MiProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        int a5,
        _DWORD *a6)
{
  struct _KTHREAD *v7; // rdi
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // r8
  _QWORD *v11; // r9
  unsigned int ProtectionMask; // r13d
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r12
  unsigned int *v15; // rax
  ULONG_PTR v16; // rdi
  int v17; // edx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // edx
  void *v22; // rcx
  __int64 *ProtoPteAddress; // rbx
  __int64 v24; // r13
  unsigned __int64 *v25; // r13
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int64 v29; // r15
  int v30; // ebx
  __int64 v31; // rcx
  __int16 v32; // ax
  int v33; // r15d
  __int16 v35; // dx
  int v36; // ecx
  unsigned __int64 v37; // rcx
  unsigned int v38; // ebx
  int v39; // eax
  int v40; // ebx
  int v41; // edx
  int v42; // [rsp+40h] [rbp-C8h]
  int v43; // [rsp+44h] [rbp-C4h]
  int v44; // [rsp+48h] [rbp-C0h] BYREF
  int v45; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h]
  int v47; // [rsp+58h] [rbp-B0h] BYREF
  int v48; // [rsp+5Ch] [rbp-ACh]
  __int64 v49; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  unsigned __int64 v52; // [rsp+78h] [rbp-90h]
  unsigned __int64 v53; // [rsp+80h] [rbp-88h]
  __int64 v54; // [rsp+88h] [rbp-80h]
  __int64 v55; // [rsp+90h] [rbp-78h] BYREF
  _QWORD *Teb; // [rsp+98h] [rbp-70h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-68h]
  struct _KTHREAD *v58; // [rsp+A8h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v60; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v61[9]; // [rsp+C0h] [rbp-48h] BYREF
  int v65; // [rsp+130h] [rbp+28h]

  v43 = 1;
  *a6 = 1;
  v45 = 0;
  v42 = 0;
  v48 = 1;
  v7 = (struct _KTHREAD *)*a3;
  v58 = v7;
  CurrentThread = v7;
  v54 = *a4;
  v46 = v54;
  v8 = a5 & 0x20000000;
  LODWORD(P) = a5 & 0x20000000;
  v9 = a5 & 0x20000000 ^ a5;
  if ( v9 < 0 )
  {
    v9 &= ~0x80000000;
    v42 = 1;
  }
  if ( (v9 & 0x40000000) != 0 )
  {
    v9 &= ~0x40000000u;
    if ( (v9 & 0xFFFFFF0F) != 0 )
      return 3221225714LL;
    v48 = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  LODWORD(v50) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v13 = ((unsigned __int64)&v7[-1].QueuedScb + v10 + 7) | 0xFFF;
  v60 = v13;
  v14 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL;
  v57 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL;
  Teb = v11;
  v52 = (unsigned __int64)v11;
  v53 = (unsigned __int64)v11;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    if ( KeIsAttachedProcess() || *(_QWORD *)(a2 + 1064) )
    {
      v11 = 0LL;
    }
    else
    {
      Teb = KeGetCurrentThread()->Teb;
      v52 = (unsigned __int64)Teb;
      v11 = 0LL;
      v53 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
      v52 = v53;
    }
  }
  P = v11;
  v50 = v13 >> 12;
  v15 = MiObtainReferencedVad((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL, &v44);
  v16 = (ULONG_PTR)v15;
  v46 = (__int64)v15;
  if ( !v15 )
  {
    v33 = v44;
    if ( v44 != -1073741664 )
      goto LABEL_72;
    goto LABEL_75;
  }
  P = v15;
  if ( v50 > (v15[7] | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) )
  {
    v33 = -1073741800;
    goto LABEL_72;
  }
  v65 = 0;
  if ( (ProtectionMask & 2) != 0 )
  {
    v33 = MiAllowProtectionChange(a2, a1, (ULONG_PTR)v15, ProtectionMask, v14, v13);
    v44 = v33;
    if ( v33 < 0 )
      goto LABEL_72;
    if ( (*(_DWORD *)(v16 + 48) & 0x10) == 0 && MiIsProcessCfgEnabled() && v48 == 1 )
    {
      if ( (v35 & 0x4000) != 0 )
      {
        v33 = MiCheckSecuredVad(v16, v58, v54, ProtectionMask);
        if ( v33 < 0 )
          goto LABEL_72;
        v65 = 1;
      }
      v61[0] = v14;
      v61[1] = v13;
      v33 = MiCommitVadCfgBits(v16, v61, 0LL);
      v44 = v33;
      if ( v33 < 0 )
        goto LABEL_72;
    }
  }
  v17 = *(_DWORD *)(v16 + 48);
  v18 = v17 & 7;
  switch ( v18 )
  {
    case 5:
      if ( ProtectionMask == (unsigned __int8)v17 >> 3 )
      {
        MiUnlockAndDereferenceVad((PVOID)v16);
        *a4 = v13 - v14 + 1;
        *a3 = v14;
        *a6 = MmProtectToValue[ProtectionMask];
        return 0LL;
      }
      goto LABEL_75;
    case 3:
      if ( (v17 & 0x40000) != 0 )
      {
        v38 = MiProtectEnclavePages(v14, v13, ProtectionMask, v8, (__int64)a6, (__int64)a3, (__int64)a4);
        MiUnlockAndDereferenceVad((PVOID)v16);
        return v38;
      }
      if ( ProtectionMask <= 0x18 )
      {
        v39 = 16777234;
        if ( _bittest(&v39, ProtectionMask) )
        {
          v40 = MiProtectAweRegion(v14, v13, ProtectionMask);
          MiUnlockAndDereferenceVad((PVOID)v16);
          *a4 = v13 - v14 + 1;
          *a3 = v14;
          *a6 = v40;
          return 0LL;
        }
      }
      goto LABEL_75;
    case 1:
      v33 = -1073741800;
      goto LABEL_72;
  }
  v19 = v42;
  if ( v42 == 1 )
  {
    if ( (v17 & 0x8000) != 0 || (*(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL) & 0x20) != 0 )
      goto LABEL_113;
    v19 = 1;
  }
  if ( (v17 & 0x4000) != 0 && !v65 )
  {
    v33 = MiCheckSecuredVad(v16, v58, v54, ProtectionMask);
    v44 = v33;
    if ( v33 < 0 )
      goto LABEL_72;
    v19 = v42;
  }
  v20 = *(_DWORD *)(v16 + 48);
  if ( (v20 & 0x8000) == 0 )
  {
    if ( (v20 & 7) != 7 )
    {
      if ( (v9 & 0x600) == 0 )
      {
        v21 = *(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL);
        if ( (v21 & 0x20) == 0 )
        {
          v36 = MmCompatibleProtectionMask[(v20 >> 3) & 7] | 0x700;
          if ( (v9 | v36) != v36 )
          {
            v33 = -1073741746;
            goto LABEL_72;
          }
        }
        if ( (v21 & 0xA0) != 0x80 )
        {
          if ( MiVadMapsLargeImage(v16) )
          {
            if ( v9 == 64 || v9 == 4 )
            {
              MiUnlockAndDereferenceVad(v22);
              *a4 = v13 - v14 + 1;
              *a3 = v14;
              *a6 = MmProtectToValue[ProtectionMask];
              return 0LL;
            }
            v33 = -1073741746;
            goto LABEL_72;
          }
          ProtoPteAddress = (__int64 *)MiGetProtoPteAddress((__int64)v22, v14 >> 12, 5u, &v55);
          if ( !ProtoPteAddress )
            goto LABEL_104;
          v46 = MiGetProtoPteAddress(v16, v50, 5u, &v49);
          if ( !v46 )
            goto LABEL_104;
          CurrentThread = KeGetCurrentThread();
          v24 = ***(_QWORD ***)(v16 + 72);
          --CurrentThread->SpecialApcDisable;
          v25 = (unsigned __int64 *)(v24 + 40);
          v26 = KeAbPreAcquire((ULONG_PTR)v25, 0LL, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v25, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v25, v26, (ULONG_PTR)v25);
          if ( v26 )
            *(_BYTE *)(v26 + 26) |= 1u;
          v27 = v49;
          v28 = v55;
          while ( 1 )
          {
            if ( v28 == v27 )
            {
              v29 = v46;
            }
            else
            {
              v29 = *(_QWORD *)(v28 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v28 + 44) - 1);
              v27 = v49;
            }
            if ( (unsigned __int64)ProtoPteAddress > v29 )
            {
LABEL_33:
              v30 = v43;
            }
            else
            {
              while ( MI_READ_PTE_LOCK_FREE(ProtoPteAddress) )
              {
                if ( (unsigned __int64)++ProtoPteAddress > v29 )
                {
                  v27 = v49;
                  goto LABEL_33;
                }
              }
              v30 = 0;
              v43 = 0;
              v27 = v49;
            }
            if ( v55 == v27 )
              break;
            v28 = *(_QWORD *)(v55 + 16);
            v55 = v28;
            ProtoPteAddress = *(__int64 **)(v28 + 8);
            if ( !ProtoPteAddress )
            {
              v30 = 0;
              break;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v25, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v25);
          KeAbPostRelease((ULONG_PTR)v25);
          v31 = (__int64)CurrentThread;
          v32 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v32;
          if ( !v32 && *(_QWORD *)(v31 + 152) != v31 + 152 )
            KiCheckForKernelApcDelivery(v31);
          if ( !v30 )
          {
LABEL_104:
            v33 = -1073741779;
            goto LABEL_72;
          }
        }
        v33 = MiSetProtectionOnSection(a2, v16, v14, v13, v9, v42, &v47, &v45);
        if ( v33 >= 0 )
          goto LABEL_40;
        goto LABEL_72;
      }
LABEL_113:
      v33 = -1073741582;
      goto LABEL_72;
    }
    if ( ProtectionMask == (unsigned __int8)v20 >> 3 )
    {
      MiUnlockAndDereferenceVad((PVOID)v16);
      *a4 = v13 - v14 + 1;
      *a3 = v14;
      *a6 = MmProtectToValue[ProtectionMask];
      return 0LL;
    }
LABEL_75:
    v33 = -1073741800;
    goto LABEL_72;
  }
  if ( (v9 & 0x88) != 0 || v19 == 1 )
    goto LABEL_113;
  if ( (v20 & 7) == 6 )
  {
    if ( (v9 & 0xFFFFF9F9) != 0 )
    {
      v33 = -1073741755;
      goto LABEL_72;
    }
    v9 &= 0xFFFFF9FF;
    v41 = (unsigned __int8)v20 >> 6;
    if ( (v20 & 0x38) != 0 && v41 == 3 )
    {
      v9 |= 0x400u;
    }
    else if ( v41 == 1 )
    {
      v9 |= 0x200u;
    }
    ProtectionMask = MiMakeProtectionMask(v9);
  }
  v33 = MiProtectPrivateMemory(v16, v14, v13, ProtectionMask, v9, &v47, &v45);
  if ( v33 >= 0 )
  {
    if ( v52 )
    {
      if ( v52 < v13
        && v52 >> 12 >= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
      {
        v37 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
        if ( v52 >> 12 <= v37 && (v13 + 1) >> 12 <= v37 )
          Teb[2] = v13 + 1;
      }
    }
LABEL_40:
    MiUnlockAndDereferenceVad((PVOID)v16);
    *a4 = v13 - v14 + 1;
    *a3 = v14;
    *a6 = v47;
    if ( v45 == 1 )
      return 1073741847LL;
    return 0LL;
  }
LABEL_72:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  return (unsigned int)v33;
}
