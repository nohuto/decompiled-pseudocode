/*
 * XREFs of ?Create@CMonitorTreeAssociation@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B2798
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x18009DBC4 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::Create(struct CComposition *a1, struct CMonitorTreeAssociation **a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  struct CMonitorTreeAssociation *v6; // rdi

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         56LL);
  v6 = (struct CMonitorTreeAssociation *)v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v5 = &CMonitorTreeAssociation::`vftable';
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_DWORD *)(v5 + 40) = 0;
    *(_QWORD *)(v5 + 48) = a1;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (**(void (__fastcall ***)(struct CMonitorTreeAssociation *))v6)(v6);
    *a2 = v6;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12u);
  }
  return v4;
}
