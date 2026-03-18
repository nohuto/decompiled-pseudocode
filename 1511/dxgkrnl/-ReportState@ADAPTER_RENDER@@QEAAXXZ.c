/*
 * XREFs of ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C012E3CC
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C012E49C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ @ 0x1C0139AB4 (-ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C013B35C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::ReportState(ADAPTER_RENDER *this)
{
  DXGDEVICE **v1; // rsi
  DXGDEVICE *i; // rcx
  DXGDEVICE **v4; // rcx
  DXGDEVICE **v5; // rdi
  DXGDEVICE *j; // rcx
  DXGDEVICE **v7; // rcx
  DXGDEVICE *k; // rbx
  DXGDEVICE *m; // rbx

  v1 = (DXGDEVICE **)((char *)this + 104);
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 13); i != (DXGDEVICE *)v1 && i; i = *v4 )
    DXGDEVICE::ClearStateReportingFlags(i);
  v5 = (DXGDEVICE **)((char *)this + 120);
  for ( j = (DXGDEVICE *)*((_QWORD *)this + 15); j != (DXGDEVICE *)v5 && j; j = *v7 )
    DXGDEVICE::ClearStateReportingFlags(j);
  for ( k = *v1; k != (DXGDEVICE *)v1 && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::ReportState(k);
  for ( m = *v5; m != (DXGDEVICE *)v5 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::ReportState(m);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 53) + 8LL) + 48LL))(*((_QWORD *)this + 54));
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 50) + 8LL) + 56LL))(*((_QWORD *)this + 51));
}
