/*
 * XREFs of MiProtectVirtualMemory @ 0x140432340
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140432A50 (NtProtectVirtualMemory.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x140013E84 (MiIsProcessCfgEnabled.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiAllowProtectionChange @ 0x1400B5348 (MiAllowProtectionChange.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckSecuredVad @ 0x14040B2AC (MiCheckSecuredVad.c)
 *     MiCommitVadCfgBits @ 0x140428720 (MiCommitVadCfgBits.c)
 *     MiProtectAweRegion @ 0x14065C5C4 (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x14065F6F8 (MiProtectEnclavePages.c)
 */

__int64 __fastcall MiProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int64 v7; // rdi
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // r8
  _QWORD *v11; // r9
  unsigned int ProtectionMask; // r13d
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r12
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // rdi
  int v17; // edx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // edx
  char *v22; // rcx
  unsigned __int64 ProtoPteAddress; // rbx
  __int64 v24; // r13
  unsigned __int64 *v25; // r13
  __int64 v26; // r15
  __int64 *v27; // r10
  __int64 *v28; // r11
  __int64 v29; // r15
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r9
  int v32; // ebx
  __int64 v33; // rcx
  __int16 v34; // ax
  int v35; // r15d
  __int16 v37; // dx
  int v38; // ecx
  unsigned __int64 v39; // rcx
  unsigned int v40; // ebx
  int v41; // eax
  int v42; // ebx
  int v43; // edx
  int v44; // [rsp+40h] [rbp-C8h]
  int v45; // [rsp+44h] [rbp-C4h] BYREF
  int v46; // [rsp+48h] [rbp-C0h]
  int v47; // [rsp+4Ch] [rbp-BCh] BYREF
  int v48; // [rsp+50h] [rbp-B8h]
  int v49; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v50; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v52; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v53; // [rsp+70h] [rbp-98h]
  unsigned __int64 v54; // [rsp+78h] [rbp-90h]
  __int64 v55; // [rsp+80h] [rbp-88h]
  unsigned __int64 v56; // [rsp+88h] [rbp-80h]
  _QWORD *Teb; // [rsp+90h] [rbp-78h]
  unsigned __int64 v58; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-68h]
  __int64 *v60[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v61; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v62[9]; // [rsp+C0h] [rbp-48h] BYREF
  int v66; // [rsp+130h] [rbp+28h]

  v46 = 1;
  *a6 = 1;
  v47 = 0;
  v44 = 0;
  v48 = 1;
  v7 = *a3;
  v56 = v7;
  CurrentThread = (struct _KTHREAD *)v7;
  v55 = *a4;
  v50 = v55;
  v8 = a5 & 0x20000000;
  LODWORD(P) = a5 & 0x20000000;
  v9 = a5 & 0x20000000 ^ a5;
  if ( v9 < 0 )
  {
    v9 &= ~0x80000000;
    v44 = 1;
  }
  if ( (v9 & 0x40000000) != 0 )
  {
    v9 &= ~0x40000000u;
    if ( (v9 & 0xFFFFFF0F) != 0 )
      return 3221225714LL;
    v48 = 0;
  }
  ProtectionMask = MiMakeProtectionMask(v9);
  LODWORD(v52) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v13 = (v10 + v7 - 1) | 0xFFF;
  v60[1] = (__int64 *)v13;
  v14 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v58 = v7 & 0xFFFFFFFFFFFFF000uLL;
  Teb = v11;
  v53 = (unsigned __int64)v11;
  v54 = (unsigned __int64)v11;
  if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    if ( KeIsAttachedProcess() || *(_QWORD *)(a2 + 1064) )
    {
      v11 = 0LL;
    }
    else
    {
      Teb = KeGetCurrentThread()->Teb;
      v53 = (unsigned __int64)Teb;
      v11 = 0LL;
      v54 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
      v53 = v54;
    }
  }
  P = v11;
  v52 = v13 >> 12;
  v15 = MiObtainReferencedVad(v7 & 0xFFFFFFFFFFFFF000uLL, &v45);
  v16 = v15;
  v50 = v15;
  if ( !v15 )
  {
    v35 = v45;
    if ( v45 != -1073741664 )
      goto LABEL_70;
    goto LABEL_83;
  }
  P = (PVOID)v15;
  if ( v52 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
  {
    v35 = -1073741800;
    goto LABEL_70;
  }
  v66 = 0;
  if ( (ProtectionMask & 2) != 0 )
  {
    v35 = MiAllowProtectionChange(a2, a1, v15, ProtectionMask, v14, v13);
    v45 = v35;
    if ( v35 < 0 )
      goto LABEL_70;
    if ( (*(_DWORD *)(v16 + 48) & 0x10) == 0 && MiIsProcessCfgEnabled() && v48 == 1 )
    {
      if ( (v37 & 0x4000) != 0 )
      {
        v35 = MiCheckSecuredVad(v16, v56, v55, ProtectionMask);
        if ( v35 < 0 )
          goto LABEL_70;
        v66 = 1;
      }
      v62[0] = v14;
      v62[1] = v13;
      v35 = MiCommitVadCfgBits(v16, (__int64)v62, 0LL);
      v45 = v35;
      if ( v35 < 0 )
        goto LABEL_70;
    }
  }
  v17 = *(_DWORD *)(v16 + 48);
  v18 = v17 & 7;
  switch ( v18 )
  {
    case 5:
      if ( ProtectionMask == (unsigned __int8)v17 >> 3 )
      {
        MiUnlockAndDereferenceVad((char *)v16);
        *a4 = v13 - v14 + 1;
        *a3 = v14;
        *a6 = MmProtectToValue[ProtectionMask];
        return 0LL;
      }
      goto LABEL_83;
    case 3:
      if ( (v17 & 0x40000) != 0 )
      {
        v40 = MiProtectEnclavePages(v14, v13, ProtectionMask, v8, (__int64)a6, (__int64)a3, (__int64)a4);
        MiUnlockAndDereferenceVad((char *)v16);
        return v40;
      }
      if ( ProtectionMask <= 0x18 )
      {
        v41 = 16777234;
        if ( _bittest(&v41, ProtectionMask) )
        {
          v42 = MiProtectAweRegion(v14, v13, ProtectionMask);
          MiUnlockAndDereferenceVad((char *)v16);
          *a4 = v13 - v14 + 1;
          *a3 = v14;
          *a6 = v42;
          return 0LL;
        }
      }
      goto LABEL_83;
    case 1:
      v35 = -1073741800;
      goto LABEL_70;
  }
  v19 = v44;
  if ( v44 == 1 )
  {
    if ( (v17 & 0x8000) != 0 || (*(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL) & 0x20) != 0 )
      goto LABEL_114;
    v19 = 1;
  }
  if ( (v17 & 0x4000) != 0 && !v66 )
  {
    v35 = MiCheckSecuredVad(v16, v56, v55, ProtectionMask);
    v45 = v35;
    if ( v35 < 0 )
      goto LABEL_70;
    v19 = v44;
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
          v38 = MmCompatibleProtectionMask[(v20 >> 3) & 7] | 0x700;
          if ( (v9 | v38) != v38 )
          {
            v35 = -1073741746;
            goto LABEL_70;
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
            v35 = -1073741746;
            goto LABEL_70;
          }
          ProtoPteAddress = MiGetProtoPteAddress((__int64)v22, v14 >> 12, 5, v60);
          if ( !ProtoPteAddress )
            goto LABEL_105;
          v50 = MiGetProtoPteAddress(v16, v52, 5, &v61);
          if ( !v50 )
            goto LABEL_105;
          CurrentThread = KeGetCurrentThread();
          v24 = ***(_QWORD ***)(v16 + 72);
          --CurrentThread->SpecialApcDisable;
          v25 = (unsigned __int64 *)(v24 + 40);
          v26 = KeAbPreAcquire((ULONG_PTR)v25, 0LL, 0);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v25, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v25, v26, (ULONG_PTR)v25);
          if ( v26 )
            *(_BYTE *)(v26 + 26) |= 1u;
          v27 = v60[0];
          v28 = v61;
          v29 = v50;
          while ( 1 )
          {
            v30 = v27 == v28 ? v29 : v27[1] + 8LL * (unsigned int)(*((_DWORD *)v27 + 11) - 1);
            if ( ProtoPteAddress > v30 )
            {
LABEL_32:
              v32 = v46;
            }
            else
            {
              while ( MI_READ_PTE_LOCK_FREE(ProtoPteAddress) )
              {
                ProtoPteAddress += 8LL;
                if ( ProtoPteAddress > v31 )
                  goto LABEL_32;
              }
              v32 = 0;
              v46 = 0;
            }
            if ( v27 == v28 )
              break;
            v27 = (__int64 *)v27[2];
            v60[0] = v27;
            ProtoPteAddress = v27[1];
            if ( !ProtoPteAddress )
            {
              v32 = 0;
              break;
            }
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)v25, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v25);
          KeAbPostRelease((ULONG_PTR)v25);
          v33 = (__int64)CurrentThread;
          v34 = CurrentThread->SpecialApcDisable + 1;
          CurrentThread->SpecialApcDisable = v34;
          if ( !v34 && *(_QWORD *)(v33 + 152) != v33 + 152 )
            KiCheckForKernelApcDelivery(v33);
          if ( !v32 )
          {
LABEL_105:
            v35 = -1073741779;
            goto LABEL_70;
          }
        }
        v35 = MiSetProtectionOnSection(a2, v16, v14, v13, v9, v44, &v49, &v47);
        if ( v35 >= 0 )
          goto LABEL_39;
        goto LABEL_70;
      }
LABEL_114:
      v35 = -1073741582;
      goto LABEL_70;
    }
    if ( ProtectionMask == (unsigned __int8)v20 >> 3 )
    {
      MiUnlockAndDereferenceVad((char *)v16);
      *a4 = v13 - v14 + 1;
      *a3 = v14;
      *a6 = MmProtectToValue[ProtectionMask];
      return 0LL;
    }
LABEL_83:
    v35 = -1073741800;
    goto LABEL_70;
  }
  if ( (v9 & 0x88) != 0 || v19 == 1 )
    goto LABEL_114;
  if ( (v20 & 7) == 6 )
  {
    if ( (v9 & 0xFFFFF9F9) != 0 )
    {
      v35 = -1073741755;
      goto LABEL_70;
    }
    v9 &= 0xFFFFF9FF;
    v43 = (unsigned __int8)v20 >> 6;
    if ( (v20 & 0x38) != 0 && v43 == 3 )
    {
      v9 |= 0x400u;
    }
    else if ( v43 == 1 )
    {
      v9 |= 0x200u;
    }
    ProtectionMask = MiMakeProtectionMask(v9);
  }
  v35 = MiProtectPrivateMemory(v16, v14, v13, ProtectionMask, v9, &v49, &v47);
  if ( v35 >= 0 )
  {
    if ( v53 )
    {
      if ( v53 < v13
        && v53 >> 12 >= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
      {
        v39 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
        if ( v53 >> 12 <= v39 && (v13 + 1) >> 12 <= v39 )
          Teb[2] = v13 + 1;
      }
    }
LABEL_39:
    MiUnlockAndDereferenceVad((char *)v16);
    *a4 = v13 - v14 + 1;
    *a3 = v14;
    *a6 = v49;
    if ( v47 == 1 )
      return 1073741847LL;
    return 0LL;
  }
LABEL_70:
  if ( P )
    MiUnlockAndDereferenceVad((char *)P);
  return (unsigned int)v35;
}
