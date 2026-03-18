/*
 * XREFs of ?Create@CRemoteApplicationWindow@@SAJ_KPEAPEAV1@@Z @ 0x180164D24
 * Callers:
 *     ?AddApplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_K@Z @ 0x180161DC4 (-AddApplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteApplicationWindow::Create(__int64 a1, struct CRemoteApplicationWindow **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  struct CRemoteApplicationWindow *v6; // rbx

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         48LL);
  v6 = (struct CRemoteApplicationWindow *)v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v5 = &CRemoteApplicationWindow::`vftable';
    *(_DWORD *)(v5 + 8) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (**(void (__fastcall ***)(struct CRemoteApplicationWindow *))v6)(v6);
    *a2 = v6;
    *((_QWORD *)v6 + 2) = a1;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1801C7904, 1u, -2147024882, 0x32u);
  }
  return v4;
}
