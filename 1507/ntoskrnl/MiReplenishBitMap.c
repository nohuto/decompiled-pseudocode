/*
 * XREFs of MiReplenishBitMap @ 0x140012E20
 * Callers:
 *     MiEmptyPteBins @ 0x140012CD4 (MiEmptyPteBins.c)
 *     MiInsertCachedPte @ 0x1400B1C20 (MiInsertCachedPte.c)
 * Callees:
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400AD300 (RtlInterlockedSetClearRunEx.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReturnSystemPtes @ 0x140107F70 (MiReturnSystemPtes.c)
 *     MiFlushTbListEarly @ 0x1401118F0 (MiFlushTbListEarly.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 */

_KPROCESS *__fastcall MiReplenishBitMap(_KPROCESS *Process, ULONG_PTR a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // r15
  _KPROCESS *v4; // r13
  __int64 v5; // r9
  int v7; // ebp
  struct _LIST_ENTRY *Blink; // rax
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  ULONG_PTR PteTimeStamp; // r10
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  ULONG_PTR v18; // r11
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY **v20; // r8
  struct _LIST_ENTRY **v21; // r9
  struct _LIST_ENTRY *v22; // rax
  unsigned __int64 v23; // rdx
  struct _LIST_ENTRY **v24; // r8
  unsigned int v25; // eax
  struct _LIST_ENTRY *v26; // rax
  __int64 v27; // rbx
  ULONG_PTR v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rax
  ULONG_PTR v31; // r12
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  ULONG_PTR v36; // r10
  struct _LIST_ENTRY *v37; // rcx
  struct _LIST_ENTRY **v38; // r8
  struct _LIST_ENTRY **v39; // r9
  struct _LIST_ENTRY *v40; // rax
  unsigned __int64 v41; // rdx
  struct _LIST_ENTRY **v42; // r8
  unsigned __int64 v43; // rbp
  ULONG_PTR v44; // r14
  ULONG_PTR v45; // r10
  unsigned __int64 v46; // r9
  volatile signed __int32 *v47; // r8
  int v48; // eax
  unsigned __int64 v49; // rdx
  __int64 v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  ULONG_PTR v53; // rsi
  unsigned __int64 v54; // rbp
  _KPROCESS *v55; // rdi
  __int64 v56; // r15
  ULONG_PTR v57; // r9
  struct _LIST_ENTRY *v58; // rdx
  _QWORD *v59; // rax
  struct _LIST_ENTRY **v60; // r8
  _QWORD *v61; // rax
  unsigned int v62; // eax
  signed __int32 v64[8]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v65; // [rsp+30h] [rbp-118h]
  _KPROCESS *v66; // [rsp+38h] [rbp-110h]
  int v67; // [rsp+40h] [rbp-108h] BYREF
  __int16 v68; // [rsp+44h] [rbp-104h]
  __int64 v69; // [rsp+48h] [rbp-100h]
  __int64 v70; // [rsp+50h] [rbp-F8h]
  __int64 v71; // [rsp+58h] [rbp-F0h]

  v66 = Process;
  v65 = 0LL;
  BugCheckParameter4 = a2;
  v4 = Process;
  v5 = 0x90482413000LL;
  if ( a3 != 1 )
    goto LABEL_47;
  v69 = 20LL;
  v67 = 0;
  v68 = 0;
  v70 = 0LL;
  v71 = 0LL;
  _InterlockedOr(v64, 0);
  v7 = KiTbFlushTimeStamp;
  do
  {
    Blink = v4->Header.WaitListHead.Blink;
    v9 = *((_QWORD *)&Blink->Flink + BugCheckParameter4);
    v10 = (ULONG_PTR)Blink + 8 * BugCheckParameter4;
    if ( v10 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8 * ((v10 >> 3) & 0x1FF));
        if ( (v12 & 0x20) != 0 )
          v9 |= 0x20uLL;
        if ( (v12 & 0x42) != 0 )
          v9 |= 0x42uLL;
      }
    }
    if ( (v9 & 0xF000) == 0x1000 )
    {
      PteTimeStamp = 1LL;
    }
    else
    {
      v14 = *(_QWORD *)(v10 + 8);
      if ( v10 + 8 + v5 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v14)
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v16 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8 * ((v15 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v14 |= 0x20uLL;
          if ( (v17 & 0x42) != 0 )
            v14 |= 0x42uLL;
        }
      }
      PteTimeStamp = (unsigned int)MiGetPteTimeStamp(v14);
    }
    v18 = BugCheckParameter4 + PteTimeStamp - 1;
    if ( v18 >= *(_QWORD *)&v4->Header.Lock )
      goto LABEL_120;
    if ( PteTimeStamp > 1 )
    {
      Flink = v4->Header.WaitListHead.Flink;
      v20 = &Flink->Flink + (BugCheckParameter4 >> 6);
      v21 = &Flink->Flink + (v18 >> 6);
      v22 = *v20;
      if ( v20 == v21 )
      {
        v23 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)PteTimeStamp) << BugCheckParameter4;
      }
      else
      {
        if ( ((-1LL << BugCheckParameter4) & (unsigned __int64)v22) != -1LL << BugCheckParameter4 )
          goto LABEL_120;
        v24 = v20 + 1;
        if ( v24 != v21 )
        {
          while ( *v24 == (struct _LIST_ENTRY *)-1LL )
          {
            if ( ++v24 == v21 )
              goto LABEL_37;
          }
LABEL_120:
          KeBugCheckEx(0xDAu, 0x500uLL, v10, PteTimeStamp, BugCheckParameter4);
        }
LABEL_37:
        v22 = *v24;
        v23 = 0xFFFFFFFFFFFFFFFFuLL >> -(char)(BugCheckParameter4 + PteTimeStamp);
      }
      if ( (v23 & (unsigned __int64)v22) != v23 )
        goto LABEL_120;
    }
    else if ( PteTimeStamp != 1
           || !_bittest64((const signed __int64 *)v4->Header.WaitListHead.Flink, BugCheckParameter4) )
    {
      goto LABEL_120;
    }
    MiInsertTbFlushEntry(&v67, (__int64)(v10 << 25) >> 16, PteTimeStamp, 0LL);
    if ( (unsigned int)MiFlushTbListEarly(&v67, 1LL) == 1 )
    {
      _InterlockedOr(v64, 0);
      if ( (unsigned int)(KiTbFlushTimeStamp - v7) > 2 || (v7 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v7) >= 2 )
        break;
    }
    v25 = MiGetPteTimeStamp(v9);
    BugCheckParameter4 = v25;
    v5 = 0x90482413000LL;
  }
  while ( v25 );
  if ( HIDWORD(v69) )
    MiFlushTbList(&v67);
  BugCheckParameter4 = a2;
  v5 = 0x90482413000LL;
  do
  {
LABEL_47:
    v26 = v4->Header.WaitListHead.Blink;
    v27 = *((_QWORD *)&v26->Flink + BugCheckParameter4);
    v28 = (ULONG_PTR)v26 + 8 * BugCheckParameter4;
    if ( v28 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, a2)
      && (v27 & 1) != 0
      && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v29 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 8 * ((v28 >> 3) & 0x1FF));
        if ( (v30 & 0x20) != 0 )
          v27 |= 0x20uLL;
        if ( (v30 & 0x42) != 0 )
          v27 |= 0x42uLL;
      }
    }
    if ( (v27 & 0xF000) == 0x1000 )
    {
      v31 = 1LL;
    }
    else
    {
      v32 = *(_QWORD *)(v28 + 8);
      if ( v28 + 8 + v5 <= 0x7F8
        && (unsigned int)MiPteHasShadow(Process, v32)
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        v34 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * ((v33 >> 3) & 0x1FF));
          if ( (v35 & 0x20) != 0 )
            v32 |= 0x20uLL;
          if ( (v35 & 0x42) != 0 )
            v32 |= 0x42uLL;
        }
      }
      v31 = (unsigned int)MiGetPteTimeStamp(v32);
    }
    v36 = BugCheckParameter4 + v31 - 1;
    if ( v36 >= *(_QWORD *)&v4->Header.Lock )
      goto LABEL_121;
    if ( v31 > 1 )
    {
      v37 = v4->Header.WaitListHead.Flink;
      v38 = &v37->Flink + (BugCheckParameter4 >> 6);
      v39 = &v37->Flink + (v36 >> 6);
      v40 = *v38;
      if ( v38 == v39 )
      {
        v41 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v31) << BugCheckParameter4;
      }
      else
      {
        if ( ((-1LL << BugCheckParameter4) & (unsigned __int64)v40) != -1LL << BugCheckParameter4 )
          goto LABEL_121;
        v42 = v38 + 1;
        if ( v42 != v39 )
        {
          while ( *v42 == (struct _LIST_ENTRY *)-1LL )
          {
            if ( ++v42 == v39 )
              goto LABEL_81;
          }
LABEL_121:
          KeBugCheckEx(0xDAu, 0x504uLL, v28, v31, BugCheckParameter4);
        }
LABEL_81:
        v40 = *v42;
        v41 = 0xFFFFFFFFFFFFFFFFuLL >> -(char)(BugCheckParameter4 + v31);
      }
      if ( (v41 & (unsigned __int64)v40) != v41 )
        goto LABEL_121;
      v5 = 0x90482413000LL;
    }
    else if ( v31 != 1 || !_bittest64((const signed __int64 *)v4->Header.WaitListHead.Flink, BugCheckParameter4) )
    {
      goto LABEL_121;
    }
    v43 = v28 + v5;
    v44 = v31;
    do
    {
      *(_QWORD *)v28 = 0LL;
      if ( v43 <= 0x7F8 )
        MiWritePteShadow(v28, 0LL);
      v28 += 8LL;
      v43 += 8LL;
      --v44;
    }
    while ( v44 );
    v45 = BugCheckParameter4 & 0x1F;
    v46 = v31;
    v47 = (volatile signed __int32 *)v4->Header.WaitListHead.Flink + (BugCheckParameter4 >> 5);
    if ( v45 + v31 <= 0x20 )
    {
      if ( v31 == 32 )
      {
        *v47 = 0;
        goto LABEL_100;
      }
      v48 = ((1 << v31) - 1) << v45;
      goto LABEL_99;
    }
    if ( (BugCheckParameter4 & 0x1F) != 0 )
    {
      _InterlockedAnd(v47, ~(((1 << (32 - (BugCheckParameter4 & 0x1F))) - 1) << v45));
      v46 = v31 - (32 - (unsigned int)(BugCheckParameter4 & 0x1F));
      ++v47;
    }
    if ( v46 >= 0x20 )
    {
      v49 = v46 >> 5;
      v46 += -32LL * (v46 >> 5);
      do
      {
        *v47++ = 0;
        --v49;
      }
      while ( v49 );
    }
    if ( v46 )
    {
      v48 = (1 << v46) - 1;
LABEL_99:
      _InterlockedAnd(v47, ~v48);
    }
LABEL_100:
    v50 = 512LL;
    if ( ((__int64)v4->ProfileListHead.Flink & 4) != 0 )
      v50 = 32LL;
    v51 = v50 - 1;
    v52 = ~(v50 - 1);
    v53 = v52 & BugCheckParameter4;
    v54 = (v52 & (v50 + BugCheckParameter4 + v31 - 1)) - (v52 & BugCheckParameter4);
    if ( v54 )
    {
      v55 = v66;
      v56 = -(__int64)v53;
      while ( 1 )
      {
        v57 = v53 + v51;
        if ( v53 + v51 < *(_QWORD *)&v55->Header.Lock )
          break;
LABEL_116:
        v53 += v50;
        if ( v56 + v53 >= v54 )
        {
          v4 = v66;
          goto LABEL_118;
        }
      }
      v58 = v55->Header.WaitListHead.Flink;
      v59 = &v58->Flink + (v53 >> 6);
      v60 = &v58->Flink + (v57 >> 6);
      if ( v59 == v60 )
      {
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v50) << v53) & *v59) != 0 )
          goto LABEL_115;
      }
      else
      {
        if ( ((-1LL << v53) & *v59) != 0 )
          goto LABEL_115;
        v61 = v59 + 1;
        if ( v61 != v60 )
        {
          while ( !*v61 )
          {
            if ( ++v61 == v60 )
              goto LABEL_112;
          }
          goto LABEL_115;
        }
LABEL_112:
        if ( ((0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v57)) & *v61) != 0 )
        {
LABEL_115:
          v51 = v50 - 1;
          goto LABEL_116;
        }
      }
      if ( (unsigned int)RtlInterlockedSetClearRunEx(v55, v53, v50) == 1 )
        MiReturnSystemPtes(v55, v53, v50, 0LL);
      goto LABEL_115;
    }
LABEL_118:
    v62 = MiGetPteTimeStamp(v27);
    v5 = 0x90482413000LL;
    Process = (_KPROCESS *)(v31 + v65);
    BugCheckParameter4 = v62;
    v65 += v31;
  }
  while ( v62 );
  return Process;
}
