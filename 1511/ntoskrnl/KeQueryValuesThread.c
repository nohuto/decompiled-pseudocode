/*
 * XREFs of KeQueryValuesThread @ 0x1400C72B0
 * Callers:
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeQueryValuesThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  unsigned __int8 CurrentIrql; // r12
  __int64 *v7; // rdx
  int v8; // r14d
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  bool v14; // zf
  char v15; // al
  __int64 v16; // rax
  __int64 result; // rax
  _DWORD v18[6]; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF
  int v20; // [rsp+88h] [rbp+10h] BYREF
  int v21; // [rsp+90h] [rbp+18h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v19, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 388);
    *(_BYTE *)(a2 + 6) = 1;
    goto LABEL_54;
  }
LABEL_6:
  v7 = KiProcessorBlock;
  do
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(a1 + 388);
      v9 = 0LL;
      v10 = 0LL;
      if ( v8 == 5 )
      {
        v15 = *(_BYTE *)(a1 + 112) & 7;
        if ( v15 == 1 || (unsigned __int8)(v15 - 3) <= 3u )
          goto LABEL_46;
        LOBYTE(v8) = 2;
        goto LABEL_39;
      }
      if ( *(_BYTE *)(a1 + 388) == 1 )
      {
        v12 = *(unsigned int *)(a1 + 536);
        if ( (int)v12 >= 0 )
        {
          v9 = KiProcessorBlock[v12];
          v22 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          {
            do
              KeYieldProcessorEx(&v22, (__int64)v7, a3);
            while ( *(_QWORD *)(v9 + 48) );
          }
          if ( *(_BYTE *)(a1 + 388) != 1 )
            goto LABEL_19;
          v14 = *(_DWORD *)(a1 + 536) == (_DWORD)v12;
LABEL_34:
          if ( v14 )
            goto LABEL_46;
LABEL_19:
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          goto LABEL_6;
        }
        v13 = (unsigned int)v12;
        v21 = 0;
        LODWORD(v13) = v12 & 0x7FFFFFFF;
        v10 = *(volatile signed __int32 **)(KiProcessorBlock[v13] + 24776);
        while ( _interlockedbittestandset64(v10, 0LL) )
        {
          do
            KeYieldProcessorEx(&v21, (__int64)v7, a3);
          while ( *(_QWORD *)v10 );
        }
        if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v12 )
          goto LABEL_46;
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
        goto LABEL_6;
      }
      if ( *(_BYTE *)(a1 + 388) != 2 )
        break;
LABEL_39:
      v16 = *(unsigned int *)(a1 + 536);
      if ( (int)v16 >= 0 )
      {
        v9 = KiProcessorBlock[v16];
        v18[0] = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
        {
          do
            KeYieldProcessorEx(v18, (__int64)v7, a3);
          while ( *(_QWORD *)(v9 + 48) );
        }
        v14 = a1 == *(_QWORD *)(v9 + 8);
        goto LABEL_34;
      }
    }
    if ( *(_BYTE *)(a1 + 388) != 3 )
      goto LABEL_46;
    v11 = *(unsigned int *)(a1 + 536);
  }
  while ( (int)v11 < 0 );
  v9 = KiProcessorBlock[v11];
  v20 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v20, (__int64)v7, a3);
    while ( *(_QWORD *)(v9 + 48) );
  }
  if ( a1 != *(_QWORD *)(v9 + 16) )
  {
    if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v11 )
      __fastfail(0x1Eu);
    goto LABEL_19;
  }
LABEL_46:
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 436);
  if ( v9 )
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
  if ( v10 )
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  v4 = *(_BYTE *)(a1 + 643);
  *(_BYTE *)(a2 + 6) = *(_BYTE *)(a1 + 195);
  if ( (_BYTE)v8 == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
    v4 = 5;
LABEL_54:
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(a1 + 563);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  *(_BYTE *)(a2 + 4) = v8;
  *(_BYTE *)(a2 + 5) = v4;
  return result;
}
