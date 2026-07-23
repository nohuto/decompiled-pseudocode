/*
 * XREFs of KeQueryValuesThread @ 0x1400698D0
 * Callers:
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2)
{
  char v3; // bp
  unsigned __int8 CurrentIrql; // r15
  int v6; // esi
  __int64 v7; // rbp
  volatile signed __int32 *v8; // r14
  char v9; // al
  __int64 result; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // r12
  __int64 v15; // rax
  _DWORD v16[6]; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+80h] [rbp+8h] BYREF
  int v18; // [rsp+88h] [rbp+10h] BYREF
  int v19; // [rsp+90h] [rbp+18h] BYREF
  int v20; // [rsp+98h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  v3 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v17 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v17);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v6) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 6) = 1;
    goto LABEL_13;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int8 *)(a1 + 388);
      v7 = 0LL;
      v8 = 0LL;
      if ( v6 == 5 )
      {
        v9 = *(_BYTE *)(a1 + 112) & 7;
        if ( v9 == 1 || (unsigned __int8)(v9 - 3) <= 3u )
          goto LABEL_6;
        LOBYTE(v6) = 2;
        goto LABEL_25;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
        break;
      if ( *(_BYTE *)(a1 + 388) == 2 )
      {
LABEL_25:
        v12 = *(unsigned int *)(a1 + 536);
        if ( (int)v12 >= 0 )
        {
          v7 = KiProcessorBlock[v12];
          v16[0] = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(v16);
            while ( *(_QWORD *)(v7 + 48) );
          }
          v13 = a1 == *(_QWORD *)(v7 + 8);
LABEL_29:
          if ( v13 )
            goto LABEL_6;
          goto LABEL_22;
        }
      }
      else
      {
        if ( *(_BYTE *)(a1 + 388) != 3 )
          goto LABEL_6;
        v11 = *(unsigned int *)(a1 + 536);
        if ( (int)v11 >= 0 )
        {
          v7 = KiProcessorBlock[v11];
          v18 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v18);
            while ( *(_QWORD *)(v7 + 48) );
          }
          if ( a1 == *(_QWORD *)(v7 + 16) )
            goto LABEL_6;
          if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v11 )
            __fastfail(0x1Eu);
LABEL_22:
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
        }
      }
    }
    v14 = *(unsigned int *)(a1 + 536);
    if ( (int)v14 >= 0 )
    {
      v7 = KiProcessorBlock[v14];
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *(_QWORD *)(v7 + 48) );
      }
      if ( *(_BYTE *)(a1 + 388) != 1 )
        goto LABEL_22;
      v13 = *(_DWORD *)(a1 + 536) == (_DWORD)v14;
      goto LABEL_29;
    }
    v15 = (unsigned int)v14;
    v19 = 0;
    LODWORD(v15) = v14 & 0x7FFFFFFF;
    v8 = *(volatile signed __int32 **)(KiProcessorBlock[v15] + 24904);
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( *(_QWORD *)v8 );
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  }
LABEL_6:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  if ( v7 )
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
  if ( v8 )
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
  v3 = *(_BYTE *)(a1 + 643);
  *(_BYTE *)(a2 + 6) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v6 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v3 = 5;
LABEL_13:
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_BYTE *)(a2 + 4) = v6;
  *(_BYTE *)(a2 + 5) = v3;
  return result;
}
