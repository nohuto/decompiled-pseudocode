/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800092FC
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000CB78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800116D0 (-Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180011930 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct MIL_CHANNEL__ *const a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        const struct tagRECT *a4,
        struct CTransitionWindowSnapshot **a5)
{
  CTransitionWindowSnapshot *v9; // rax
  volatile signed __int32 *v10; // rbx
  struct tagRECT *v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  if ( (dword_1800BC624 & 1) == 0 )
  {
    dword_1800BC568 = -2147023434;
    dword_1800BC624 |= 1u;
  }
  *a5 = 0LL;
  v9 = (CTransitionWindowSnapshot *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 16LL))(
                                      WPF::g_pProcessHeap,
                                      344LL);
  if ( v9 )
    v10 = (volatile signed __int32 *)CTransitionWindowSnapshot::CTransitionWindowSnapshot(v9);
  else
    v10 = 0LL;
  if ( v10 )
  {
    v11 = (struct tagRECT *)*((_QWORD *)a2 + 93);
    if ( a4 )
    {
      rc = *a4;
      OffsetRect(&rc, v11[3].left, v11[3].top);
    }
    else
    {
      rc = v11[3];
    }
    v12 = CTransitionWindowSnapshot::Initialize((CTransitionWindowSnapshot *)v10, a1, a2, a3, &rc);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800BC568, 1LL, v12, 0x30u);
    }
    else
    {
      *a5 = (struct CTransitionWindowSnapshot *)v10;
      _InterlockedIncrement(v10 + 2);
    }
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800BC568, 1LL, -2147024882, 0x22u);
  }
  return v13;
}
