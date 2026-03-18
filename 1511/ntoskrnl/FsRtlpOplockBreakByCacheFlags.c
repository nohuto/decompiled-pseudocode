/*
 * XREFs of FsRtlpOplockBreakByCacheFlags @ 0x1400CB16C
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401ACDDC (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlOplockBreakH @ 0x14048D6B8 (FsRtlOplockBreakH.c)
 *     FsRtlCheckUpperOplock @ 0x1404C6440 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400C9078 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400C92DC (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1400C98A4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400C9A68 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1400CAD98 (FsRtlpComputeShareableOplockState.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     FsRtlpOplockKeysEqual @ 0x1400CBE68 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC430 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400CC94C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 */

__int64 __fastcall FsRtlpOplockBreakByCacheFlags(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9,
        __int64 a10)
{
  unsigned int v10; // r10d
  __int64 v11; // r9
  bool v13; // r12
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  char v24; // r14
  __int64 *v25; // rax
  __int64 *v26; // rbx
  char v27; // al
  _QWORD *j; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // r8
  __int64 v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // r14
  __int64 v48; // rdx
  __int64 *v49; // rax
  __int64 *v50; // rbx
  __int64 v51; // r14
  int v52; // edx
  int v53; // eax
  __int16 v54; // cx
  __int64 *v55; // rbx
  char v56; // al
  char v57; // cl
  __int64 *v58; // rbx
  __int64 v59; // r14
  char v60; // al
  _QWORD *v61; // r15
  _QWORD *i; // rbx
  _QWORD *v63; // rbx
  int v64; // eax
  _QWORD *v65; // rcx
  int v66; // eax
  int v67; // [rsp+30h] [rbp-98h]
  char v68; // [rsp+40h] [rbp-88h]
  char v69; // [rsp+41h] [rbp-87h]
  bool v70; // [rsp+42h] [rbp-86h]
  char v71; // [rsp+43h] [rbp-85h]
  unsigned int v72; // [rsp+44h] [rbp-84h]
  __int64 *v73; // [rsp+48h] [rbp-80h]
  __int64 *v74; // [rsp+48h] [rbp-80h]
  char v75[88]; // [rsp+70h] [rbp-58h] BYREF

  v10 = a4;
  v11 = a2;
  v72 = 0;
  v68 = 0;
  v71 = 0;
  v70 = 0;
  v69 = 1;
  v13 = (v10 & 8) != 0;
  if ( a5 == 28672 || a5 == 20480 || a5 == 0x4000 || a5 == 0x2000 )
  {
    if ( !a1 )
      return v72;
    v15 = *((_DWORD *)a1 + 36);
    if ( v15 != 1 && (v15 & a5) != 0 )
    {
      if ( (v10 & 8) != 0 )
      {
LABEL_14:
        v16 = *((_DWORD *)a1 + 36);
        if ( (v16 & 0x40) != 0 && (v10 & 0x10010000) != 0 )
          return (unsigned int)-1073739511;
        v17 = v16 & 0x1F0FFDF;
        if ( (v16 & 0x1F0FFDFu) <= 0x105040 )
        {
          if ( v17 != 1069120 )
          {
            v18 = v17 - 4096;
            if ( !v18 )
              goto LABEL_64;
            v19 = v18 - 16;
            if ( !v19 )
              goto LABEL_64;
            v20 = v19 - 8176;
            if ( !v20 )
            {
LABEL_75:
              if ( a5 == 0x2000 )
              {
                v49 = a1 + 7;
                v50 = (__int64 *)a1[7];
                while ( 1 )
                {
                  if ( v50 == v49 )
                    goto LABEL_115;
                  v51 = v50[2];
                  if ( !v13 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v50[3], 0LL) )
                      goto LABEL_89;
                    v10 = a4;
                  }
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( v50[7] )
                  {
                    v68 = 1;
                    goto LABEL_90;
                  }
                  v73 = (__int64 *)v50[1];
                  IoAcquireCancelSpinLock((PKIRQL)(v51 + 69));
                  _InterlockedExchange64((volatile __int64 *)(v51 + 104), 0LL);
                  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v51 + 69));
                  if ( *(_BYTE *)(v51 + 68) )
                  {
                    v50 = v73;
                    FsRtlpRemoveAndBreakRHIrp(*v73, (__int64)a1, 0, -1073741536, 0, 0, 0, 0);
                    v71 = 1;
                  }
                  else
                  {
                    v52 = 1;
                    v53 = 0;
                    v54 = 0;
                    if ( !*(_BYTE *)a2 )
                    {
                      v52 = 3;
                      v53 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                      v54 = *(_WORD *)(a2 + 26);
                    }
                    v50 = v73;
                    FsRtlpRemoveAndBreakRHIrp(*v73, (__int64)a1, 0, 0, 0x1000u, v52, v53, v54);
                    v69 = 0;
                    v68 = 1;
                    v70 = v13;
                  }
LABEL_89:
                  v10 = a4;
LABEL_90:
                  v50 = (__int64 *)*v50;
                  v11 = a2;
                  v49 = a1 + 7;
                }
              }
              if ( (a5 & 0x5000) == 0x5000 )
              {
                v55 = (__int64 *)a1[9];
                while ( v55 != a1 + 9 )
                {
                  if ( v13 || (v56 = FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v55[3], v10), v10 = a4, !v56) )
                  {
                    if ( (v10 & 0x10010000) != 0 )
                      return (unsigned int)-1073739511;
                    *((_DWORD *)v55 + 12) &= 0xFF0FFFFF;
                    *((_DWORD *)v55 + 12) |= 0x800000u;
                    v57 = v68;
                    if ( (a5 & 0x2000) != 0 )
                      v57 = 1;
                    v68 = v57;
                  }
                  v55 = (__int64 *)*v55;
                  v11 = a2;
                }
                v58 = (__int64 *)a1[7];
                while ( v58 != a1 + 7 )
                {
                  v59 = v58[2];
                  if ( !v13 )
                  {
                    if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v58[3], v10) )
                      goto LABEL_113;
                    v10 = a4;
                  }
                  if ( (v10 & 0x10010000) != 0 )
                    return (unsigned int)-1073739511;
                  if ( !v58[7] )
                  {
                    v74 = (__int64 *)v58[1];
                    IoAcquireCancelSpinLock((PKIRQL)(v59 + 69));
                    _InterlockedExchange64((volatile __int64 *)(v59 + 104), 0LL);
                    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v59 + 69));
                    v58 = v74;
                    if ( *(_BYTE *)(v59 + 68) )
                    {
                      FsRtlpRemoveAndBreakRHIrp(*v74, (__int64)a1, 0, -1073741536, 0, 0, 0, 0);
                      v71 = 1;
                    }
                    else
                    {
                      FsRtlpRemoveAndBreakRHIrp(*v74, (__int64)a1, 0, 0, 0, 1, 0, 0);
                      v69 = 0;
                      v60 = v68;
                      if ( (a5 & 0x2000) != 0 )
                        v60 = 1;
                      v68 = v60;
                      v70 = v13;
                    }
LABEL_113:
                    v10 = a4;
                  }
                  v58 = (__int64 *)*v58;
                  v11 = a2;
                }
              }
LABEL_115:
              if ( v71 )
                FsRtlpReleaseIrpsWaitingForRH((__int64)a1);
              if ( !v68 )
              {
                v61 = a1 + 9;
                if ( (_QWORD *)*v61 != v61 && (a5 & 0x2000) != 0 )
                {
                  if ( v13 )
                  {
LABEL_124:
                    v68 = 1;
                  }
                  else
                  {
                    for ( i = (_QWORD *)*v61; i != v61; i = (_QWORD *)*i )
                    {
                      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(i[3], *(_QWORD *)(a2 + 48), 0LL) )
                        goto LABEL_124;
                    }
                  }
                }
              }
LABEL_126:
              FsRtlpComputeShareableOplockState((__int64)a1);
              goto LABEL_161;
            }
            v21 = v20 - 8256;
            if ( v21 )
            {
              v22 = v21 - 0x2000;
              if ( v22 )
              {
                v23 = v22 - 16320;
                if ( v23 )
                {
                  if ( v23 == 1015808 )
                  {
                    v24 = 0;
                    if ( (a5 & 0x1000) != 0 )
                    {
                      v25 = a1 + 9;
                      v26 = (__int64 *)a1[9];
                      while ( v26 != v25 )
                      {
                        if ( v13 || (v27 = FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v26[3], v10), v10 = a4, !v27) )
                        {
                          v24 = 1;
                          if ( (v10 & 0x10010000) != 0 )
                            return (unsigned int)-1073739511;
                          *((_DWORD *)v26 + 12) &= 0xFF0FFFFF;
                          *((_DWORD *)v26 + 12) |= 0x800000u;
                        }
                        v26 = (__int64 *)*v26;
                        v11 = a2;
                        v25 = a1 + 9;
                      }
                      FsRtlpComputeShareableOplockState((__int64)a1);
                    }
                    if ( (a5 & 0x2000) != 0 )
                    {
                      if ( v24 )
                      {
LABEL_43:
                        v68 = 1;
                      }
                      else if ( (a5 & 0x1000) == 0 )
                      {
                        for ( j = (_QWORD *)a1[9]; j != a1 + 9; j = (_QWORD *)*j )
                        {
                          if ( v13 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0LL) )
                            goto LABEL_43;
                        }
                      }
                    }
                    goto LABEL_161;
                  }
LABEL_138:
                  if ( (v16 & 0x1000000) == 0 )
                    goto LABEL_161;
                  goto LABEL_157;
                }
LABEL_64:
                if ( (a5 & 0x1000) != 0 )
                {
                  v46 = a1 + 5;
                  v47 = (_QWORD *)a1[5];
                  while ( v47 != v46 )
                  {
                    v48 = v47[2];
                    if ( *(_DWORD *)(v48 + 24) == 590400 )
                    {
                      if ( v13
                        || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), *(_QWORD *)(v48 + 48), v10) )
                      {
                        if ( (a4 & 0x10010000) != 0 )
                          return (unsigned int)-1073739511;
                        v47 = (_QWORD *)v47[1];
                        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*v47, 0, 0);
                      }
                      v46 = a1 + 5;
                    }
                    v47 = (_QWORD *)*v47;
                    v11 = a2;
                    v10 = a4;
                  }
                }
                if ( (a1[18] & 0x1F0FFDF) != 0xB000 )
                  goto LABEL_126;
                goto LABEL_75;
              }
              if ( a5 == 0x4000 )
              {
                v29 = *a1;
                IoAcquireCancelSpinLock((PKIRQL)(*a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)(v29 + 104), 0LL);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v29 + 69));
                if ( *(_BYTE *)(v29 + 68) )
                  goto LABEL_46;
                v31 = *(_QWORD *)(v29 + 24);
                *(_QWORD *)v31 = 0LL;
                *(_QWORD *)(v31 + 8) = 0LL;
                *(_QWORD *)(v31 + 16) = 0LL;
                *(_DWORD *)v31 = 1572865;
                v32 = (*((_DWORD *)a1 + 36) >> 12) & 7;
                *(_DWORD *)(v31 + 4) = v32;
                *(_DWORD *)(v31 + 8) = 3;
                *(_DWORD *)(v31 + 12) |= 1u;
                *(_QWORD *)(v29 + 56) = 24LL;
                *(_DWORD *)(*a1 + 48LL) = 0;
                LOBYTE(v32) = 1;
                pIofCompleteRequest(*a1, v32);
                *a1 = 0LL;
                v33 = a1[18] & 0x20 | 0x507040;
              }
              else if ( a5 == 0x2000 )
              {
                v34 = *a1;
                IoAcquireCancelSpinLock((PKIRQL)(*a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)(v34 + 104), 0LL);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v34 + 69));
                if ( *(_BYTE *)(v34 + 68) )
                  goto LABEL_46;
                v35 = *(_QWORD *)(v34 + 24);
                *(_QWORD *)v35 = 0LL;
                *(_QWORD *)(v35 + 8) = 0LL;
                *(_QWORD *)(v35 + 16) = 0LL;
                *(_DWORD *)v35 = 1572865;
                v36 = (*((_DWORD *)a1 + 36) >> 12) & 7;
                *(_DWORD *)(v35 + 4) = v36;
                *(_DWORD *)(v35 + 8) = 5;
                *(_DWORD *)(v35 + 12) |= 1u;
                if ( !*(_BYTE *)a2 )
                {
                  *(_DWORD *)(v35 + 12) |= 2u;
                  *(_DWORD *)(v35 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL) + 20LL);
                  *(_WORD *)(v35 + 20) = *(_WORD *)(a2 + 26);
                }
                *(_QWORD *)(v34 + 56) = 24LL;
                *(_DWORD *)(*a1 + 48LL) = 0;
                LOBYTE(v36) = 1;
                pIofCompleteRequest(*a1, v36);
                *a1 = 0LL;
                v33 = a1[18] & 0x20 | 0x307040;
              }
              else
              {
                v37 = *a1;
                IoAcquireCancelSpinLock((PKIRQL)(*a1 + 69LL));
                _InterlockedExchange64((volatile __int64 *)(v37 + 104), 0LL);
                KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v37 + 69));
                if ( *(_BYTE *)(v37 + 68) )
                  goto LABEL_46;
                v38 = *(_QWORD *)(v37 + 24);
                *(_QWORD *)v38 = 0LL;
                *(_QWORD *)(v38 + 8) = 0LL;
                *(_QWORD *)(v38 + 16) = 0LL;
                *(_DWORD *)v38 = 1572865;
                v39 = (*((_DWORD *)a1 + 36) >> 12) & 7;
                *(_QWORD *)(v38 + 4) = (unsigned int)v39;
                *(_DWORD *)(v38 + 12) |= 1u;
                *(_QWORD *)(v37 + 56) = 24LL;
                *(_DWORD *)(*a1 + 48LL) = 0;
                LOBYTE(v39) = 1;
                pIofCompleteRequest(*a1, v39);
                *a1 = 0LL;
                v33 = a1[18] & 0x20 | 0x807040;
              }
            }
            else if ( (a5 & 0x5000) == 0x5000 )
            {
              v40 = *a1;
              IoAcquireCancelSpinLock((PKIRQL)(*a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)(v40 + 104), 0LL);
              KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v40 + 69));
              if ( *(_BYTE *)(v40 + 68) )
                goto LABEL_46;
              v41 = *(_QWORD *)(v40 + 24);
              *(_QWORD *)v41 = 0LL;
              *(_QWORD *)(v41 + 8) = 0LL;
              *(_QWORD *)(v41 + 16) = 0LL;
              *(_DWORD *)v41 = 1572865;
              v42 = (*((_DWORD *)a1 + 36) >> 12) & 7;
              *(_QWORD *)(v41 + 4) = (unsigned int)v42;
              *(_DWORD *)(v41 + 12) |= 1u;
              *(_QWORD *)(v40 + 56) = 24LL;
              *(_DWORD *)(*a1 + 48LL) = 0;
              LOBYTE(v42) = 1;
              pIofCompleteRequest(*a1, v42);
              *a1 = 0LL;
              v33 = a1[18] & 0x20 | 0x805040;
            }
            else
            {
              if ( (a5 & 0x4000) == 0 )
                goto LABEL_161;
              v43 = *a1;
              IoAcquireCancelSpinLock((PKIRQL)(*a1 + 69LL));
              _InterlockedExchange64((volatile __int64 *)(v43 + 104), 0LL);
              KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v43 + 69));
              if ( *(_BYTE *)(v43 + 68) )
              {
LABEL_46:
                FsRtlpModifyThreadPriorities((__int64)a1, 0LL, 0);
                FsRtlpClearOwnerThread((__int64)a1, 0LL);
                *((_BYTE *)a1 + 32) = 0;
                if ( *(_QWORD **)(*a1 + 56LL) == a1 )
                  *(_QWORD *)(*a1 + 56LL) = 0LL;
                *(_DWORD *)(*a1 + 48LL) = -1073741536;
                LOBYTE(v30) = 1;
                pIofCompleteRequest(*a1, v30);
                *a1 = 0LL;
                ObfDereferenceObjectWithTag((PVOID)a1[1], 0x746C6644u);
                a1[1] = 0LL;
                *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 1;
                while ( 1 )
                {
                  v65 = a1 + 11;
                  if ( (_QWORD *)*v65 == v65 )
                    break;
                  FsRtlpRemoveAndCompleteWaitingIrp(*v65);
                }
                goto LABEL_161;
              }
              v44 = *(_QWORD *)(v43 + 24);
              *(_QWORD *)v44 = 0LL;
              *(_QWORD *)(v44 + 8) = 0LL;
              *(_QWORD *)(v44 + 16) = 0LL;
              *(_DWORD *)v44 = 1572865;
              v45 = (*((_DWORD *)a1 + 36) >> 12) & 7;
              *(_DWORD *)(v44 + 4) = v45;
              *(_DWORD *)(v44 + 8) = 1;
              *(_DWORD *)(v44 + 12) |= 1u;
              *(_QWORD *)(v43 + 56) = 24LL;
              *(_DWORD *)(*a1 + 48LL) = 0;
              LOBYTE(v45) = 1;
              pIofCompleteRequest(*a1, v45);
              *a1 = 0LL;
              v33 = a1[18] & 0x20 | 0x105040;
            }
            *((_DWORD *)a1 + 36) = v33;
            v68 = 1;
            goto LABEL_161;
          }
          if ( (a5 & 0x1000) != 0 )
            *((_DWORD *)a1 + 36) = a1[18] & 0x20 | 0x805040;
LABEL_130:
          if ( (a5 & 0x5000) != 0 )
            v68 = 1;
          goto LABEL_161;
        }
        if ( v17 != 1077312 )
        {
          if ( v17 == 3174464 )
          {
            if ( a5 == 0x4000 )
            {
LABEL_150:
              v64 = a1[18] & 0x20 | 0x107040;
LABEL_156:
              *((_DWORD *)a1 + 36) = v64;
              goto LABEL_157;
            }
            if ( (a5 & 0x5000) != 0x5000 )
              goto LABEL_157;
LABEL_155:
            v64 = a1[18] & 0x20 | 0x807040;
            goto LABEL_156;
          }
          if ( v17 != 5271616 )
          {
            if ( v17 == 8400896 )
            {
              if ( (a5 & 0x3000) != 0 )
              {
                if ( (v10 & 0x10010000) != 0 )
                  return (unsigned int)-1073739511;
                if ( (a5 & 0x2000) != 0 )
                {
                  v63 = (_QWORD *)a1[9];
                  while ( v63 != a1 + 9 )
                  {
                    if ( v13 || !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v11 + 48), v63[3], 0LL) )
                    {
                      v68 = 1;
                      break;
                    }
                    v63 = (_QWORD *)*v63;
                    v11 = a2;
                  }
                }
              }
LABEL_161:
              if ( v68 )
              {
                if ( (a4 & 1) != 0 )
                {
                  v66 = *((_DWORD *)a1 + 36);
                  if ( (v66 & 0x10000) != 0 )
                    *((_DWORD *)a1 + 36) = v66 | 0x20000;
                  return 264;
                }
                else
                {
                  if ( v69 )
                  {
                    FsRtlpModifyThreadPriorities((__int64)a1, 0LL, 1);
                    FsRtlpOplockSendModernAppTermination(a1, 0LL);
                  }
                  *a9 = 0;
                  LOBYTE(v67) = v70;
                  return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, v75, v67, a10);
                }
              }
              return v72;
            }
            if ( v17 == 8409152 )
              goto LABEL_130;
            if ( v17 != 8417344 )
              goto LABEL_138;
LABEL_157:
            v68 = 1;
            goto LABEL_161;
          }
          if ( a5 == 0x2000 )
            goto LABEL_150;
        }
        if ( (a5 & 0x1000) == 0 )
          goto LABEL_157;
        goto LABEL_155;
      }
      if ( !(unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), a1[1], v10) )
      {
        v11 = a2;
        v10 = a4;
        goto LABEL_14;
      }
    }
    return 0;
  }
  if ( a3 )
  {
    *(_DWORD *)(a3 + 48) = -1073741597;
    pIofCompleteRequest(a3, 1LL);
  }
  return 3221225699LL;
}
