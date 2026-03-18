/*
 * XREFs of ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1C015F0A8
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00954B4 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::TrimAllDmaPoolsToMinimum(DXGDEVICE *this)
{
  char *v1; // rdi
  _QWORD *i; // rbx

  v1 = (char *)this + 312;
  for ( i = (_QWORD *)*((_QWORD *)this + 39); i != (_QWORD *)v1 && i; i = (_QWORD *)*i )
  {
    if ( i[26] )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 16LL) + 400LL) + 8LL) + 464LL))();
  }
}
