/*
 * XREFs of MiInsertNonPagedPoolOnSlist @ 0x1400478A0
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 * Callees:
 *     MiLockNonPagedPoolPte @ 0x140116F58 (MiLockNonPagedPoolPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiInsertNonPagedPoolOnSlist(_SLIST_ENTRY *a1, unsigned __int64 a2)
{
  volatile __int64 *v2; // rsi
  _SLIST_ENTRY *v3; // r9
  unsigned __int64 *v4; // r14
  unsigned __int64 PteShadow; // rax
  __int64 v6; // r10
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  unsigned int v14; // edx
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  __int64 v18; // r12
  _SLIST_HEADER *v19; // r12
  int v20; // r15d
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rbx
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // ecx
  unsigned __int64 v29; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h]
  unsigned __int8 v33; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v34; // [rsp+A8h] [rbp+20h]

  v2 = (volatile __int64 *)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = a1;
  v4 = (unsigned __int64 *)((((unsigned __int64)a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v4;
  if ( (unsigned __int64)(v4 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v4, *v4);
  v29 = PteShadow;
  v6 = 0xFFFFFFFFFLL;
  if ( (PteShadow & 0x80u) == 0LL )
  {
    v10 = MiLockNonPagedPoolPte(v2, &v33);
    v11 = (unsigned __int64)(v2 + 0x12090482600LL);
    v7 = v10;
    v12 = *v2;
    if ( (unsigned __int64)(v2 + 0x12090482600LL) <= 0x7F8 )
      v12 = MiReadPteShadow(v2, *v2);
    v29 = v12;
    if ( (v12 & 0x200) != 0 )
    {
      v29 = v12 & 0xFFFFFFFFFFFFFDFFuLL;
      _InterlockedExchange64(v2, v12 & 0xFFFFFFFFFFFFFDFFuLL);
      if ( v11 <= 0x7F8 )
        MiWritePteShadow(v2, v29);
    }
  }
  else
  {
    if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
      PteShadow = MiReadPteShadow(&v29, PteShadow);
    v7 = 48 * ((v6 & (PteShadow >> 12)) + (((unsigned __int64)v3 >> 12) & 0x1FF)) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
    }
    v33 = CurrentIrql;
  }
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (v7 + 0x58000000000LL) / 48,
      *(_BYTE *)(v7 + 34) & 7,
      *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v13 = *(_WORD *)(v7 + 32);
  if ( v13 != 1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v7 + 0x58000000000LL) / 48, *(_BYTE *)(v7 + 34) & 7, v13);
  v14 = 512;
  if ( (v29 & 0x8000000000000000uLL) == 0 )
    v14 = 0;
  v15 = *(_QWORD *)(v7 + 40) >> 58;
  v34 = v14;
  v30 = v15;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v33);
  v16 = a2;
  if ( a2 > 3 )
    return v14;
  v18 = (v14 & 0x200) != 0 ? 26LL * (unsigned int)v15 + a2 + 3 : a2 + 26LL * (unsigned int)v15;
  v19 = &qword_14034EB70[v18];
  if ( LOWORD(v19->Alignment) >= (unsigned int)dword_14034E648[a2 - 1] )
    return v14;
  v20 = 1;
  v21 = 1LL;
  if ( a2 <= 1 )
    goto LABEL_58;
  v22 = (unsigned __int64)(v2 + 0x12090482600LL);
  v23 = (unsigned __int64)(v4 + 0x12090482600LL);
  do
  {
    ++v2;
    v22 += 8LL;
    if ( ((unsigned __int16)v2 & 0xFFF) != 0 )
    {
      v24 = *v4;
      if ( v23 <= 0x7F8 )
        v24 = MiReadPteShadow(v4, *v4);
      v29 = v24;
    }
    else
    {
      v24 = v4[1];
      ++v4;
      v23 += 8LL;
      if ( v23 <= 0x7F8 )
        v24 = MiReadPteShadow(v4, v24);
      v29 = v24;
      if ( (v24 & 0x80u) == 0LL )
        goto LABEL_43;
      v25 = v24;
      if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8 )
        v25 = MiReadPteShadow(&v29, v24);
      v7 = 48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x58000000030LL;
    }
    if ( (v24 & 0x80u) != 0LL )
    {
      v33 = 17;
      v7 += 48LL;
      goto LABEL_49;
    }
LABEL_43:
    v7 = MiLockNonPagedPoolPte(v2, &v33);
    v26 = *v2;
    if ( v22 <= 0x7F8 )
      v26 = MiReadPteShadow(v2, *v2);
    if ( (v26 & 0x200) != 0 )
    {
      v27 = v26 & 0xFFFFFFFFFFFFFDFFuLL;
      _InterlockedExchange64(v2, v27);
      if ( v22 <= 0x7F8 )
        MiWritePteShadow(v2, v27);
    }
    LODWORD(v15) = v30;
    v16 = a2;
LABEL_49:
    if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v7 + 0x58000000000LL) / 48,
        *(_BYTE *)(v7 + 34) & 7,
        *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    if ( *(_WORD *)(v7 + 32) != 1 )
      KeBugCheckEx(0x4Eu, 0x9AuLL, (v7 + 0x58000000000LL) / 48, *(_BYTE *)(v7 + 34) & 7, *(unsigned __int16 *)(v7 + 32));
    v28 = (unsigned __int8)HIBYTE(*(_QWORD *)(v7 + 40)) >> 2;
    if ( v33 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v33);
    }
    if ( v28 != (_DWORD)v15 )
      v20 = 0;
    ++v21;
  }
  while ( v21 < v16 );
  if ( !v20 )
    return v34;
LABEL_58:
  a1->Next = (_SLIST_ENTRY *)((unsigned __int64)a1 ^ qword_14034FB80);
  RtlpInterlockedPushEntrySList(v19, a1 + 1);
  return 1LL;
}
