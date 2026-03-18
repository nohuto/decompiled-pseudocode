/*
 * XREFs of VidSchiSubmitMmIoFlipCommand @ 0x1C00025A0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C008AAD0 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiCompletePendingFlip @ 0x1C000248C (VidSchiCompletePendingFlip.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C00031E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0007460 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009CB0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUpdateContextStatus @ 0x1C000C380 (VidSchiUpdateContextStatus.c)
 *     VidSchiRewindPacket @ 0x1C000F53C (VidSchiRewindPacket.c)
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0012EAC (VidSchiProcessCompletedQueuePacket.c)
 *     VidSchiFlipImmediateAndCompleteFlipEntry @ 0x1C00148AC (VidSchiFlipImmediateAndCompleteFlipEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiRestartQueuedFlip @ 0x1C0021AFC (VidSchiRestartQueuedFlip.c)
 *     VidSchIsVSyncEnabled @ 0x1C0039080 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitMmIoFlipCommand(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rsi
  struct _VIDSCH_QUEUE_PACKET *v2; // r13
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  void (__fastcall *v10)(_QWORD, _QWORD); // rax
  KIRQL v11; // r12
  int v12; // ecx
  void (__fastcall *v13)(_QWORD, _QWORD); // rax
  unsigned int v14; // r12d
  unsigned int v15; // r8d
  unsigned int v16; // edx
  _QWORD *v17; // rax
  bool v18; // zf
  int v19; // eax
  char v20; // bl
  int v21; // eax
  __int64 v22; // rdx
  _DWORD *v23; // rsi
  __int64 *v24; // rbx
  unsigned int v25; // r15d
  unsigned int v26; // r8d
  int v27; // eax
  char v28; // cl
  int v29; // eax
  char v30; // dl
  _DWORD *v31; // rdi
  __int64 v32; // rcx
  void *v33; // rcx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  ULONG v39; // eax
  unsigned int v40; // r8d
  int v41; // r11d
  ULONG v42; // edi
  int v43; // eax
  int v44; // r9d
  __int64 v45; // r10
  _BOOL8 v46; // r15
  __int64 v47; // r10
  int v48; // ecx
  unsigned int v49; // r11d
  unsigned int v50; // ecx
  __int64 v51; // rax
  unsigned int v52; // r8d
  unsigned int v53; // r9d
  bool v54; // cc
  int v55; // eax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  unsigned int v58; // [rsp+30h] [rbp-A8h]
  __int64 v59; // [rsp+38h] [rbp-A0h]
  int v60; // [rsp+40h] [rbp-98h]
  __int64 v61; // [rsp+48h] [rbp-90h]
  _QWORD *v62; // [rsp+58h] [rbp-80h]
  _QWORD *v63; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-60h] BYREF
  char v65; // [rsp+E0h] [rbp+8h] BYREF
  KIRQL v66; // [rsp+E8h] [rbp+10h]
  __int64 v67; // [rsp+F0h] [rbp+18h]
  BOOL v68; // [rsp+F8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 10);
  v2 = a1;
  v3 = *((unsigned int *)a1 + 36);
  v67 = v1;
  v4 = (unsigned int)v3;
  v58 = v3;
  v5 = *(_QWORD *)(v1 + 104);
  v61 = v5;
  v6 = *(_QWORD *)(v5 + 32);
  v7 = (_QWORD *)(v6 + 8 * v3 + 2592);
  v62 = v7;
  v8 = *v7;
  v59 = *v7;
  if ( (*(_BYTE *)(v6 + 2468) & 1) != 0
    || *(_DWORD *)(v6 + 2440)
    || *(_BYTE *)(v5 + 172)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 168), 0, 0) )
  {
    VidSchiProcessCompletedQueuePacket(v2);
    return;
  }
  if ( (*(_DWORD *)(v5 + 48) & 2) != 0 || *((int *)v2 + 94) >= 4 )
    VidSchIsVSyncEnabled(v6, (unsigned int)v3);
  v9 = *(_DWORD *)(*v7 + 14768LL);
  if ( v9 != -1 )
  {
    v10 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2472);
    if ( v10 )
      v10(*(_QWORD *)(v6 + 2520), v9);
  }
  v66 = KfRaiseIrql(2u);
  v11 = v66;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1824), &LockHandle);
  if ( (*((_DWORD *)v2 + 16) & 0x20) != 0 )
  {
    v12 = *((_DWORD *)v2 + 18);
    if ( (v12 & 0x400) == 0 || (v12 & 0x800) != 0 )
      ++*(_QWORD *)(v5 + 8 * v4 + 344);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v11);
    VidSchiProcessCompletedQueuePacket(v2);
    goto LABEL_18;
  }
  v63 = (_QWORD *)(v5 + 8 * (v4 + 43));
  if ( *((_QWORD *)v2 + 48) - *(_QWORD *)(v5 + 8 * v4 + 344) > (unsigned __int64)(unsigned int)(64
                                                                                              - *(_DWORD *)(v8 + 2328)) )
  {
    VidSchiRewindPacket(v2, 1LL, 1LL, 1LL);
    VidSchiUpdateContextStatus(v1, 3LL, 2731LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    KeLowerIrql(v11);
LABEL_18:
    if ( v9 != -1 )
    {
      v13 = *(void (__fastcall **)(_QWORD, _QWORD))(v6 + 2488);
      if ( v13 )
        v13(*(_QWORD *)(v6 + 2520), v9);
    }
    return;
  }
  v65 = 0;
  v14 = -1;
  v68 = *(_DWORD *)(v8 + 4) == 3;
  if ( (*((_DWORD *)v2 + 18) & 0x800000) != 0 )
    v15 = (unsigned __int8)*((_DWORD *)v2 + 154) | *((unsigned __int8 *)v2 + 617);
  else
    v15 = (1 << *(_DWORD *)(v6 + 124)) - 1;
  if ( v15 )
  {
    v18 = !_BitScanForward((unsigned int *)&v19, v15);
    v20 = -1;
    if ( !v18 )
      v20 = v19;
    do
    {
      if ( *(_DWORD *)(280LL * v20 + v8 + 156) == 2 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v57[5] = v20;
        v57[3] = 281LL;
        v57[4] = 0x100000LL;
        v57[6] = *((unsigned int *)v2 + 93);
        v57[7] = v6;
        WdLogEvent5_WdCriticalError(v57);
        __debugbreak();
      }
      if ( v14 == -1 )
        v14 = v20;
      v15 &= ~(1 << v20);
      v18 = !_BitScanForward((unsigned int *)&v21, v15);
      v20 = -1;
      if ( !v18 )
        v20 = v21;
    }
    while ( v15 );
  }
  else
  {
    v16 = *(_DWORD *)(v6 + 124);
    v14 = 0;
    if ( !v16 )
      goto LABEL_31;
    while ( *(_DWORD *)(280LL * v14 + v8 + 156) == 2 )
    {
      if ( ++v14 >= v16 )
        goto LABEL_31;
    }
    if ( v14 == -1 )
    {
LABEL_31:
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v17[3] = 281LL;
      v17[4] = 0x100000LL;
      v17[5] = 0LL;
      v17[6] = *((unsigned int *)v2 + 93);
      v17[7] = v6;
      WdLogEvent5_WdCriticalError(v17);
      __debugbreak();
    }
  }
  v22 = v67;
  v60 = *((_DWORD *)v2 + 96) - *(_DWORD *)(v5 + 8 * v4 + 344);
  v23 = *(_DWORD **)(v8 + 8LL * v14 + 24);
  LODWORD(v4) = ((_BYTE)v60 + (unsigned __int8)v23[8]) & 0x3F;
  v24 = (__int64 *)&v23[290 * (((_BYTE)v60 + (unsigned __int8)v23[8]) & 0x3F) + 14];
  v25 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned int *)(v67 + 88) + 376) + 6LL);
  if ( *((_DWORD *)v24 + 261) == 8 )
  {
    v24[*((unsigned int *)v24 + 268)] = v67;
    v24[(unsigned int)(*((_DWORD *)v24 + 268))++ + 65] = *(_QWORD *)(v22 + 144);
    ++*(_DWORD *)(v22 + 768);
    *((_DWORD *)v24 + 266) |= 1 << v25;
    goto LABEL_65;
  }
  ++*(_DWORD *)(v6 + 920);
  ++*(_DWORD *)(v61 + 1132);
  ++*(_DWORD *)(v22 + 768);
  ++*(_DWORD *)(v8 + 2328);
  if ( (*((_DWORD *)v2 + 64) & 0x800000) != 0 )
    v26 = (unsigned __int8)*((_DWORD *)v2 + 154) | *((unsigned __int8 *)v2 + 617);
  else
    v26 = (1 << *(_DWORD *)(v6 + 124)) - 1;
  v18 = !_BitScanForward((unsigned int *)&v27, v26);
  v28 = -1;
  if ( !v18 )
    v28 = v27;
  for ( ; v26; v28 = v30 )
  {
    ++*(_DWORD *)(280LL * v28 + *v62 + 164);
    v26 &= ~(1 << v28);
    v18 = !_BitScanForward((unsigned int *)&v29, v26);
    v30 = -1;
    if ( !v18 )
      v30 = v29;
  }
  v31 = (_DWORD *)v24[144];
  memset(v24, 0, 0x488uLL);
  v24[144] = (__int64)v31;
  memset(v31 + 4, 0, (unsigned __int64)(unsigned int)(v31[1] * v31[2]) << 6);
  v32 = v67;
  *v24 = v67;
  *((_DWORD *)v24 + 260) = *((_DWORD *)v2 + 24);
  *((_DWORD *)v24 + 262) = *((_DWORD *)v2 + 92);
  v24[65] = *(_QWORD *)(v32 + 144);
  v33 = (void *)v24[144];
  *((_BYTE *)v24 + 1056) = (*((_DWORD *)v2 + 64) & 0x10) != 0;
  *((_DWORD *)v24 + 277) ^= (*((_DWORD *)v24 + 277) ^ (*((_DWORD *)v2 + 18) >> 19)) & 0x10;
  memmove(v33, (char *)v2 + 616, *((unsigned int *)v2 + 157));
  *((_DWORD *)v24 + 265) = *((_DWORD *)v2 + 98);
  *((_DWORD *)v24 + 266) = 1 << v25;
  *((_DWORD *)v24 + 277) ^= (*((_DWORD *)v24 + 277) ^ (*((_DWORD *)v2 + 64) >> 19)) & 1;
  v34 = *((_DWORD *)v24 + 277) ^ ((unsigned __int8)*((_DWORD *)v24 + 277) ^ (unsigned __int8)(*((_DWORD *)v2 + 64) >> 19)) & 2;
  *((_DWORD *)v24 + 277) = v34;
  v22 = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)(*((_DWORD *)v2 + 64) >> 19)) & 4u;
  *((_DWORD *)v24 + 277) = v22;
  *((_DWORD *)v24 + 277) = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(*((_DWORD *)v2 + 64) >> 19)) & 8;
  *((_DWORD *)v24 + 278) = *((_DWORD *)v2 + 100);
  v24[142] = *((_QWORD *)v2 + 35);
  v24[143] = *((_QWORD *)v2 + 36);
  v18 = (*((_DWORD *)v2 + 64) & 0x400) == 0;
  *((_QWORD *)v2 + 35) = 0LL;
  *((_DWORD *)v24 + 268) = 1;
  if ( v18 )
    *((_DWORD *)v24 + 267) = 1;
  else
    *((_DWORD *)v24 + 267) = *((_DWORD *)v2 + 99);
  if ( *((_BYTE *)v24 + 1056) || v68 || (v35 = *((_DWORD *)v2 + 95), v35 == 1) )
  {
    v8 = v59;
  }
  else
  {
    v8 = v59;
    v36 = v35 - 2;
    if ( !v36 )
    {
      *((_DWORD *)v24 + 263) = 1;
      goto LABEL_65;
    }
    v37 = v36 - 1;
    if ( !v37 )
    {
      *((_DWORD *)v24 + 263) = 2;
      goto LABEL_65;
    }
    if ( v37 == 1 )
    {
      *((_DWORD *)v24 + 263) = 3;
      goto LABEL_65;
    }
  }
  *((_DWORD *)v24 + 263) = 0;
LABEL_65:
  if ( (*((_DWORD *)v2 + 64) & 0x800) != 0 )
    *((_BYTE *)v24 + 1057) = 1;
  v38 = *(_DWORD *)v24[144];
  if ( (_BYTE)v38 )
  {
    v39 = RtlNumberOfSetBitsUlongPtr((unsigned __int8)v38);
    v40 = 0;
    v41 = 0;
    if ( v39 )
    {
      v42 = v39;
      while ( 1 )
      {
        v43 = *((_DWORD *)v24 + 265);
        v44 = 0;
        LODWORD(v67) = v43;
        v22 = 1LL;
        while ( (v43 & (unsigned int)v22) == 0 )
        {
LABEL_74:
          ++v40;
          v22 = (unsigned int)(2 * v22);
          if ( v40 > v25 )
          {
            v40 = 0;
            v45 = 0LL;
            goto LABEL_76;
          }
        }
        v45 = *(_QWORD *)(((unsigned __int64)(unsigned int)(v41 + v44 * *(_DWORD *)(v24[144] + 4)) << 6) + v24[144] + 16);
        if ( ((*(_DWORD *)(v45 + 32) >> 2) & 0x3F) != v25 )
          break;
        v40 = 0;
LABEL_76:
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v45 + 96) + 16LL) + 8LL));
        if ( ++v41 >= v42 )
        {
          v8 = v59;
          goto LABEL_78;
        }
      }
      v43 = v67;
      ++v44;
      goto LABEL_74;
    }
  }
LABEL_78:
  if ( *((_DWORD *)v24 + 267) <= *((_DWORD *)v24 + 268) )
  {
    if ( v60 )
    {
      *((_DWORD *)v24 + 261) = 7;
      goto LABEL_80;
    }
    v46 = v68;
    while ( 1 )
    {
      v23[8] = ((_BYTE)v4 + 1) & 0x3F;
      ++*v63;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 928));
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 2336));
      v47 = 0LL;
      v48 = 0;
      if ( *((_DWORD *)v24 + 268) )
      {
        while ( 1 )
        {
          v47 = v24[v48];
          v22 = *(_QWORD *)(v47 + 104);
          if ( *(_BYTE *)(v22 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 168), 0, 0) )
            break;
          if ( (unsigned int)++v48 >= *((_DWORD *)v24 + 268) )
            goto LABEL_93;
        }
      }
      else
      {
LABEL_93:
        v49 = *((_DWORD *)v24 + 268);
        v50 = 0;
        if ( v49 )
        {
          while ( 1 )
          {
            v22 = v50;
            v51 = v24[v50];
            v52 = HIDWORD(v24[v50 + 65]);
            v53 = *(_DWORD *)(v51 + 156);
            v54 = v52 <= v53;
            if ( v52 == v53 )
            {
              if ( LODWORD(v24[v50 + 65]) > *(_DWORD *)(v51 + 152) )
                break;
              v54 = v52 <= v53;
            }
            if ( !v54 )
              break;
            if ( ++v50 >= v49 )
              goto LABEL_99;
          }
          ++*(_DWORD *)(v6 + 924);
          ++*(_DWORD *)(v8 + 2332);
          *((_DWORD *)v24 + 261) = 1;
          goto LABEL_119;
        }
LABEL_99:
        LOBYTE(v22) = 1;
        VidSchiUpdateLastCompletedPresentTimestamp(v47, v22, 0LL);
      }
      *((_DWORD *)v24 + 261) = 2;
      if ( v46 )
      {
        if ( (_DWORD)v4 == v23[10] )
        {
          VidSchiFlipImmediateAndCompleteFlipEntry(v6, v58, v14, v4, (__int64)&v65);
          v23[9] = v23[8];
LABEL_118:
          v46 = v68;
        }
      }
      else
      {
        if ( (_DWORD)v4 != v23[10] && !*((_BYTE *)v24 + 1056) )
        {
          if ( (v23[290 * (((_BYTE)v4 - 1) & 0x3F) + 291] & 0x20) != 0 )
          {
            v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
            v56[5] = ((_BYTE)v4 - 1) & 0x3F;
            v56[3] = 281LL;
            v56[4] = 0x100000LL;
            v56[6] = v23;
            v56[7] = v6;
            WdLogEvent5_WdCriticalError(v56);
            __debugbreak();
          }
          if ( !*(_DWORD *)(v8 + 2332) )
            v23[9] = v23[8];
          goto LABEL_119;
        }
        v23[9] = v23[8];
        v24[135] = MEMORY[0xFFFFF78000000320];
        if ( (*((_BYTE *)v24 + 1108) & 0x10) != 0 )
          v22 = (unsigned __int8)*(_DWORD *)v24[144] | (unsigned int)*(unsigned __int8 *)(v24[144] + 1);
        else
          v22 = (unsigned int)((1 << *(_DWORD *)(v6 + 124)) - 1);
        if ( ((unsigned int)v22 & *(_DWORD *)(v8 + 2340)) == 0 )
        {
          if ( *((_BYTE *)v24 + 1056) )
            VidSchiRestartQueuedFlip(v61, v58, v14, (unsigned int)v4);
          v55 = *((_DWORD *)v24 + 263);
          if ( v55 )
          {
            *((_DWORD *)v24 + 261) = 3;
            *((_DWORD *)v24 + 263) = v55 - 1;
          }
          else
          {
            *((_DWORD *)v24 + 261) = 4;
            VidSchiExecuteMmIoFlip(v6, v58, v14, v4, (__int64)&v65);
          }
          goto LABEL_118;
        }
      }
LABEL_119:
      v4 = (unsigned int)v23[8];
      v24 = (__int64 *)&v23[290 * v4 + 14];
      if ( *((_DWORD *)v24 + 261) != 7 )
        goto LABEL_80;
    }
  }
  *((_DWORD *)v24 + 261) = 8;
LABEL_80:
  *((_DWORD *)v2 + 16) |= 2u;
  if ( v65 )
    VidSchiCompletePendingFlip(v6, v58, 9);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  do
    v2 = VidSchiProcessCompletedQueuePacketInternal(v2);
  while ( v2 );
  KeLowerIrql(v66);
}
