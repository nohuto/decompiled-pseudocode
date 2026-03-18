/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1400718FC
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401E2D4C (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockBreakH @ 0x140545364 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x14055C49C (FsRtlCheckUpperOplock.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x14006D71C (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14006D784 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x140070F7C (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwnerThread @ 0x1400725F8 (FsRtlpClearOwnerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007262C (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpComputeShareableOplockState @ 0x140073B18 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140073E88 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpWaitOnIrp @ 0x14016E528 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        IRP *a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9,
        __int64 a10)
{
  int v10; // r10d
  __int64 v12; // r9
  __int64 v14; // r8
  bool v15; // r12
  int v17; // eax
  char v18; // al
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  char v27; // r14
  __int64 v28; // rax
  __int64 *v29; // rbx
  char v30; // al
  _QWORD *j; // rbx
  __int64 v32; // rsi
  __int64 v33; // r8
  int v34; // eax
  PIRP v35; // rsi
  struct _IRP *MasterIrp; // r8
  PIRP v37; // rsi
  struct _IRP *v38; // r8
  PIRP v39; // rsi
  struct _IRP *v40; // r8
  PIRP v41; // rsi
  struct _IRP *v42; // r8
  _QWORD *v43; // rax
  _QWORD *v44; // r14
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 *v47; // rbx
  __int64 v48; // r14
  int v49; // edx
  int v50; // eax
  __int16 v51; // cx
  __int64 *v52; // rbx
  char v53; // al
  char v54; // cl
  __int64 *v55; // rbx
  __int64 v56; // r14
  char v57; // al
  _QWORD *v58; // r15
  _QWORD *i; // rbx
  _QWORD *v60; // rbx
  int v61; // eax
  _QWORD *v62; // rcx
  int v63; // eax
  int v64; // [rsp+30h] [rbp-98h]
  char v65; // [rsp+40h] [rbp-88h]
  char v66; // [rsp+41h] [rbp-87h]
  bool v67; // [rsp+42h] [rbp-86h]
  char v68; // [rsp+43h] [rbp-85h]
  unsigned int v69; // [rsp+44h] [rbp-84h]
  __int64 *v70; // [rsp+48h] [rbp-80h]
  __int64 *v71; // [rsp+48h] [rbp-80h]
  char v72[88]; // [rsp+70h] [rbp-58h] BYREF

  v10 = a4;
  v12 = a2;
  v14 = 0LL;
  v69 = 0;
  v65 = 0;
  v68 = 0;
  v67 = 0;
  v66 = 1;
  v15 = (v10 & 8) != 0;
  if ( a5 == 28672 || a5 == 20480 || a5 == 0x4000 || a5 == 0x2000 )
  {
    if ( !a1 )
      return v69;
    v17 = *(_DWORD *)(a1 + 144);
    if ( v17 != 1 && (v17 & a5) != 0 )
    {
      if ( (v10 & 8) != 0 )
      {
LABEL_14:
        v19 = *(_DWORD *)(a1 + 144);
        if ( (v19 & 0x40) != 0 && (v10 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        v20 = v19 & 0x1F0FFDF;
        if ( (v19 & 0x1F0FFDFu) <= 0x105040 )
        {
          if ( v20 != 1069120 )
          {
            v21 = v20 - 4096;
            if ( !v21 )
              goto LABEL_64;
            v22 = v21 - 16;
            if ( !v22 )
              goto LABEL_64;
            v23 = v22 - 8176;
            if ( !v23 )
            {
LABEL_75:
              if ( a5 == 0x2000 )
              {
                v46 = (__int64 *)(a1 + 56);
                v47 = *(__int64 **)(a1 + 56);
                while ( 1 )
                {
                  if ( v47 == v46 )
                    goto LABEL_115;
                  v48 = v47[2];
                  if ( !v15 )
                  {
                    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v47[3], 0) )
                      goto LABEL_89;
                    v10 = a4;
                  }
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( v47[7] )
                  {
                    v65 = 1;
                    goto LABEL_90;
                  }
                  v70 = (__int64 *)v47[1];
                  IoAcquireCancelSpinLock((PKIRQL)(v48 + 69));
                  _InterlockedExchange64((volatile __int64 *)(v48 + 104), 0LL);
                  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v48 + 69));
                  if ( *(_BYTE *)(v48 + 68) )
                  {
                    v47 = v70;
                    FsRtlpRemoveAndBreakRHIrp(*v70, a1, 0, -1073741536, 0, 0, 0, 0);
                    v68 = 1;
                  }
                  else
                  {
                    v49 = 1;
                    v50 = 0;
                    v51 = 0;
                    if ( !*(_BYTE *)a2 )
                    {
                      v49 = 3;
                      v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                      v51 = *(_WORD *)(a2 + 26);
                    }
                    v47 = v70;
                    FsRtlpRemoveAndBreakRHIrp(*v70, a1, 0, 0, 0x1000u, v49, v50, v51);
                    v66 = 0;
                    v65 = 1;
                    v67 = v15;
                  }
LABEL_89:
                  v10 = a4;
LABEL_90:
                  v47 = (__int64 *)*v47;
                  v12 = a2;
                  v46 = (__int64 *)(a1 + 56);
                }
              }
              if ( (a5 & 0x5000) == 0x5000 )
              {
                v52 = *(__int64 **)(a1 + 72);
                while ( v52 != (__int64 *)(a1 + 72) )
                {
                  if ( v15 || (v53 = FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v52[3], v10), v10 = a4, !v53) )
                  {
                    if ( (v10 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    *((_DWORD *)v52 + 12) &= 0xFF0FFFFF;
                    *((_DWORD *)v52 + 12) |= 0x800000u;
                    v54 = v65;
                    if ( (a5 & 0x2000) != 0 )
                      v54 = 1;
                    v65 = v54;
                  }
                  v52 = (__int64 *)*v52;
                  v12 = a2;
                }
                v55 = *(__int64 **)(a1 + 56);
                while ( v55 != (__int64 *)(a1 + 56) )
                {
                  v56 = v55[2];
                  if ( !v15 )
                  {
                    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v55[3], v10) )
                      goto LABEL_113;
                    v10 = a4;
                  }
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( !v55[7] )
                  {
                    v71 = (__int64 *)v55[1];
                    IoAcquireCancelSpinLock((PKIRQL)(v56 + 69));
                    _InterlockedExchange64((volatile __int64 *)(v56 + 104), 0LL);
                    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v56 + 69));
                    v55 = v71;
                    if ( *(_BYTE *)(v56 + 68) )
                    {
                      FsRtlpRemoveAndBreakRHIrp(*v71, a1, 0, -1073741536, 0, 0, 0, 0);
                      v68 = 1;
                    }
                    else
                    {
                      FsRtlpRemoveAndBreakRHIrp(*v71, a1, 0, 0, 0, 1, 0, 0);
                      v66 = 0;
                      v57 = v65;
                      if ( (a5 & 0x2000) != 0 )
                        v57 = 1;
                      v65 = v57;
                      v67 = v15;
                    }
LABEL_113:
                    v10 = a4;
                  }
                  v55 = (__int64 *)*v55;
                  v12 = a2;
                }
              }
LABEL_115:
              if ( v68 )
                FsRtlpReleaseIrpsWaitingForRH(a1);
              if ( !v65 )
              {
                v58 = (_QWORD *)(a1 + 72);
                if ( (_QWORD *)*v58 != v58 && (a5 & 0x2000) != 0 )
                {
                  if ( v15 )
                  {
LABEL_124:
                    v65 = 1;
                  }
                  else
                  {
                    for ( i = (_QWORD *)*v58; i != v58; i = (_QWORD *)*i )
                    {
                      if ( !FsRtlpOplockKeysEqual(i[3], *(_QWORD *)(a2 + 48), 0) )
                        goto LABEL_124;
                    }
                  }
                }
              }
LABEL_126:
              FsRtlpComputeShareableOplockState(a1);
              goto LABEL_161;
            }
            v24 = v23 - 8256;
            if ( v24 )
            {
              v25 = v24 - 0x2000;
              if ( v25 )
              {
                v26 = v25 - 16320;
                if ( v26 )
                {
                  if ( v26 == 1015808 )
                  {
                    v27 = 0;
                    if ( (a5 & 0x1000) != 0 )
                    {
                      v28 = a1 + 72;
                      v29 = *(__int64 **)(a1 + 72);
                      while ( v29 != (__int64 *)v28 )
                      {
                        if ( v15 || (v30 = FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v29[3], v10), v10 = a4, !v30) )
                        {
                          v27 = 1;
                          if ( (v10 & 0x10010000) != 0 )
                            return (unsigned int)-1073739511;
                          *((_DWORD *)v29 + 12) &= 0xFF0FFFFF;
                          *((_DWORD *)v29 + 12) |= 0x800000u;
                        }
                        v29 = (__int64 *)*v29;
                        v12 = a2;
                        v28 = a1 + 72;
                      }
                      FsRtlpComputeShareableOplockState(a1);
                    }
                    if ( (a5 & 0x2000) != 0 )
                    {
                      if ( v27 )
                      {
LABEL_43:
                        v65 = 1;
                      }
                      else if ( (a5 & 0x1000) == 0 )
                      {
                        for ( j = *(_QWORD **)(a1 + 72); j != (_QWORD *)(a1 + 72); j = (_QWORD *)*j )
                        {
                          if ( v15 || !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0) )
                            goto LABEL_43;
                        }
                      }
                    }
                    goto LABEL_161;
                  }
LABEL_138:
                  if ( (v19 & 0x1000000) == 0 )
                    goto LABEL_161;
                  goto LABEL_157;
                }
LABEL_64:
                if ( (a5 & 0x1000) != 0 )
                {
                  v43 = (_QWORD *)(a1 + 40);
                  v44 = *(_QWORD **)(a1 + 40);
                  while ( v44 != v43 )
                  {
                    v45 = v44[2];
                    if ( *(_DWORD *)(v45 + 24) == 590400 )
                    {
                      if ( v15 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), *(_QWORD *)(v45 + 48), v10) )
                      {
                        if ( (a4 & 0x10010000) != 0 )
                          return (unsigned int)-1073739511;
                        v44 = (_QWORD *)v44[1];
                        FsRtlpRemoveAndCompleteReadOnlyIrp(*v44, 0LL, 0LL);
                      }
                      v43 = (_QWORD *)(a1 + 40);
                    }
                    v44 = (_QWORD *)*v44;
                    v12 = a2;
                    v10 = a4;
                  }
                }
                if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
                  goto LABEL_126;
                goto LABEL_75;
              }
              if ( a5 == 0x4000 )
              {
                v32 = *(_QWORD *)a1;
                IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)(v32 + 104), 0LL);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v32 + 69));
                if ( *(_BYTE *)(v32 + 68) )
                  goto LABEL_46;
                v33 = *(_QWORD *)(v32 + 24);
                *(_QWORD *)v33 = 0LL;
                *(_QWORD *)(v33 + 8) = 0LL;
                *(_QWORD *)(v33 + 16) = 0LL;
                *(_DWORD *)v33 = 1572865;
                *(_DWORD *)(v33 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                *(_DWORD *)(v33 + 8) = 3;
                *(_DWORD *)(v33 + 12) |= 1u;
                *(_QWORD *)(v32 + 56) = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                pIofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v34 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
              }
              else if ( a5 == 0x2000 )
              {
                v35 = *(PIRP *)a1;
                IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)&v35->CancelRoutine, 0LL);
                KeReleaseQueuedSpinLock(7uLL, v35->CancelIrql);
                if ( v35->Cancel )
                  goto LABEL_46;
                MasterIrp = v35->AssociatedIrp.MasterIrp;
                *(_QWORD *)&MasterIrp->Type = 0LL;
                MasterIrp->MdlAddress = 0LL;
                *(_QWORD *)&MasterIrp->Flags = 0LL;
                *(_DWORD *)&MasterIrp->Type = 1572865;
                *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(MasterIrp->MdlAddress) = 5;
                HIDWORD(MasterIrp->MdlAddress) |= 1u;
                if ( !*(_BYTE *)a2 )
                {
                  HIDWORD(MasterIrp->MdlAddress) |= 2u;
                  MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                  *((_WORD *)&MasterIrp->Flags + 2) = *(_WORD *)(a2 + 26);
                }
                v35->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                pIofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v34 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
              }
              else
              {
                v37 = *(PIRP *)a1;
                IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)&v37->CancelRoutine, 0LL);
                KeReleaseQueuedSpinLock(7uLL, v37->CancelIrql);
                if ( v37->Cancel )
                  goto LABEL_46;
                v38 = v37->AssociatedIrp.MasterIrp;
                *(_QWORD *)&v38->Type = 0LL;
                v38->MdlAddress = 0LL;
                *(_QWORD *)&v38->Flags = 0LL;
                *(_DWORD *)&v38->Type = 1572865;
                *(_DWORD *)(&v38->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v38->MdlAddress) = 0;
                HIDWORD(v38->MdlAddress) |= 1u;
                v37->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                pIofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v34 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
              }
            }
            else if ( (a5 & 0x5000) == 0x5000 )
            {
              v39 = *(PIRP *)a1;
              IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)&v39->CancelRoutine, 0LL);
              KeReleaseQueuedSpinLock(7uLL, v39->CancelIrql);
              if ( v39->Cancel )
                goto LABEL_46;
              v40 = v39->AssociatedIrp.MasterIrp;
              *(_QWORD *)&v40->Type = 0LL;
              v40->MdlAddress = 0LL;
              *(_QWORD *)&v40->Flags = 0LL;
              *(_DWORD *)&v40->Type = 1572865;
              *(_DWORD *)(&v40->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(v40->MdlAddress) = 0;
              HIDWORD(v40->MdlAddress) |= 1u;
              v39->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              pIofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v34 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
            }
            else
            {
              if ( (a5 & 0x4000) == 0 )
                goto LABEL_161;
              v41 = *(PIRP *)a1;
              IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)&v41->CancelRoutine, 0LL);
              KeReleaseQueuedSpinLock(7uLL, v41->CancelIrql);
              if ( v41->Cancel )
              {
LABEL_46:
                FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
                FsRtlpClearOwnerThread(a1, 0LL);
                *(_BYTE *)(a1 + 32) = 0;
                if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
                  *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
                pIofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
                while ( 1 )
                {
                  v62 = (_QWORD *)(a1 + 88);
                  if ( (_QWORD *)*v62 == v62 )
                    break;
                  FsRtlpRemoveAndCompleteWaitingIrp(*v62);
                }
                goto LABEL_161;
              }
              v42 = v41->AssociatedIrp.MasterIrp;
              *(_QWORD *)&v42->Type = 0LL;
              v42->MdlAddress = 0LL;
              *(_QWORD *)&v42->Flags = 0LL;
              *(_DWORD *)&v42->Type = 1572865;
              *(_DWORD *)(&v42->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(v42->MdlAddress) = 1;
              HIDWORD(v42->MdlAddress) |= 1u;
              v41->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              pIofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v34 = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
            }
            *(_DWORD *)(a1 + 144) = v34;
            v65 = 1;
            goto LABEL_161;
          }
          if ( (a5 & 0x1000) != 0 )
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_130:
          if ( (a5 & 0x5000) != 0 )
            v65 = 1;
          goto LABEL_161;
        }
        v14 = 1077312LL;
        if ( v20 != 1077312 )
        {
          if ( v20 == 3174464 )
          {
            if ( a5 == 0x4000 )
            {
LABEL_150:
              v61 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_156:
              *(_DWORD *)(a1 + 144) = v61;
              goto LABEL_157;
            }
            if ( (a5 & 0x5000) != 0x5000 )
              goto LABEL_157;
LABEL_155:
            v61 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
            goto LABEL_156;
          }
          if ( v20 != 5271616 )
          {
            if ( v20 == 8400896 )
            {
              if ( (a5 & 0x3000) != 0 )
              {
                if ( (v10 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                if ( (a5 & 0x2000) != 0 )
                {
                  v60 = *(_QWORD **)(a1 + 72);
                  while ( v60 != (_QWORD *)(a1 + 72) )
                  {
                    if ( v15 || !FsRtlpOplockKeysEqual(*(_QWORD *)(v12 + 48), v60[3], 0) )
                    {
                      v65 = 1;
                      break;
                    }
                    v60 = (_QWORD *)*v60;
                    v12 = a2;
                  }
                }
              }
LABEL_161:
              if ( v65 )
              {
                if ( (a4 & 1) != 0 )
                {
                  v63 = *(_DWORD *)(a1 + 144);
                  if ( (v63 & 0x10000) != 0 )
                    *(_DWORD *)(a1 + 144) = v63 | 0x20000;
                  return 264;
                }
                else
                {
                  if ( v66 )
                  {
                    LOBYTE(v14) = 1;
                    FsRtlpModifyThreadPriorities(a1, 0LL, v14);
                    FsRtlpOplockSendModernAppTermination(a1, 0LL);
                  }
                  *a9 = 0;
                  LOBYTE(v64) = v67;
                  return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, v72, v64, a10);
                }
              }
              return v69;
            }
            if ( v20 == 8409152 )
              goto LABEL_130;
            if ( v20 != 8417344 )
              goto LABEL_138;
LABEL_157:
            v65 = 1;
            goto LABEL_161;
          }
          if ( a5 == 0x2000 )
            goto LABEL_150;
        }
        if ( (a5 & 0x1000) == 0 )
          goto LABEL_157;
        goto LABEL_155;
      }
      v18 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), v10);
      v14 = 0LL;
      if ( !v18 )
      {
        v12 = a2;
        v10 = a4;
        goto LABEL_14;
      }
    }
    return 0;
  }
  if ( a3 )
  {
    a3->IoStatus.Status = -1073741597;
    pIofCompleteRequest(a3, 1);
  }
  return 3221225699LL;
}
