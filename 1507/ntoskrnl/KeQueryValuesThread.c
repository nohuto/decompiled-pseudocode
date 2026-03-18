/*
 * XREFs of KeQueryValuesThread @ 0x14004FE00
 * Callers:
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v4; // di
  unsigned __int8 CurrentIrql; // r13
  unsigned int v6; // ebx
  int v7; // r15d
  __int64 v8; // rdi
  volatile signed __int32 *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  bool v16; // zf
  char v17; // al
  __int64 v18; // rax
  unsigned int v19; // ebx
  __int64 result; // rax

  *(_DWORD *)a2 = 0;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v7) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 6) = 1;
    goto LABEL_73;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)(a1 + 388);
      v8 = 0LL;
      v9 = 0LL;
      if ( v7 == 5 )
      {
        v17 = *(_BYTE *)(a1 + 112) & 7;
        if ( v17 == 1 || (unsigned __int8)(v17 - 3) <= 3u )
          goto LABEL_65;
        LOBYTE(v7) = 2;
        goto LABEL_54;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_54:
        v18 = *(unsigned int *)(a1 + 536);
        if ( (int)v18 >= 0 )
        {
          v8 = KiProcessorBlock[v18];
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v19);
            }
            while ( *(_QWORD *)(v8 + 48) );
          }
          v16 = a1 == *(_QWORD *)(v8 + 8);
LABEL_49:
          if ( v16 )
            goto LABEL_65;
          goto LABEL_26;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_65;
        v10 = *(unsigned int *)(a1 + 536);
        if ( (int)v10 >= 0 )
        {
          v8 = KiProcessorBlock[v10];
          v11 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          {
            do
            {
              if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v11);
            }
            while ( *(_QWORD *)(v8 + 48) );
          }
          if ( a1 == *(_QWORD *)(v8 + 16) )
            goto LABEL_65;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v10 )
            __fastfail(0x1Eu);
LABEL_26:
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
        }
      }
    }
    v12 = *(unsigned int *)(a1 + 536);
    if ( (int)v12 >= 0 )
    {
      v8 = KiProcessorBlock[v12];
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
        }
        while ( *(_QWORD *)(v8 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) != 1 )
        goto LABEL_26;
      v16 = *(_DWORD *)(a1 + 536) == (_DWORD)v12;
      goto LABEL_49;
    }
    v13 = (unsigned int)v12;
    LODWORD(v13) = v12 & 0x7FFFFFFF;
    v14 = 0;
    v9 = *(volatile signed __int32 **)(KiProcessorBlock[v13] + 24776);
    while ( _interlockedbittestandset64(v9, 0LL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
      }
      while ( *(_QWORD *)v9 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v12 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  }
LABEL_65:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  if ( v8 )
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
  if ( v9 )
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  v4 = *(_BYTE *)(a1 + 643);
  *(_BYTE *)(a2 + 6) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v7 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v4 = 5;
LABEL_73:
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_BYTE *)(a2 + 4) = v7;
  *(_BYTE *)(a2 + 5) = v4;
  return result;
}
