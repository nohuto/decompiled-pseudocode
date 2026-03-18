/*
 * XREFs of MiMarkMdlComplete @ 0x140219754
 * Callers:
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

int __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 *VadEvent; // rax
  _QWORD *v5; // r14
  unsigned int v6; // r15d
  __int64 i; // rdi
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v10; // esi
  char v11; // al
  bool v12; // cc

  v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  VadEvent = MiLocateVadEvent(a2, 8);
  v5 = (_QWORD *)(a1 + 48);
  v6 = 0;
  for ( i = VadEvent[2]; v6 < v3; LODWORD(VadEvent) = v6 )
  {
    v8 = 48LL * *v5 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    v11 = *(_BYTE *)(v8 + 34) & 0xCF | 0x10;
    *(_QWORD *)v8 = 0LL;
    *(_BYTE *)(v8 + 34) = v11;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    ++v6;
    ++v5;
  }
  *(_QWORD *)(i + 88) = 0LL;
  v12 = *(_DWORD *)(i + 176) <= 1;
  *(_DWORD *)(i + 80) = -1073741670;
  if ( !v12 )
  {
    KeSetEvent((PRKEVENT)(i + 56), 0, 0);
    LODWORD(VadEvent) = KeResetEvent((PRKEVENT)(i + 56));
  }
  return (int)VadEvent;
}
