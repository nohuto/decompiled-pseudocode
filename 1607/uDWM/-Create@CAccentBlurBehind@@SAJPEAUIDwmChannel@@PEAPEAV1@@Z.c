/*
 * XREFs of ?Create@CAccentBlurBehind@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039FF0
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentBlurBehind::Create(struct IDwmChannel *a1, struct CAccentBlurBehind **a2)
{
  CVisual *v4; // rax
  CVisual *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  if ( !a2 )
  {
    v7 = -2147024809;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3Eu);
    return v7;
  }
  v4 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    368LL);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x170uLL);
    CVisual::CVisual(v5);
    *(_QWORD *)v5 = &CAccentBlurBehind::`vftable';
    *((_QWORD *)v5 + 34) = 0LL;
    *((_QWORD *)v5 + 35) = 0LL;
    *((_DWORD *)v5 + 72) = 0;
    *((_DWORD *)v5 + 73) = 0;
    *((_DWORD *)v5 + 74) = 0;
    *((_DWORD *)v5 + 76) = 1056964608;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v7 = -2147024882;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(CVisual *, struct IDwmChannel *))(*(_QWORD *)v5 + 8LL))(v5, a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x3Eu);
  }
  else
  {
    *a2 = v5;
    v5 = 0LL;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v7;
}
