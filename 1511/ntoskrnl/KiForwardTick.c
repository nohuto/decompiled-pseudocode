/*
 * XREFs of KiForwardTick @ 0x140045900
 * Callers:
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14007C670 (KeCopyAffinityEx.c)
 *     KeOrAffinityEx @ 0x1400D8E70 (KeOrAffinityEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall KiForwardTick(__int64 a1, unsigned int a2, __int64 a3, char a4, char *a5)
{
  __int64 v5; // r15
  unsigned int v7; // r13d
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
  unsigned __int16 *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int16 v24; // dx
  int *v25; // r9
  unsigned __int16 v26; // di
  unsigned int v27; // edi
  __int64 result; // rax
  __int64 *v29; // rdx
  char *v30; // rdi
  unsigned __int16 v31; // cx
  char v32; // r15
  unsigned __int16 v33; // di
  unsigned __int16 v34; // r10
  unsigned int v35; // edx
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  char v40; // cl
  __int64 v44; // [rsp+40h] [rbp-198h] BYREF
  _QWORD v45[21]; // [rsp+48h] [rbp-190h] BYREF
  char v46; // [rsp+F0h] [rbp-E8h] BYREF

  v5 = a1;
  v7 = 1;
  if ( PoDisableSkipTick )
    goto LABEL_50;
  v44 = 1310721LL;
  memset(v45, 0, 0xA0uLL);
  if ( KeNumberNodes )
  {
    v8 = KeNodeBlock;
    v9 = (unsigned __int16)KeNumberNodes;
    do
    {
      v10 = *(_WORD *)(*v8 + 144);
      v11 = *(_QWORD *)(*v8 + 64);
      if ( (unsigned __int16)v44 <= v10 )
        LOWORD(v44) = v10 + 1;
      ++v8;
      v45[v10] |= v11;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  if ( !(_WORD)v44 )
    goto LABEL_50;
  while ( !v45[v12] )
  {
    if ( ++v12 >= (unsigned __int16)v44 )
      goto LABEL_50;
  }
  v13 = (unsigned __int16)v44;
  v14 = v45;
  v15 = (unsigned __int16)v44;
  do
  {
    v16 = *v14++;
    *(__int64 *)((char *)v14 + a5 - (char *)v45) = ~v16;
    --v13;
  }
  while ( v13 );
  v17 = WORD1(v44);
  v18 = WORD1(v44);
  if ( v15 < WORD1(v44) )
    memset(&a5[8 * v15 + 8], 0xFFu, 8LL * (WORD1(v44) - v15));
  *((_DWORD *)a5 + 1) = 0;
  *(_WORD *)a5 = v17;
  *((_WORD *)a5 + 1) = v17;
  if ( v17 >= LOWORD(KeActiveProcessors[0]) )
    v18 = KeActiveProcessors[0];
  *(_WORD *)a5 = v18;
  for ( i = 0; i < *(_WORD *)a5; *(_QWORD *)v21 &= *(_QWORD *)&KeActiveProcessors[2 * v20 + 2] )
  {
    v20 = i;
    v21 = (unsigned __int16 *)&a5[8 * i++ + 8];
  }
  if ( a5 != &v46 )
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
    KeOrAffinityEx(a5, KiGroupSchedulingOverQuotaMask, a5);
  if ( !KiSerializeTimerExpiration )
  {
    v32 = KiLastForwardedHand;
    v44 = 1310721LL;
    v33 = 0;
    memset(v45, 0, 0xA0uLL);
    v34 = KiActiveGroups;
    do
    {
      LOBYTE(v35) = v32 - 1;
      v36 = qword_140383178[2 * v33];
      do
      {
        v35 = (unsigned __int8)(v35 + 1);
        v37 = *(_QWORD *)(((unsigned __int64)v35 << 6) + v36);
        if ( (unsigned __int16)v44 <= v33 )
          LOWORD(v44) = v33 + 1;
        v45[v33] |= v37;
      }
      while ( v35 != (unsigned __int8)a3 );
      ++v33;
    }
    while ( v33 < v34 );
    KeOrAffinityEx(a5, &v44, a5);
    v5 = a1;
  }
  v23 = *(unsigned __int16 *)a5;
  v24 = KeActiveProcessors[0];
  if ( (unsigned __int16)v23 < LOWORD(KeActiveProcessors[0]) )
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
LABEL_47:
    if ( v26 < *(_WORD *)v25 )
    {
      while ( !*(_QWORD *)&v25[2 * v26 + 2] )
      {
        if ( ++v26 >= *(_WORD *)v25 )
          goto LABEL_50;
      }
      goto LABEL_28;
    }
LABEL_50:
    v30 = 0LL;
    KeCopyAffinityEx(a5, KeActiveProcessors);
LABEL_32:
    HalRequestClockInterrupt(v7, v30, v23, v25);
    result = a3;
    KiLastForwardedHand = a3;
    goto LABEL_33;
  }
  while ( *(_QWORD *)&a5[8 * v26 + 8] == *(_QWORD *)&KeActiveProcessors[2 * v26 + 2] )
  {
    if ( ++v26 >= v24 )
      goto LABEL_47;
  }
LABEL_28:
  v27 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v5 + 36)];
  result = (unsigned __int16)v23;
  if ( (unsigned __int16)v23 > v27 >> 6 )
  {
    v29 = (__int64 *)&a5[8 * (v27 >> 6) + 8];
    result = *v29 & ~(1LL << (v27 & 0x3F));
    *v29 = result;
  }
  v7 = 0;
  v30 = a5;
  v31 = 0;
  if ( *(_WORD *)a5 )
  {
    do
    {
      result = v31;
      if ( *(_QWORD *)&a5[8 * v31 + 8] )
        goto LABEL_32;
    }
    while ( ++v31 < *(_WORD *)a5 );
  }
LABEL_33:
  if ( (_BYTE)KdDebuggerEnabled )
  {
    v38 = (unsigned int)KiPollSlotNext;
    KiPollSlot = KiPollSlotNext;
    result = (unsigned int)(KiPollSlotNext + 1);
    KiPollSlotNext = result;
    if ( (unsigned int)result >= a2 )
      KiPollSlotNext = 0;
    if ( (_DWORD)v38 != *(_DWORD *)(v5 + 36) )
    {
      v39 = (unsigned int)KiProcessorIndexToNumberMappingTable[v38];
      v40 = v39 & 0x3F;
      result = v39 >> 6;
      if ( ((*(_QWORD *)&a5[8 * result + 8] >> v40) & 1) == 0 )
        KiPollSlot = *(_DWORD *)(v5 + 36);
    }
  }
  return result;
}
