/*
 * XREFs of MiMarkMdlComplete @ 0x1401D6CB4
 * Callers:
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 */

int __fastcall MiMarkMdlComplete(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 *VadEvent; // rax
  _QWORD *v5; // r14
  unsigned int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rbx
  char v9; // cl
  bool v10; // cc

  v3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
  VadEvent = MiLocateVadEvent(a2, 8);
  v5 = (_QWORD *)(a1 + 48);
  v6 = 0;
  for ( i = VadEvent[2]; v6 < v3; LODWORD(VadEvent) = v6 )
  {
    v8 = 48LL * *v5 - 0x58000000000LL;
    LOBYTE(VadEvent) = MiLockPageInline(v8);
    v9 = *(_BYTE *)(v8 + 34) & 0xCF | 0x10;
    *(_QWORD *)v8 = 0LL;
    *(_BYTE *)(v8 + 34) = v9;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)VadEvent);
    ++v6;
    ++v5;
  }
  *(_QWORD *)(i + 88) = 0LL;
  v10 = *(_DWORD *)(i + 176) <= 1;
  *(_DWORD *)(i + 80) = -1073741670;
  if ( !v10 )
  {
    KeSetEvent((PRKEVENT)(i + 56), 0, 0);
    LODWORD(VadEvent) = KeResetEvent((PRKEVENT)(i + 56));
  }
  return (int)VadEvent;
}
