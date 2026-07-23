/*
 * XREFs of MiObtainSessionVa @ 0x1400A22A4
 * Callers:
 *     MiExpandPagedPool @ 0x1400A1294 (MiExpandPagedPool.c)
 *     MiExpandPtes @ 0x1400A1590 (MiExpandPtes.c)
 *     MiExpandSpecialPool @ 0x1401EB444 (MiExpandSpecialPool.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiObtainSessionVa(ULONG NumberToFind)
{
  unsigned __int64 v2; // r13
  ULONG v3; // r8d
  ULONG v4; // r9d
  __int64 v5; // rdi
  ULONG v6; // r15d
  ULONG v7; // eax
  unsigned int v8; // edx
  int v9; // r11d
  ULONG v10; // r10d
  ULONG v11; // ecx
  __int64 v12; // rsi
  ULONG v13; // r14d
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rdi
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  ULONG v20; // r15d
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rsi
  ULONG ClearBitsAndSet; // eax
  __int64 v26; // rsi
  unsigned __int64 v27; // rdi
  int v29; // ecx
  unsigned __int64 *v30; // r11
  bool v31; // zf
  __int64 v32; // rax
  ULONG v33; // r10d
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  unsigned __int64 *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // r10d
  __int64 v45; // rax
  ULONG v46; // eax
  unsigned __int64 v47; // rdi
  int v48; // [rsp+B0h] [rbp+58h]
  unsigned int v49; // [rsp+B8h] [rbp+60h]

  v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  v3 = *(_DWORD *)(v2 + 7824);
  v5 = *(_QWORD *)(v2 + 7832);
  v4 = *(_DWORD *)(v2 + 7840);
  v6 = v4 < v3 ? v4 : 0;
  v7 = v3 - 1;
  if ( NumberToFind )
  {
    if ( (v5 & 4) != 0 )
    {
      v8 = 1;
      v9 = 32;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    v48 = v9;
    v49 = v8;
    while ( 1 )
    {
      v10 = v9 + v7;
      v11 = v9 + v6;
      v12 = v5 - 4LL * v8;
      if ( v7 - v6 + 1 >= NumberToFind )
        break;
      v19 = -1;
LABEL_86:
      if ( !v6 )
        goto LABEL_15;
      v9 = v48;
      v46 = v4 + NumberToFind;
      v8 = v49;
      if ( v4 + NumberToFind > v3 )
        v46 = v3;
      v7 = v46 - 1;
      v6 = 0;
    }
    v13 = v10 - NumberToFind + 1;
    v14 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
    v15 = ((1LL << (v11 & 0x3F)) - 1) | *v14;
    v16 = v12 + 8 * ((unsigned __int64)v13 >> 6);
    if ( NumberToFind > 0x7F )
    {
      if ( (v13 & 0x3F) != 0 )
        v16 += 8LL;
      if ( v15 )
      {
        if ( *++v14 )
          goto LABEL_63;
        v31 = !_BitScanReverse64((unsigned __int64 *)&v38, v15);
        if ( v31 )
          v39 = 64;
        else
          v39 = 63 - v38;
      }
      else
      {
        v39 = 0;
      }
      while ( 1 )
      {
        v19 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) - v39;
        if ( v19 > v13 )
          goto LABEL_45;
        v40 = &v14[(NumberToFind - v39) >> 6];
        while ( ++v14 != v40 )
        {
          if ( *v14 )
            goto LABEL_63;
        }
        if ( (((_BYTE)NumberToFind - (_BYTE)v39) & 0x3F) == 0 )
          goto LABEL_13;
        v31 = !_BitScanForward64((unsigned __int64 *)&v41, *v14);
        if ( v31 )
          LODWORD(v41) = 64;
        if ( (unsigned int)v41 >= (((_BYTE)NumberToFind - (_BYTE)v39) & 0x3Fu) )
          goto LABEL_13;
        do
        {
LABEL_63:
          if ( (unsigned __int64)v14 > v16 )
            goto LABEL_45;
          ++v14;
        }
        while ( *v14 );
        v31 = !_BitScanReverse64((unsigned __int64 *)&v42, *(v14 - 1));
        if ( v31 )
          v39 = 64;
        else
          v39 = 63 - v42;
      }
    }
    v17 = 64;
    if ( NumberToFind < 0x40 )
    {
      if ( NumberToFind > 1 )
      {
        v29 = 0;
        v30 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v10 >> 6));
        while ( 1 )
        {
          if ( v15 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v14 > v16 )
                goto LABEL_45;
              v15 = *v14;
              if ( *v14 != -1LL )
              {
                v29 = 0;
                break;
              }
            }
          }
          v31 = !_BitScanForward64((unsigned __int64 *)&v32, v15);
          if ( v31 )
            LODWORD(v32) = 64;
          if ( v29 + (int)v32 >= NumberToFind )
            break;
          v33 = NumberToFind;
          v34 = ~v15;
          while ( 1 )
          {
            v34 &= v34 >> (v33 >> 1);
            if ( !v34 )
              break;
            v33 -= v33 >> 1;
            if ( v33 <= 1 )
            {
              _BitScanForward64(&v35, v34);
              v36 = v35;
              goto LABEL_36;
            }
          }
          if ( v14 == v30 )
            goto LABEL_45;
          v31 = !_BitScanReverse64((unsigned __int64 *)&v37, v15);
          if ( v31 )
            v29 = 64;
          else
            v29 = 63 - v37;
          v15 = *++v14;
        }
        v36 = -v29;
LABEL_36:
        v19 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) + v36;
        if ( v19 <= v13 )
        {
          v9 = v48;
          goto LABEL_13;
        }
      }
      else
      {
        while ( v15 == -1 )
        {
          if ( (unsigned __int64)++v14 > v16 )
            goto LABEL_45;
          v15 = *v14;
        }
        _BitScanForward64(&v18, ~v15);
        v19 = v18 + ((unsigned int)(((__int64)v14 - v12) >> 3) << 6);
        if ( v19 <= v13 )
        {
LABEL_13:
          if ( v19 != -1 )
          {
            v19 -= v9;
LABEL_15:
            v20 = v19;
            goto LABEL_16;
          }
          goto LABEL_46;
        }
      }
LABEL_45:
      v19 = -1;
LABEL_46:
      v5 = *(_QWORD *)(v2 + 7832);
      v4 = *(_DWORD *)(v2 + 7840);
      v3 = *(_DWORD *)(v2 + 7824);
      goto LABEL_86;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v15 < 0 )
        {
          if ( (unsigned __int64)++v14 > v16 )
            goto LABEL_45;
          v15 = *v14;
        }
        v31 = !_BitScanReverse64((unsigned __int64 *)&v43, v15);
        if ( !v31 )
          v17 = 63 - v43;
        v19 = (((unsigned int)(((__int64)v14 - v12) >> 3) + 1) << 6) - v17;
        if ( v19 > v13 )
          goto LABEL_45;
        v44 = NumberToFind - v17;
        if ( NumberToFind == v17 )
          goto LABEL_13;
        ++v14;
        v17 = 64;
        v15 = *v14;
        if ( v44 >= 0x40 )
          break;
LABEL_75:
        v31 = !_BitScanForward64((unsigned __int64 *)&v45, v15);
        if ( v31 )
          LODWORD(v45) = 64;
        if ( (unsigned int)v45 >= v44 )
          goto LABEL_13;
      }
      if ( !v15 )
      {
        v44 -= 64;
        if ( !v44 )
          goto LABEL_13;
        v15 = *++v14;
        goto LABEL_75;
      }
    }
  }
  v20 = v6 & 0xFFFFFFF8;
LABEL_16:
  if ( v20 == -1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v22 = (volatile signed __int32 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7816);
  v23 = KeAbPreAcquire((ULONG_PTR)v22, 0LL, 0);
  v24 = v23;
  if ( _interlockedbittestandset64(v22, 0LL) )
    ExfAcquirePushLockExclusiveEx(v22, v23, v22);
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(v2 + 7824), NumberToFind, v20);
  v26 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v47 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 7816), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v47 + 7816);
    KeAbPostRelease(v47 + 7816);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  if ( NumberToFind == 1 )
    *(_DWORD *)(v2 + 7840) = ClearBitsAndSet + 1;
  *(_DWORD *)(v2 + 7948) += NumberToFind;
  v27 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 7816), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v27 + 7816);
  KeAbPostRelease(v27 + 7816);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return qword_140326900 + (v26 << 21);
}
