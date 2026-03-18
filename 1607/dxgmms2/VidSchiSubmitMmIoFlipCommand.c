/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C0002180
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00A0314 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0001AB0 (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C0002D90 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008B80 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000ABF0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000B200 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiRewindPacket @ 0x1C000E11C (VidSchiRewindPacket.c)
 *     VidSchiCompletePendingFlip @ 0x1C0011A70 (VidSchiCompletePendingFlip.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C0011F58 (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002546C (VidSchiRestartQueuedFlip.c)
 *     VidSchIsVSyncEnabled @ 0x1C00425E0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r13
  struct _VIDSCH_QUEUE_PACKET *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // r14
  unsigned int v9; // edi
  KIRQL v10; // r12
  unsigned __int64 i; // r9
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  bool v14; // zf
  int v15; // ebx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  unsigned __int16 v20; // dx
  unsigned int v21; // r8d
  int v22; // ecx
  _DWORD *v23; // rdi
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  ULONG v32; // r10d
  int v33; // r13d
  unsigned int v34; // eax
  unsigned int v35; // ecx
  int v36; // r11d
  __int64 v37; // rdx
  _BOOL8 v38; // r8
  int v39; // ecx
  __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // r10d
  unsigned int v45; // r11d
  bool v46; // cc
  __int64 v47; // rax
  int v48; // edx
  int v49; // eax
  void (__fastcall *v50)(_QWORD, _QWORD); // rax
  void (__fastcall *v51)(_QWORD, _QWORD); // rax
  unsigned int v52; // edx
  _QWORD *v53; // rax
  int v54; // ecx
  int v55; // ecx
  unsigned int v56; // edx
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // [rsp+30h] [rbp-A8h]
  unsigned int v60; // [rsp+34h] [rbp-A4h]
  unsigned int v61; // [rsp+38h] [rbp-A0h]
  _QWORD *v62; // [rsp+40h] [rbp-98h]
  unsigned int v63; // [rsp+40h] [rbp-98h]
  int v64; // [rsp+48h] [rbp-90h]
  _DWORD *v65; // [rsp+60h] [rbp-78h]
  _QWORD *v66; // [rsp+68h] [rbp-70h]
  __int64 v67; // [rsp+70h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-60h] BYREF
  __int64 v69; // [rsp+E0h] [rbp+8h] BYREF
  KIRQL v70; // [rsp+E8h] [rbp+10h]
  BOOL v71; // [rsp+F0h] [rbp+18h]
  int v72; // [rsp+F8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 11);
  v2 = a1;
  v3 = *((unsigned int *)a1 + 38);
  v60 = v3;
  v4 = (unsigned int)v3;
  v5 = *(_QWORD *)(v1 + 104);
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (_QWORD *)(v6 + 8 * v3 + 2968);
  v62 = v7;
  v8 = *v7;
  if ( (*(_BYTE *)(v6 + 2828) & 1) != 0
    || *(_DWORD *)(v6 + 2800)
    || *(_BYTE *)(v5 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 160), 0, 0) )
  {
    VidSchiProcessCompletedQueuePacket(v2);
    return;
  }
  if ( (*(_DWORD *)(v5 + 48) & 2) != 0 || *((int *)v2 + 96) >= 4 )
    VidSchIsVSyncEnabled(v6, (unsigned int)v3);
  v9 = *(_DWORD *)(*v7 + 18872LL);
  if ( v9 != -1 )
  {
    v50 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2832);
    if ( v50 )
      v50(*(_QWORD *)(v6 + 2896), v9);
  }
  v70 = KfRaiseIrql(2u);
  v10 = v70;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1856), &LockHandle);
  if ( (*((_DWORD *)v2 + 16) & 0x20) != 0 )
  {
    if ( (*((_DWORD *)v2 + 18) & 0xC00) != 0x400 )
      ++*(_QWORD *)(v5 + 8 * v4 + 336);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v10);
    VidSchiProcessCompletedQueuePacket(v2);
    goto LABEL_93;
  }
  i = v5 + 8 * (v4 + 42);
  v66 = (_QWORD *)i;
  if ( *((_QWORD *)v2 + 49) - *(_QWORD *)i > (unsigned __int64)(unsigned int)(64 - *(_DWORD *)(v8 + 2264)) )
  {
    VidSchiRewindPacket(v2, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v1, 3LL, 2813LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v70);
LABEL_93:
    if ( v9 != -1 )
    {
      v51 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2848);
      if ( v51 )
        v51(*(_QWORD *)(v6 + 2896), v9);
    }
    return;
  }
  LOBYTE(v69) = 0;
  v12 = -1;
  v71 = *(_DWORD *)(v8 + 4) == 3;
  v59 = -1;
  if ( (*((_DWORD *)v2 + 18) & 0x800000) != 0 )
    v13 = (unsigned __int8)*((_DWORD *)v2 + 172) | *((unsigned __int8 *)v2 + 689);
  else
    v13 = (1 << *(_DWORD *)(v6 + 128)) - 1;
  if ( v13 )
  {
    v14 = !_BitScanForward((unsigned int *)&v15, v13);
    if ( v14 )
      LOBYTE(v15) = -1;
    do
    {
      if ( *(_DWORD *)(272LL * (char)v15 + v8 + 156) == 2 )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v58[5] = (char)v15;
        v58[3] = 281LL;
        v58[4] = 0x100000LL;
        v58[6] = *((unsigned int *)v2 + 95);
        v58[7] = v6;
        WdLogEvent5_WdCriticalError(v58);
        JUMPOUT(0x1C00162A7LL);
      }
      if ( v12 == -1 )
      {
        v12 = (char)v15;
        v59 = (char)v15;
      }
      v13 &= ~(1 << v15);
      v14 = !_BitScanForward((unsigned int *)&v15, v13);
      if ( v14 )
        LOBYTE(v15) = -1;
    }
    while ( v13 );
  }
  else
  {
    v52 = *(_DWORD *)(v6 + 128);
    v12 = 0;
    v59 = 0;
    if ( !v52 )
      goto LABEL_102;
    while ( *(_DWORD *)(272LL * v12 + v8 + 156) == 2 )
    {
      v59 = ++v12;
      if ( v12 >= v52 )
        goto LABEL_102;
    }
    if ( v12 == -1 )
    {
LABEL_102:
      v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v53[3] = 281LL;
      v53[4] = 0x100000LL;
      v53[5] = 0LL;
      v53[6] = *((unsigned int *)v2 + 95);
      v53[7] = v6;
      WdLogEvent5_WdCriticalError(v53);
      JUMPOUT(0x1C0015FD6LL);
    }
  }
  v64 = *((_DWORD *)v2 + 98) - *(_DWORD *)i;
  v67 = v8 + 8 * (v12 + 3LL);
  v65 = *(_DWORD **)v67;
  LODWORD(v16) = ((_BYTE)v64 + (unsigned __int8)*(_DWORD *)(*(_QWORD *)v67 + 32LL)) & 0x3F;
  v17 = *(unsigned int *)(v1 + 88);
  v18 = 1224LL * (((_BYTE)v64 + (unsigned __int8)*(_DWORD *)(*(_QWORD *)v67 + 32LL)) & 0x3F) + 56;
  v72 = v16;
  v19 = (_QWORD *)((char *)v65 + v18);
  v20 = *(_WORD *)(*(_QWORD *)(v6 + 8 * v17 + 408) + 6LL);
  v61 = v20;
  if ( *((_DWORD *)v19 + 261) == 8 )
  {
    v19[*((unsigned int *)v19 + 268)] = v1;
    v19[(unsigned int)(*((_DWORD *)v19 + 268))++ + 65] = *(_QWORD *)(v1 + 144);
    ++*(_DWORD *)(v1 + 792);
    *((_DWORD *)v19 + 266) |= 1 << v20;
  }
  else
  {
    ++*(_DWORD *)(v6 + 956);
    ++*(_DWORD *)(v5 + 1128);
    ++*(_DWORD *)(v1 + 792);
    ++*(_DWORD *)(v8 + 2264);
    if ( (*((_DWORD *)v2 + 66) & 0x800000) != 0 )
      v21 = (unsigned __int8)*((_DWORD *)v2 + 172) | *((unsigned __int8 *)v2 + 689);
    else
      v21 = (1 << *(_DWORD *)(v6 + 128)) - 1;
    v14 = !_BitScanForward((unsigned int *)&v22, v21);
    if ( v14 )
      LOBYTE(v22) = -1;
    while ( v21 )
    {
      ++*(_DWORD *)(272LL * (char)v22 + *v62 + 164);
      v21 &= ~(1 << v22);
      v14 = !_BitScanForward((unsigned int *)&v22, v21);
      if ( v14 )
        LOBYTE(v22) = -1;
    }
    v23 = (_DWORD *)v19[144];
    memset(v19, 0, 0x4C8uLL);
    v19[144] = v23;
    memset(v23 + 4, 0, v23[1] * (48 * v23[2] + ((8 * v23[2] + 167) & 0xFFFFFFF8)));
    *v19 = v1;
    *((_DWORD *)v19 + 260) = *((_DWORD *)v2 + 26);
    *((_DWORD *)v19 + 262) = *((_DWORD *)v2 + 94);
    v19[65] = *(_QWORD *)(v1 + 144);
    *((_BYTE *)v19 + 1056) = (*((_DWORD *)v2 + 66) & 0x10) != 0;
    v24 = *((_DWORD *)v19 + 277) ^ (*((_DWORD *)v19 + 277) ^ (*((_DWORD *)v2 + 18) >> 19)) & 0x10;
    *((_DWORD *)v19 + 277) = v24;
    v25 = ((unsigned __int16)v24 ^ (*((_DWORD *)v2 + 66) >> 21)) & 0x200 ^ v24;
    *((_DWORD *)v19 + 277) = v25;
    v26 = ((unsigned __int16)v25 ^ (*((_DWORD *)v2 + 66) >> 21)) & 0x400 ^ v25;
    *((_DWORD *)v19 + 277) = v26;
    if ( (v26 & 0x200) != 0 )
    {
      *((_DWORD *)v19 + 290) = *((_DWORD *)v2 + 154);
      *(_OWORD *)((char *)v19 + 1164) = *(_OWORD *)((char *)v2 + 620);
      *(_QWORD *)((char *)v19 + 1180) = *(_QWORD *)((char *)v2 + 636);
      *((_DWORD *)v19 + 297) = *((_DWORD *)v2 + 161);
    }
    else
    {
      *((_DWORD *)v19 + 290) = 0;
    }
    if ( (v26 & 0x400) != 0 )
    {
      *(_OWORD *)(v19 + 149) = *(_OWORD *)((char *)v2 + 648);
      *(_OWORD *)(v19 + 151) = *(_OWORD *)((char *)v2 + 664);
    }
    memmove((void *)v19[144], (char *)v2 + 688, *((unsigned int *)v2 + 175));
    *((_DWORD *)v19 + 265) = *((_DWORD *)v2 + 100);
    *((_DWORD *)v19 + 266) = 1 << v61;
    v27 = *((_DWORD *)v19 + 277) ^ (*((_DWORD *)v19 + 277) ^ (*((_DWORD *)v2 + 66) >> 19)) & 1;
    *((_DWORD *)v19 + 277) = v27;
    v28 = ((unsigned __int8)v27 ^ (unsigned __int8)(*((_DWORD *)v2 + 66) >> 19)) & 2 ^ v27;
    *((_DWORD *)v19 + 277) = v28;
    v29 = ((unsigned __int8)v28 ^ (unsigned __int8)(*((_DWORD *)v2 + 66) >> 19)) & 4 ^ v28;
    *((_DWORD *)v19 + 277) = v29;
    *((_DWORD *)v19 + 277) = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(*((_DWORD *)v2 + 66) >> 19)) & 8;
    *((_DWORD *)v19 + 278) = *((_DWORD *)v2 + 102);
    v19[142] = *((_QWORD *)v2 + 36);
    v19[143] = *((_QWORD *)v2 + 37);
    v14 = (*((_DWORD *)v2 + 66) & 0x400) == 0;
    *((_QWORD *)v2 + 36) = 0LL;
    *((_DWORD *)v19 + 268) = 1;
    if ( v14 )
      *((_DWORD *)v19 + 267) = 1;
    else
      *((_DWORD *)v19 + 267) = *((_DWORD *)v2 + 101);
    if ( v71 || *((_BYTE *)v19 + 1056) || (v30 = *((_DWORD *)v2 + 97), v30 == 1) )
    {
      LODWORD(v16) = v72;
    }
    else
    {
      LODWORD(v16) = v72;
      v54 = v30 - 2;
      if ( !v54 )
      {
        *((_DWORD *)v19 + 263) = 1;
        goto LABEL_41;
      }
      v55 = v54 - 1;
      if ( !v55 )
      {
        *((_DWORD *)v19 + 263) = 2;
        goto LABEL_41;
      }
      if ( v55 == 1 )
      {
        *((_DWORD *)v19 + 263) = 3;
        goto LABEL_41;
      }
    }
    *((_DWORD *)v19 + 263) = 0;
  }
LABEL_41:
  if ( (*((_DWORD *)v2 + 66) & 0x800) != 0 )
    *((_BYTE *)v19 + 1057) = 1;
  v31 = *(_DWORD *)v19[144];
  if ( (_BYTE)v31 )
  {
    v32 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)v31);
    for ( i = 0LL; (unsigned int)i < v32; i = (unsigned int)(i + 1) )
    {
      v33 = *((_DWORD *)v19 + 265);
      v34 = 0;
      v35 = v61;
      v72 = 0;
      v36 = 1;
      v63 = 0;
      do
      {
        if ( (v36 & v33) != 0 )
        {
          v37 = *(_QWORD *)(v19[144]
                          + *(_DWORD *)(v19[144] + 4LL) * ((8 * *(_DWORD *)(v19[144] + 8LL) + 167) & 0xFFFFFFF8)
                          + 48 * ((unsigned int)(i + v72 * *(_DWORD *)(v19[144] + 4LL)) + 1LL));
          v35 = v61;
          if ( ((*(_DWORD *)(v37 + 32) >> 2) & 0x3F) == v61 )
            goto LABEL_48;
          ++v72;
          v34 = v63;
        }
        ++v34;
        v36 *= 2;
        v63 = v34;
      }
      while ( v34 <= v35 );
      v37 = 0LL;
LABEL_48:
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v37 + 96) + 16LL) + 8LL));
    }
  }
  if ( *((_DWORD *)v19 + 267) > *((_DWORD *)v19 + 268) )
  {
    *((_DWORD *)v19 + 261) = 8;
  }
  else
  {
    if ( !v64 )
    {
      v38 = v71;
      while ( 1 )
      {
        v65[8] = ((_BYTE)v16 + 1) & 0x3F;
        ++*v66;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 964));
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 2272));
        i = 0LL;
        v39 = 0;
        if ( *((_DWORD *)v19 + 268) )
        {
          while ( 1 )
          {
            i = v19[v39];
            v40 = *(_QWORD *)(i + 104);
            if ( *(_BYTE *)(v40 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 160), 0, 0) )
              break;
            if ( (unsigned int)++v39 >= *((_DWORD *)v19 + 268) )
              goto LABEL_56;
          }
        }
        else
        {
LABEL_56:
          v41 = *((_DWORD *)v19 + 268);
          v42 = 0;
          if ( v41 )
          {
            while ( 1 )
            {
              v43 = v19[v42];
              v44 = HIDWORD(v19[v42 + 65]);
              v45 = *(_DWORD *)(v43 + 156);
              v46 = v44 <= v45;
              if ( v44 == v45 )
              {
                if ( LODWORD(v19[v42 + 65]) > *(_DWORD *)(v43 + 152) )
                  break;
                v46 = v44 <= v45;
              }
              if ( !v46 )
                break;
              if ( ++v42 >= v41 )
                goto LABEL_71;
            }
LABEL_59:
            ++*(_DWORD *)(v6 + 960);
            ++*(_DWORD *)(v8 + 2268);
            *((_DWORD *)v19 + 261) = 1;
LABEL_60:
            v38 = v71;
            goto LABEL_61;
          }
LABEL_71:
          VidSchiUpdateLastCompletedPresentTimestamp(i, 1LL, 0LL);
          v38 = v71;
        }
        if ( !*(_BYTE *)(v8 + 46916) )
          goto LABEL_59;
        *((_DWORD *)v19 + 261) = 2;
        if ( v38 )
        {
          if ( (_DWORD)v16 != v65[10] )
            goto LABEL_61;
          VidSchiFlipImmediateAndCompleteFlipEntry((struct _VIDSCH_GLOBAL *)v6, (__int64)&v69);
          v65[9] = v65[8];
          goto LABEL_60;
        }
        if ( (_DWORD)v16 != v65[10] && !*((_BYTE *)v19 + 1056) )
        {
          if ( (v65[306 * (((_BYTE)v16 - 1) & 0x3F) + 291] & 0x20) != 0 )
          {
            v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
            v57[5] = ((_BYTE)v16 - 1) & 0x3F;
            v57[3] = 281LL;
            v57[4] = 0x100000LL;
            v57[6] = v65;
            v57[7] = v6;
            WdLogEvent5_WdCriticalError(v57);
            JUMPOUT(0x1C0016259LL);
          }
          if ( !*(_DWORD *)(v8 + 2268) )
            v65[9] = v65[8];
          goto LABEL_61;
        }
        v65[9] = v65[8];
        v19[135] = MEMORY[0xFFFFF78000000320];
        v47 = *(_QWORD *)(v6 + 16);
        if ( *(_QWORD *)(v47 + 904) )
        {
          if ( *(_BYTE *)(v47 + 2090) )
          {
            v56 = *(_DWORD *)(*(_QWORD *)v67 + 48LL);
            i = ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v67 + 44LL) - 1) & 0x3F;
            if ( v56 != (_DWORD)i )
            {
              while ( *(_DWORD *)(1224LL * v56 + *(_QWORD *)v67 + 1100) != 14 )
              {
                v56 = ((_BYTE)v56 - 1) & 0x3F;
                if ( v56 == (_DWORD)i )
                  goto LABEL_76;
              }
              goto LABEL_61;
            }
          }
        }
LABEL_76:
        if ( (*((_DWORD *)v19 + 277) & 0x10) != 0 )
          v48 = (unsigned __int8)*(_DWORD *)v19[144] | *(unsigned __int8 *)(v19[144] + 1LL);
        else
          v48 = (1 << *(_DWORD *)(v6 + 128)) - 1;
        if ( (v48 & *(_DWORD *)(v8 + 2280)) == 0 )
        {
          if ( *((_BYTE *)v19 + 1056) )
          {
            VidSchiRestartQueuedFlip(v5, v60, v59, (unsigned int)v16);
            v38 = v71;
          }
          v49 = *((_DWORD *)v19 + 263);
          if ( v49 )
          {
            *((_DWORD *)v19 + 261) = 3;
            *((_DWORD *)v19 + 263) = v49 - 1;
            goto LABEL_61;
          }
          *((_DWORD *)v19 + 261) = 4;
          VidSchiExecuteMmIoFlip((struct _VIDSCH_GLOBAL *)v6, (__int64)&v69);
          goto LABEL_60;
        }
LABEL_61:
        v16 = (unsigned int)v65[8];
        v19 = &v65[306 * v16 + 14];
        if ( *((_DWORD *)v19 + 261) != 7 )
          goto LABEL_62;
      }
    }
    *((_DWORD *)v19 + 261) = 7;
  }
LABEL_62:
  *((_DWORD *)v2 + 16) |= 2u;
  if ( (_BYTE)v69 )
    VidSchiCompletePendingFlip(v6, v60, 9LL, i);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
  while ( v2 );
  KeLowerIrql(v70);
}
