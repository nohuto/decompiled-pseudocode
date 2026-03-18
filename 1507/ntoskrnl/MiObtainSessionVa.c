/*
 * XREFs of MiObtainSessionVa @ 0x140129230
 * Callers:
 *     MiExpandPtes @ 0x140068530 (MiExpandPtes.c)
 *     MiExpandPagedPool @ 0x140128FF4 (MiExpandPagedPool.c)
 *     MiExpandSpecialPool @ 0x14021F2B8 (MiExpandSpecialPool.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiObtainSessionVa(ULONG NumberToFind)
{
  unsigned __int64 v2; // r13
  unsigned int v3; // r8d
  unsigned __int64 v4; // r9
  __int64 v5; // rdi
  int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // r11d
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  __int64 v12; // rsi
  ULONG v13; // r14d
  unsigned __int64 *v14; // r8
  unsigned __int64 v15; // rdi
  int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned int v18; // edx
  ULONG v19; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r14
  ULONG ClearBitsAndSet; // eax
  __int64 v26; // r14
  unsigned __int64 v27; // rsi
  __int16 v28; // ax
  int v30; // edx
  unsigned __int64 *v31; // r11
  bool v32; // zf
  __int64 v33; // rcx
  ULONG v34; // r10d
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  unsigned __int64 *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned int v45; // r10d
  __int64 v46; // rcx
  unsigned int v47; // eax
  unsigned __int64 v48; // rsi
  __int16 v49; // ax
  unsigned int v50; // [rsp+A8h] [rbp+50h]
  int v51; // [rsp+B0h] [rbp+58h]
  unsigned int v52; // [rsp+B8h] [rbp+60h]

  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v3 = *(_DWORD *)(v2 + 7696);
  v5 = *(_QWORD *)(v2 + 7704);
  v50 = *(_DWORD *)(v2 + 7712);
  v4 = v50;
  v6 = (unsigned int)v4 < v3 ? v4 : 0;
  v7 = v3 - 1;
  if ( NumberToFind )
  {
    if ( (v5 & 4) != 0 )
    {
      v8 = 1;
      v9 = 32;
      v51 = 32;
    }
    else
    {
      v8 = 0;
      v51 = 0;
      v9 = 0;
    }
    v52 = v8;
    while ( 1 )
    {
      v10 = v9 + v7;
      v11 = v9 + v6;
      v12 = v5 - 4LL * v8;
      if ( v7 - v6 + 1 >= NumberToFind )
        break;
      v18 = -1;
LABEL_90:
      if ( !v6 )
        goto LABEL_15;
      v9 = v51;
      v47 = v4 + NumberToFind;
      v8 = v52;
      v6 = 0;
      if ( (unsigned int)v4 + NumberToFind > v3 )
        v47 = v3;
      v7 = v47 - 1;
    }
    v13 = v10 - NumberToFind + 1;
    v14 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
    v4 = ((1LL << (v11 & 0x3F)) - 1) | *v14;
    v15 = v12 + 8 * ((unsigned __int64)v13 >> 6);
    if ( NumberToFind > 0x7F )
    {
      if ( (v13 & 0x3F) != 0 )
        v15 += 8LL;
      if ( v4 )
      {
        if ( *++v14 )
          goto LABEL_66;
        v32 = !_BitScanReverse64((unsigned __int64 *)&v39, v4);
        if ( v32 )
          v40 = 64;
        else
          v40 = 63 - v39;
      }
      else
      {
        v40 = 0;
      }
      while ( 1 )
      {
        v18 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) - v40;
        if ( v18 > v13 )
          goto LABEL_82;
        v41 = &v14[(NumberToFind - v40) >> 6];
        while ( ++v14 != v41 )
        {
          if ( *v14 )
            goto LABEL_66;
        }
        v4 = ((_BYTE)NumberToFind - (_BYTE)v40) & 0x3F;
        if ( (((_BYTE)NumberToFind - (_BYTE)v40) & 0x3F) == 0 )
          goto LABEL_13;
        v32 = !_BitScanForward64((unsigned __int64 *)&v42, *v14);
        if ( v32 )
          LODWORD(v42) = 64;
        if ( (unsigned int)v42 >= (unsigned int)v4 )
          goto LABEL_13;
        do
        {
LABEL_66:
          if ( (unsigned __int64)v14 > v15 )
            goto LABEL_82;
          ++v14;
        }
        while ( *v14 );
        v32 = !_BitScanReverse64((unsigned __int64 *)&v43, *(v14 - 1));
        if ( v32 )
          v40 = 64;
        else
          v40 = 63 - v43;
      }
    }
    v16 = 64;
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind <= 1 )
      {
        while ( v4 == -1LL )
        {
          if ( (unsigned __int64)++v14 > v15 )
            goto LABEL_48;
          v4 = *v14;
        }
        v4 = ~v4;
        _BitScanForward64(&v17, v4);
        v18 = v17 + ((unsigned int)(((__int64)v14 - v12) >> 3) << 6);
        if ( v18 > v13 )
        {
LABEL_48:
          v18 = -1;
        }
        else
        {
LABEL_13:
          if ( v18 != -1 )
          {
            v18 -= v9;
LABEL_15:
            v19 = v18;
            goto LABEL_16;
          }
        }
        goto LABEL_49;
      }
      v30 = 0;
      v31 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v10 >> 6));
      while ( 1 )
      {
        if ( v4 == -1LL )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)++v14 > v15 )
              goto LABEL_48;
            v4 = *v14;
            if ( *v14 != -1LL )
            {
              v30 = 0;
              break;
            }
          }
        }
        v32 = !_BitScanForward64((unsigned __int64 *)&v33, v4);
        if ( v32 )
          LODWORD(v33) = 64;
        if ( (int)v33 + v30 >= NumberToFind )
          break;
        v34 = NumberToFind;
        v35 = ~v4;
        while ( 1 )
        {
          v35 &= v35 >> (v34 >> 1);
          if ( !v35 )
            break;
          v34 -= v34 >> 1;
          if ( v34 <= 1 )
          {
            _BitScanForward64(&v36, v35);
            v37 = v36;
            goto LABEL_39;
          }
        }
        if ( v14 == v31 )
          goto LABEL_48;
        v32 = !_BitScanReverse64((unsigned __int64 *)&v38, v4);
        if ( v32 )
          v30 = 64;
        else
          v30 = 63 - v38;
        v4 = *++v14;
      }
      v37 = -v30;
LABEL_39:
      v18 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) + v37;
      if ( v18 <= v13 )
      {
        v9 = v51;
        goto LABEL_13;
      }
LABEL_82:
      v18 = -1;
LABEL_49:
      v5 = *(_QWORD *)(v2 + 7704);
      v4 = v50;
      v3 = *(_DWORD *)(v2 + 7696);
      goto LABEL_90;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( (v4 & 0x8000000000000000uLL) != 0 )
        {
          if ( (unsigned __int64)++v14 > v15 )
            goto LABEL_48;
          v4 = *v14;
        }
        v32 = !_BitScanReverse64((unsigned __int64 *)&v44, v4);
        if ( !v32 )
          v16 = 63 - v44;
        v18 = (((unsigned int)(((__int64)v14 - v12) >> 3) + 1) << 6) - v16;
        if ( v18 > v13 )
          goto LABEL_48;
        v45 = NumberToFind - v16;
        if ( NumberToFind == v16 )
          goto LABEL_13;
        ++v14;
        v16 = 64;
        v4 = *v14;
        if ( v45 >= 0x40 )
          break;
LABEL_78:
        v32 = !_BitScanForward64((unsigned __int64 *)&v46, v4);
        if ( v32 )
          LODWORD(v46) = 64;
        if ( (unsigned int)v46 >= v45 )
          goto LABEL_13;
        v16 = 64;
      }
      if ( !v4 )
      {
        v45 -= 64;
        if ( !v45 )
          goto LABEL_13;
        v4 = *++v14;
        goto LABEL_78;
      }
    }
  }
  v19 = v6 & 0xFFFFFFF8;
LABEL_16:
  if ( v19 == -1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v21 = (unsigned __int64 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7688);
  v22 = KeAbPreAcquire((ULONG_PTR)v21, 0LL, 0LL, v4);
  v24 = v22;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
    ExfAcquirePushLockExclusiveEx(v21, v22, (ULONG_PTR)v21, v23);
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(v2 + 7696), NumberToFind, v19);
  v26 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v48 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 7688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v48 + 7688));
    KeAbPostRelease(v48 + 7688);
    v49 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v49;
    if ( !v49
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
  if ( NumberToFind == 1 )
    *(_DWORD *)(v2 + 7712) = ClearBitsAndSet + 1;
  *(_DWORD *)(v2 + 7820) += NumberToFind;
  v27 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 7688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v27 + 7688));
  KeAbPostRelease(v27 + 7688);
  v28 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v28;
  if ( !v28 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return qword_14034EAB0 + (v26 << 21);
}
