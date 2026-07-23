/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x140078674
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401B908C (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockBreakH @ 0x1404C47E0 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x14054ABA8 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140077824 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x140078270 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x14007B258 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14007B748 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400A0EB4 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AACBC (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400AAFF4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1400B215C (FsRtlpWaitOnIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     EvaluateCurrentState @ 0x1401B8EC0 (EvaluateCurrentState.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        __int64 a1,
        __int64 a2,
        IRP *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9,
        __int64 a10)
{
  __int64 v11; // r14
  __int64 v13; // r8
  bool v14; // r15
  int v16; // eax
  char v17; // al
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  char v26; // cl
  __int64 v27; // rax
  __int64 *v28; // rbx
  char v29; // al
  _QWORD *k; // rbx
  __int64 v31; // rsi
  __int64 v32; // r8
  int v33; // eax
  PIRP v34; // rsi
  struct _IRP *MasterIrp; // r8
  PIRP v36; // rsi
  struct _IRP *v37; // r8
  PIRP v38; // rsi
  struct _IRP *v39; // r8
  PIRP v40; // rsi
  struct _IRP *v41; // r8
  _QWORD *v42; // rax
  _QWORD *v43; // r14
  __int64 v44; // rdx
  PVOID *v45; // rax
  PVOID *v46; // rbx
  int v47; // edx
  int v48; // eax
  __int16 v49; // cx
  int v50; // edx
  int v51; // eax
  __int16 v52; // cx
  __int64 *i; // rbx
  char v54; // al
  char v55; // al
  _QWORD *v56; // rax
  _QWORD *v57; // rbx
  __int64 v58; // r12
  char v59; // al
  _QWORD *v60; // r12
  _QWORD *j; // rbx
  _QWORD *m; // rbx
  int v63; // eax
  _QWORD *v64; // rcx
  int v65; // eax
  __int16 v66[2]; // [rsp+30h] [rbp-A8h]
  char v67; // [rsp+40h] [rbp-98h]
  char v68; // [rsp+41h] [rbp-97h]
  char v69; // [rsp+42h] [rbp-96h]
  bool v70; // [rsp+43h] [rbp-95h]
  unsigned int v71; // [rsp+44h] [rbp-94h]
  char v72; // [rsp+48h] [rbp-90h]
  PVOID v73; // [rsp+70h] [rbp-68h]
  char v74[88]; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v77; // [rsp+F8h] [rbp+20h]

  v77 = a4;
  v11 = a2;
  v13 = 0LL;
  v71 = 0;
  v67 = 0;
  v68 = 0;
  v70 = 0;
  v69 = 1;
  v14 = (a4 & 8) != 0;
  if ( a5 == 28672 || a5 == 20480 || a5 == 0x4000 || a5 == 0x2000 )
  {
    if ( !a1 )
      return v71;
    v16 = *(_DWORD *)(a1 + 144);
    if ( v16 != 1 && (v16 & a5) != 0 )
    {
      if ( (a4 & 8) != 0 )
      {
LABEL_14:
        v18 = *(_DWORD *)(a1 + 144);
        if ( (v18 & 0x40) != 0 && (a4 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        v19 = v18 & 0x1F0FFDF;
        if ( (v18 & 0x1F0FFDFu) <= 0x105040 )
        {
          if ( v19 != 1069120 )
          {
            v20 = v19 - 4096;
            if ( !v20 )
              goto LABEL_64;
            v21 = v20 - 16;
            if ( !v21 )
              goto LABEL_64;
            v22 = v21 - 8176;
            if ( !v22 )
            {
LABEL_76:
              if ( a5 == 0x2000 )
              {
                v45 = (PVOID *)(a1 + 56);
                v46 = *(PVOID **)(a1 + 56);
                while ( 1 )
                {
                  if ( v46 == v45 )
                    goto LABEL_126;
                  v73 = v46[2];
                  if ( !v14 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v46[3], 0LL) )
                      goto LABEL_96;
                    a4 = v77;
                  }
                  if ( (a4 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( v46[7] )
                  {
                    v67 = 1;
                    goto LABEL_97;
                  }
                  v46 = (PVOID *)v46[1];
                  if ( (unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails) )
                  {
                    v47 = 1;
                    v48 = 0;
                    v49 = 0;
                    if ( !*(_BYTE *)v11 )
                    {
                      v47 = 3;
                      v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 20LL);
                      v49 = *(_WORD *)(v11 + 26);
                    }
                    if ( (unsigned __int8)FsRtlpRemoveAndCompleteRHIrp(*v46, v47, v48, v49) )
                      goto LABEL_95;
                    v68 = 1;
                  }
                  else
                  {
                    IoAcquireCancelSpinLock((PKIRQL)v73 + 69);
                    _InterlockedExchange64((volatile __int64 *)v73 + 13, 0LL);
                    KeReleaseQueuedSpinLock(7uLL, *((_BYTE *)v73 + 69));
                    if ( !*((_BYTE *)v73 + 68) )
                    {
                      v50 = 1;
                      v51 = 0;
                      v52 = 0;
                      if ( !*(_BYTE *)v11 )
                      {
                        v50 = 3;
                        v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 20LL);
                        v52 = *(_WORD *)(v11 + 26);
                      }
                      FsRtlpRemoveAndBreakRHIrp(*v46, a1, 0, 0, 0x1000u, v50, v51, v52);
LABEL_95:
                      v69 = 0;
                      v67 = 1;
                      v70 = v14;
                      goto LABEL_96;
                    }
                    FsRtlpRemoveAndBreakRHIrp(*v46, a1, 0, -1073741536, 0, 0, 0, 0);
                    v68 = 1;
                  }
LABEL_96:
                  a4 = v77;
LABEL_97:
                  v46 = (PVOID *)*v46;
                  v45 = (PVOID *)(a1 + 56);
                }
              }
              if ( (a5 & 0x5000) == 0x5000 )
              {
                for ( i = *(__int64 **)(a1 + 72); i != (__int64 *)(a1 + 72); i = (__int64 *)*i )
                {
                  if ( !v14 )
                  {
                    v54 = FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), i[3], a4);
                    a4 = v77;
                    if ( v54 )
                      continue;
                  }
                  if ( (a4 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  *((_DWORD *)i + 12) &= 0xFF0FFFFF;
                  *((_DWORD *)i + 12) |= 0x800000u;
                  v55 = v67;
                  if ( (a5 & 0x2000) != 0 )
                    v55 = 1;
                  v67 = v55;
                }
                v56 = (_QWORD *)(a1 + 56);
                v57 = *(_QWORD **)(a1 + 56);
                while ( 1 )
                {
                  if ( v57 == v56 )
                    goto LABEL_126;
                  v58 = v57[2];
                  if ( !v14 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v57[3], a4) )
                      goto LABEL_124;
                    a4 = v77;
                  }
                  if ( (a4 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( !v57[7] )
                    break;
LABEL_125:
                  v57 = (_QWORD *)*v57;
                  v56 = (_QWORD *)(a1 + 56);
                }
                v57 = (_QWORD *)v57[1];
                if ( (unsigned int)EvaluateCurrentState(&g_Feature_Servicing_37708835_37708835_FeatureDescriptorDetails) )
                {
                  if ( !(unsigned __int8)FsRtlpRemoveAndCompleteRHIrp((PVOID)*v57, 1, 0, 0) )
                  {
                    v68 = 1;
LABEL_124:
                    a4 = v77;
                    goto LABEL_125;
                  }
                }
                else
                {
                  IoAcquireCancelSpinLock((PKIRQL)(v58 + 69));
                  _InterlockedExchange64((volatile __int64 *)(v58 + 104), 0LL);
                  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v58 + 69));
                  if ( *(_BYTE *)(v58 + 68) )
                  {
                    FsRtlpRemoveAndBreakRHIrp((PVOID)*v57, a1, 0, -1073741536, 0, 0, 0, 0);
                    v68 = 1;
                    goto LABEL_124;
                  }
                  FsRtlpRemoveAndBreakRHIrp((PVOID)*v57, a1, 0, 0, 0, 1, 0, 0);
                }
                v69 = 0;
                v59 = v67;
                if ( (a5 & 0x2000) != 0 )
                  v59 = 1;
                v67 = v59;
                v70 = v14;
                goto LABEL_124;
              }
LABEL_126:
              if ( v68 )
                FsRtlpReleaseIrpsWaitingForRH(a1);
              if ( !v67 )
              {
                v60 = (_QWORD *)(a1 + 72);
                if ( (_QWORD *)*v60 != v60 && (a5 & 0x2000) != 0 )
                {
                  if ( v14 )
                  {
LABEL_135:
                    v67 = 1;
                  }
                  else
                  {
                    for ( j = (_QWORD *)*v60; j != v60; j = (_QWORD *)*j )
                    {
                      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(j[3], *(_QWORD *)(v11 + 48), 0LL) )
                        goto LABEL_135;
                    }
                  }
                }
              }
LABEL_137:
              FsRtlpComputeShareableOplockState(a1);
              goto LABEL_171;
            }
            v23 = v22 - 8256;
            if ( v23 )
            {
              v24 = v23 - 0x2000;
              if ( v24 )
              {
                v25 = v24 - 16320;
                if ( v25 )
                {
                  if ( v25 == 1015808 )
                  {
                    v26 = 0;
                    v72 = 0;
                    if ( (a5 & 0x1000) != 0 )
                    {
                      v27 = a1 + 72;
                      v28 = *(__int64 **)(a1 + 72);
                      while ( v28 != (__int64 *)v27 )
                      {
                        if ( v14 || (v29 = FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v28[3], a4), a4 = v77, !v29) )
                        {
                          v72 = 1;
                          if ( (a4 & 0x10010000) != 0 )
                            return (unsigned int)-1073739511;
                          *((_DWORD *)v28 + 12) &= 0xFF0FFFFF;
                          *((_DWORD *)v28 + 12) |= 0x800000u;
                        }
                        v28 = (__int64 *)*v28;
                        v27 = a1 + 72;
                      }
                      FsRtlpComputeShareableOplockState(a1);
                      v26 = v72;
                    }
                    if ( (a5 & 0x2000) != 0 )
                    {
                      if ( v26 )
                      {
LABEL_43:
                        v67 = 1;
                      }
                      else if ( (a5 & 0x1000) == 0 )
                      {
                        for ( k = *(_QWORD **)(a1 + 72); k != (_QWORD *)(a1 + 72); k = (_QWORD *)*k )
                        {
                          if ( v14 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), k[3], 0LL) )
                            goto LABEL_43;
                        }
                      }
                    }
                    goto LABEL_171;
                  }
LABEL_149:
                  if ( (v18 & 0x1000000) == 0 )
                    goto LABEL_171;
                  goto LABEL_167;
                }
LABEL_64:
                if ( (a5 & 0x1000) != 0 )
                {
                  v42 = (_QWORD *)(a1 + 40);
                  v43 = *(_QWORD **)(a1 + 40);
                  while ( v43 != v42 )
                  {
                    v44 = v43[2];
                    if ( *(_DWORD *)(v44 + 24) == 590400 )
                    {
                      if ( v14
                        || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v44 + 48), a4) )
                      {
                        if ( (v77 & 0x10010000) != 0 )
                          return (unsigned int)-1073739511;
                        v43 = (_QWORD *)v43[1];
                        FsRtlpRemoveAndCompleteReadOnlyIrp(*v43, 0LL, 0LL);
                      }
                      v42 = (_QWORD *)(a1 + 40);
                    }
                    v43 = (_QWORD *)*v43;
                    a4 = v77;
                  }
                  v11 = a2;
                }
                if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) != 0xB000 )
                  goto LABEL_137;
                goto LABEL_76;
              }
              if ( a5 == 0x4000 )
              {
                v31 = *(_QWORD *)a1;
                IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)(v31 + 104), 0LL);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v31 + 69));
                if ( *(_BYTE *)(v31 + 68) )
                  goto LABEL_46;
                v32 = *(_QWORD *)(v31 + 24);
                *(_QWORD *)v32 = 0LL;
                *(_QWORD *)(v32 + 8) = 0LL;
                *(_QWORD *)(v32 + 16) = 0LL;
                *(_DWORD *)v32 = 1572865;
                *(_DWORD *)(v32 + 4) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                *(_DWORD *)(v32 + 8) = 3;
                *(_DWORD *)(v32 + 12) |= 1u;
                *(_QWORD *)(v31 + 56) = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                pIofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v33 = *(_DWORD *)(a1 + 144) & 0x20 | 0x507040;
              }
              else if ( a5 == 0x2000 )
              {
                v34 = *(PIRP *)a1;
                IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)&v34->CancelRoutine, 0LL);
                KeReleaseQueuedSpinLock(7uLL, v34->CancelIrql);
                if ( v34->Cancel )
                  goto LABEL_46;
                MasterIrp = v34->AssociatedIrp.MasterIrp;
                *(_QWORD *)&MasterIrp->Type = 0LL;
                MasterIrp->MdlAddress = 0LL;
                *(_QWORD *)&MasterIrp->Flags = 0LL;
                *(_DWORD *)&MasterIrp->Type = 1572865;
                *(_DWORD *)(&MasterIrp->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(MasterIrp->MdlAddress) = 5;
                HIDWORD(MasterIrp->MdlAddress) |= 1u;
                if ( !*(_BYTE *)v11 )
                {
                  HIDWORD(MasterIrp->MdlAddress) |= 2u;
                  MasterIrp->Flags = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 20LL);
                  *((_WORD *)&MasterIrp->Flags + 2) = *(_WORD *)(v11 + 26);
                }
                v34->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                pIofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v33 = *(_DWORD *)(a1 + 144) & 0x20 | 0x307040;
              }
              else
              {
                v36 = *(PIRP *)a1;
                IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)&v36->CancelRoutine, 0LL);
                KeReleaseQueuedSpinLock(7uLL, v36->CancelIrql);
                if ( v36->Cancel )
                  goto LABEL_46;
                v37 = v36->AssociatedIrp.MasterIrp;
                *(_QWORD *)&v37->Type = 0LL;
                v37->MdlAddress = 0LL;
                *(_QWORD *)&v37->Flags = 0LL;
                *(_DWORD *)&v37->Type = 1572865;
                *(_DWORD *)(&v37->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
                LODWORD(v37->MdlAddress) = 0;
                HIDWORD(v37->MdlAddress) |= 1u;
                v36->IoStatus.Information = 24LL;
                *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
                pIofCompleteRequest(*(PIRP *)a1, 1);
                *(_QWORD *)a1 = 0LL;
                v33 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
              }
            }
            else if ( (a5 & 0x5000) == 0x5000 )
            {
              v38 = *(PIRP *)a1;
              IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)&v38->CancelRoutine, 0LL);
              KeReleaseQueuedSpinLock(7uLL, v38->CancelIrql);
              if ( v38->Cancel )
                goto LABEL_46;
              v39 = v38->AssociatedIrp.MasterIrp;
              *(_QWORD *)&v39->Type = 0LL;
              v39->MdlAddress = 0LL;
              *(_QWORD *)&v39->Flags = 0LL;
              *(_DWORD *)&v39->Type = 1572865;
              *(_DWORD *)(&v39->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(v39->MdlAddress) = 0;
              HIDWORD(v39->MdlAddress) |= 1u;
              v38->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              pIofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v33 = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
            }
            else
            {
              if ( (a5 & 0x4000) == 0 )
                goto LABEL_171;
              v40 = *(PIRP *)a1;
              IoAcquireCancelSpinLock((PKIRQL)(*(_QWORD *)a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)&v40->CancelRoutine, 0LL);
              KeReleaseQueuedSpinLock(7uLL, v40->CancelIrql);
              if ( v40->Cancel )
              {
LABEL_46:
                FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
                FsRtlpClearOwner(a1, 0LL);
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
                  v64 = (_QWORD *)(a1 + 88);
                  if ( (_QWORD *)*v64 == v64 )
                    break;
                  FsRtlpRemoveAndCompleteWaitingIrp(*v64);
                }
                goto LABEL_171;
              }
              v41 = v40->AssociatedIrp.MasterIrp;
              *(_QWORD *)&v41->Type = 0LL;
              v41->MdlAddress = 0LL;
              *(_QWORD *)&v41->Flags = 0LL;
              *(_DWORD *)&v41->Type = 1572865;
              *(_DWORD *)(&v41->Size + 1) = (*(_DWORD *)(a1 + 144) >> 12) & 7;
              LODWORD(v41->MdlAddress) = 1;
              HIDWORD(v41->MdlAddress) |= 1u;
              v40->IoStatus.Information = 24LL;
              *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
              pIofCompleteRequest(*(PIRP *)a1, 1);
              *(_QWORD *)a1 = 0LL;
              v33 = *(_DWORD *)(a1 + 144) & 0x20 | 0x105040;
            }
            *(_DWORD *)(a1 + 144) = v33;
            v67 = 1;
            goto LABEL_171;
          }
          if ( (a5 & 0x1000) != 0 )
            *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 0x805040;
LABEL_141:
          if ( (a5 & 0x5000) != 0 )
            v67 = 1;
          goto LABEL_171;
        }
        v13 = 1077312LL;
        if ( v19 != 1077312 )
        {
          if ( v19 == 3174464 )
          {
            if ( a5 == 0x4000 )
            {
LABEL_160:
              v63 = *(_DWORD *)(a1 + 144) & 0x20 | 0x107040;
LABEL_166:
              *(_DWORD *)(a1 + 144) = v63;
              goto LABEL_167;
            }
            if ( (a5 & 0x5000) != 0x5000 )
              goto LABEL_167;
LABEL_165:
            v63 = *(_DWORD *)(a1 + 144) & 0x20 | 0x807040;
            goto LABEL_166;
          }
          if ( v19 != 5271616 )
          {
            if ( v19 == 8400896 )
            {
              if ( (a5 & 0x3000) != 0 )
              {
                if ( (a4 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                if ( (a5 & 0x2000) != 0 )
                {
                  for ( m = *(_QWORD **)(a1 + 72); m != (_QWORD *)(a1 + 72); m = (_QWORD *)*m )
                  {
                    if ( v14 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), m[3], 0LL) )
                      goto LABEL_43;
                  }
                }
              }
LABEL_171:
              if ( v67 )
              {
                if ( (v77 & 1) != 0 )
                {
                  v65 = *(_DWORD *)(a1 + 144);
                  if ( (v65 & 0x10000) != 0 )
                    *(_DWORD *)(a1 + 144) = v65 | 0x20000;
                  return 264;
                }
                else
                {
                  if ( v69 )
                  {
                    LOBYTE(v13) = 1;
                    FsRtlpModifyThreadPriorities(a1, 0LL, v13);
                    FsRtlpOplockSendModernAppTermination(a1, 0LL);
                  }
                  *a9 = 0;
                  LOBYTE(v66[0]) = v70;
                  return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, v74, *(_DWORD *)v66, a10);
                }
              }
              return v71;
            }
            if ( v19 == 8409152 )
              goto LABEL_141;
            if ( v19 != 8417344 )
              goto LABEL_149;
LABEL_167:
            v67 = 1;
            goto LABEL_171;
          }
          if ( a5 == 0x2000 )
            goto LABEL_160;
        }
        if ( (a5 & 0x1000) == 0 )
          goto LABEL_167;
        goto LABEL_165;
      }
      v17 = FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), a4);
      v13 = 0LL;
      if ( !v17 )
      {
        a4 = v77;
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
