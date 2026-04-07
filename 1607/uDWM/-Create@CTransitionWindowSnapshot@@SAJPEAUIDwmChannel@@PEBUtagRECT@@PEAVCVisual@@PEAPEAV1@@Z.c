/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180049D00
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x1800484FC (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 * Callees:
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18000A4E4 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x180049DB0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct IDwmChannel *a1,
        const struct tagRECT *a2,
        struct CVisual *a3,
        struct CTransitionWindowSnapshot **a4)
{
  CTransitionWindowSnapshot *v8; // rax
  volatile signed __int32 *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  *a4 = 0LL;
  v8 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      344LL);
  if ( v8 )
    v9 = (volatile signed __int32 *)CTransitionWindowSnapshot::CTransitionWindowSnapshot(v8);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v10 = CTransitionWindowSnapshot::Initialize((CTransitionWindowSnapshot *)v9, a1, a2, a3);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x43u);
    }
    else
    {
      *a4 = (struct CTransitionWindowSnapshot *)v9;
      _InterlockedIncrement(v9 + 2);
    }
    CBaseObject::Release((CBaseObject *)v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
  }
  return v11;
}
