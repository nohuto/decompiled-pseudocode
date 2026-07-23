/*
 * XREFs of KiCheckForTimerExpiration @ 0x1400DA690
 * Callers:
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     RtlRbRemoveNode @ 0x140030EA0 (RtlRbRemoveNode.c)
 *     KiSetClockInterval @ 0x14009D6E4 (KiSetClockInterval.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14009D780 (KiSetClockIntervalToMinimumRequested.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1400A95C0 (PoTraceSystemTimerResolutionKernel.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall KiCheckForTimerExpiration(__int64 a1)
{
  unsigned __int64 v2; // rdi
  char v3; // r11
  __int64 v4; // rdx
  char v5; // r9
  unsigned __int64 v6; // rax
  char v7; // dl
  char v8; // cl
  int v9; // esi
  unsigned __int8 CurrentIrql; // bp
  char v11; // al
  __int64 v12; // r10
  int v13; // r8d
  int v14; // r8d
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  unsigned __int16 v17; // tt
  __int16 v18; // cx
  unsigned __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  __int16 v20; // [rsp+38h] [rbp-40h]
  _QWORD v21[2]; // [rsp+40h] [rbp-38h] BYREF

  v2 = MEMORY[0xFFFFF78000000008];
  if ( (*(_BYTE *)(a1 + 11756) & 8) != 0 )
    goto LABEL_6;
  if ( *(_QWORD *)(a1 + 11560) == KiLastNonHrTimerExpiration )
  {
    v5 = 0;
    goto LABEL_19;
  }
  v3 = 0;
  v4 = MEMORY[0xFFFFF78000000008] >> 18;
  v5 = 1;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
    {
LABEL_5:
      *(_DWORD *)(a1 + 11760) = v4;
      goto LABEL_6;
    }
    v12 = KiProcessorBlock[0] + 13824;
  }
  else
  {
    v12 = a1 + 13824;
  }
  if ( !v12 )
    goto LABEL_5;
  v13 = *(_DWORD *)(a1 + 11760);
  if ( (unsigned int)(v4 - v13) >= 0x100 )
    LODWORD(v4) = v13 + 255;
  v14 = v13 - 1;
  while ( MEMORY[0xFFFFF78000000008] < *(_QWORD *)(32LL * (unsigned __int8)++v14 + v12 + 536) )
  {
    if ( v14 == (_DWORD)v4 )
      goto LABEL_32;
  }
  v3 = 1;
LABEL_32:
  *(_DWORD *)(a1 + 11760) = v14;
  if ( !v3 )
  {
LABEL_19:
    if ( !*(_BYTE *)(a1 + 33) )
      goto LABEL_6;
    if ( v5 )
    {
      if ( KiNextTimer2DueTime > v2 )
        goto LABEL_6;
    }
    else if ( qword_14030E348 > v2 )
    {
      goto LABEL_6;
    }
  }
  _m_prefetchw((const void *)(a1 + 11756));
  v15 = *(_WORD *)(a1 + 11756);
  do
  {
    v16 = v15;
    BYTE1(v16) = HIBYTE(v15);
    v17 = v15;
    v15 = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11756), v15 | 8, v15);
  }
  while ( v17 != v15 );
  if ( (v15 & 0x29) == 0 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      LOBYTE(v16) = 2;
      HalRequestSoftwareInterrupt(v16);
    }
  }
LABEL_6:
  if ( *(_BYTE *)(a1 + 33) )
  {
    v6 = v2 + KeMaximumIncrement;
    v7 = KiHRTimerClockActive;
    if ( KiHRTimerClockActive )
    {
      if ( v6 > qword_14030E348 )
        goto LABEL_7;
    }
    else if ( v6 <= qword_14030E348 )
    {
      goto LABEL_7;
    }
    v8 = 0;
    v9 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( v7 == KiHRTimerClockActive )
    {
      if ( v7 )
      {
        RtlRbRemoveNode(&KiClockIntervalRequests, &KiHRTimerClockRequest);
        byte_14030E3B8 = 0;
        KiSetClockIntervalToMinimumRequested();
        v11 = 0;
      }
      else
      {
        KiSetClockInterval(KeMinimumIncrement, 0, (__int64)&KiHRTimerClockRequest);
        v9 = KeMinimumIncrement;
        v11 = 1;
      }
      KiHRTimerClockActive = v11;
      v8 = 1;
    }
    __writecr8(CurrentIrql);
    if ( v8 )
      PoTraceSystemTimerResolutionKernel(v9, 1834242632);
  }
LABEL_7:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v18 = 0;
    v19 = v2;
    v20 = 0;
    if ( *(_BYTE *)(a1 + 33) )
    {
      v18 = 1;
      v20 = 1;
    }
    if ( (*(_BYTE *)(a1 + 11756) & 8) != 0 )
      v20 = v18 | 8;
    v21[1] = 16LL;
    v21[0] = &v19;
    EtwTraceKernelEvent((int)v21, 1, 0x40040000u, 3919, 4196866);
  }
}
