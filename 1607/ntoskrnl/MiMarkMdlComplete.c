/*
 * XREFs of MiMarkMdlComplete @ 0x1401E8970
 * Callers:
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140015564 (MiLocateVadEvent.c)
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 */

int __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 *VadEvent; // rax
  _QWORD *v5; // r14
  unsigned int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rbx
  bool v9; // cc

  v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  VadEvent = MiLocateVadEvent(a2, 8);
  v5 = (_QWORD *)(a1 + 48);
  v6 = 0;
  for ( i = VadEvent[2]; v6 < v3; LODWORD(VadEvent) = v6 )
  {
    v8 = 48LL * *v5 - 0x58000000000LL;
    LOBYTE(VadEvent) = MiLockPageInline(v8);
    *(_BYTE *)(v8 + 34) |= 0x10u;
    *(_BYTE *)(v8 + 34) &= ~0x20u;
    *(_QWORD *)v8 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)VadEvent);
    ++v6;
    ++v5;
  }
  *(_QWORD *)(i + 88) = 0LL;
  v9 = *(_DWORD *)(i + 176) <= 1;
  *(_DWORD *)(i + 80) = -1073741670;
  if ( !v9 )
  {
    KeSetEvent((PRKEVENT)(i + 56), 0, 0);
    LODWORD(VadEvent) = KeResetEvent((PRKEVENT)(i + 56));
  }
  return (int)VadEvent;
}
