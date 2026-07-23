/*
 * XREFs of KiForwardTick @ 0x1400D6860
 * Callers:
 *     KeClockInterruptNotify @ 0x1400D7710 (KeClockInterruptNotify.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400960D0 (KeOrAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall KiForwardTick(__int64 a1, unsigned int a2, __int64 a3, char a4, char *a5)
{
  unsigned int v7; // r15d
  __int64 *v8; // rcx
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  __int64 v11; // r8
  unsigned __int16 v12; // dx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  unsigned int v15; // r9d
  __int64 v16; // rax
  unsigned __int16 v17; // r8
  __int16 v18; // dx
  unsigned __int16 i; // ax
  __int64 v20; // rcx
  __int16 *v21; // rdx
  __int64 v22; // rcx
  unsigned __int16 v23; // r8
  unsigned __int16 v24; // dx
  int *v25; // r9
  unsigned __int16 v26; // di
  unsigned int v27; // edi
  __int64 result; // rax
  __int64 *v29; // rdx
  __int64 v30; // rdi
  unsigned __int16 v31; // cx
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  char v34; // cl
  char v35; // r15
  unsigned __int16 v36; // di
  unsigned __int16 v37; // r10
  unsigned int v38; // edx
  __int64 v39; // r9
  __int64 v40; // rcx
  int v43; // [rsp+30h] [rbp-198h] BYREF
  _DWORD v44[43]; // [rsp+34h] [rbp-194h] BYREF
  char v45; // [rsp+E0h] [rbp-E8h] BYREF

  v7 = 1;
  if ( PoDisableSkipTick )
    goto LABEL_41;
  v43 = 1310721;
  memset(v44, 0, 0xA4uLL);
  if ( KeNumberNodes )
  {
    v8 = KeNodeBlock;
    v9 = (unsigned __int16)KeNumberNodes;
    do
    {
      v10 = *(_WORD *)(*v8 + 144);
      v11 = *(_QWORD *)(*v8 + 64);
      if ( (unsigned __int16)v43 <= v10 )
        LOWORD(v43) = v10 + 1;
      ++v8;
      *(_QWORD *)&v44[2 * v10 + 1] |= v11;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  if ( !(_WORD)v43 )
    goto LABEL_41;
  while ( !*(_QWORD *)&v44[2 * v12 + 1] )
  {
    if ( ++v12 >= (unsigned __int16)v43 )
      goto LABEL_41;
  }
  v13 = (unsigned __int16)v43;
  v14 = (__int64 *)&v44[1];
  v15 = (unsigned __int16)v43;
  do
  {
    v16 = *v14++;
    *(__int64 *)((char *)v14 + a5 - (char *)&v44[1]) = ~v16;
    --v13;
  }
  while ( v13 );
  v17 = HIWORD(v43);
  v18 = HIWORD(v43);
  if ( v15 < HIWORD(v43) )
    memset(&a5[8 * v15 + 8], 0xFFu, 8LL * (HIWORD(v43) - v15));
  *((_DWORD *)a5 + 1) = 0;
  *(_WORD *)a5 = v17;
  *((_WORD *)a5 + 1) = v17;
  if ( v17 >= LOWORD(KeActiveProcessors[0]) )
    v18 = KeActiveProcessors[0];
  *(_WORD *)a5 = v18;
  for ( i = 0; i < *(_WORD *)a5; *(_QWORD *)v21 &= *(_QWORD *)&KeActiveProcessors[2 * v20 + 2] )
  {
    v20 = i;
    v21 = (__int16 *)&a5[8 * i++ + 8];
  }
  if ( a5 != &v45 )
  {
    *((_WORD *)a5 + 1) = 20;
    *((_DWORD *)a5 + 1) = 0;
    if ( i < 0x14u )
    {
      do
      {
        v22 = i++;
        *(_QWORD *)&a5[8 * v22 + 8] = 0LL;
      }
      while ( i < *((_WORD *)a5 + 1) );
    }
  }
  if ( a4 )
    KeOrAffinityEx((unsigned __int16 *)a5, (unsigned __int16 *)KiGroupSchedulingOverQuotaMask, a5);
  if ( !KiSerializeTimerExpiration )
  {
    v35 = KiLastForwardedHand;
    v43 = 1310721;
    v36 = 0;
    memset(v44, 0, 0xA4uLL);
    v37 = KiActiveGroups;
    do
    {
      LOBYTE(v38) = v35 - 1;
      v39 = qword_1403AB288[2 * v36];
      do
      {
        v38 = (unsigned __int8)(v38 + 1);
        v40 = *(_QWORD *)(((unsigned __int64)v38 << 6) + v39);
        if ( (unsigned __int16)v43 <= v36 )
          LOWORD(v43) = v36 + 1;
        *(_QWORD *)&v44[2 * v36 + 1] |= v40;
      }
      while ( v38 != (unsigned __int8)a3 );
      ++v36;
    }
    while ( v36 < v37 );
    KeOrAffinityEx((unsigned __int16 *)a5, (unsigned __int16 *)&v43, a5);
    v7 = 1;
  }
  v23 = *(_WORD *)a5;
  v24 = KeActiveProcessors[0];
  if ( *(_WORD *)a5 < LOWORD(KeActiveProcessors[0]) )
  {
    v25 = KeActiveProcessors;
    v24 = *(_WORD *)a5;
  }
  else
  {
    v25 = (int *)a5;
  }
  v26 = 0;
  if ( !v24 )
  {
LABEL_51:
    if ( v26 < *(_WORD *)v25 )
    {
      while ( !*(_QWORD *)&v25[2 * v26 + 2] )
      {
        if ( ++v26 >= *(_WORD *)v25 )
          goto LABEL_41;
      }
      goto LABEL_28;
    }
LABEL_41:
    v30 = 0LL;
    KeCopyAffinityEx((__int64)a5, (unsigned __int16 *)KeActiveProcessors);
LABEL_42:
    HalRequestClockInterrupt(v7, v30);
    result = a3;
    KiLastForwardedHand = a3;
    goto LABEL_33;
  }
  while ( *(_QWORD *)&a5[8 * v26 + 8] == *(_QWORD *)&KeActiveProcessors[2 * v26 + 2] )
  {
    if ( ++v26 >= v24 )
      goto LABEL_51;
  }
LABEL_28:
  v27 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  result = v23;
  if ( v23 > v27 >> 6 )
  {
    v29 = (__int64 *)&a5[8 * (v27 >> 6) + 8];
    result = *v29 & ~(1LL << (v27 & 0x3F));
    *v29 = result;
  }
  v7 = 0;
  v30 = (__int64)a5;
  v31 = 0;
  if ( *(_WORD *)a5 )
  {
    do
    {
      result = v31;
      if ( *(_QWORD *)&a5[8 * v31 + 8] )
        goto LABEL_42;
    }
    while ( ++v31 < *(_WORD *)a5 );
  }
LABEL_33:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v32 = (unsigned int)KiPollSlotNext;
    KiPollSlot = KiPollSlotNext;
    result = (unsigned int)(KiPollSlotNext + 1);
    KiPollSlotNext = result;
    if ( (unsigned int)result >= a2 )
      KiPollSlotNext = 0;
    if ( (_DWORD)v32 != *(_DWORD *)(a1 + 36) )
    {
      v33 = (unsigned int)KiProcessorIndexToNumberMappingTable[v32];
      v34 = v33 & 0x3F;
      result = v33 >> 6;
      if ( ((*(_QWORD *)&a5[8 * result + 8] >> v34) & 1) == 0 )
        KiPollSlot = *(_DWORD *)(a1 + 36);
    }
  }
  return result;
}
