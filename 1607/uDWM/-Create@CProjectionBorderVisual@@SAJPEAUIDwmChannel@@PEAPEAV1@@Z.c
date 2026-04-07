/*
 * XREFs of ?Create@CProjectionBorderVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007C744
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007CAE0 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800822D4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x18001F310 (--0CVisual@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectionBorderVisual::Create(struct IDwmChannel *a1, struct CProjectionBorderVisual **a2)
{
  unsigned int v4; // edi
  CVisual *v5; // rax
  CVisual *v6; // rbx
  int v7; // eax

  if ( !a2 )
  {
    v4 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0xAu);
    return v4;
  }
  v5 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    288LL);
  v6 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x120uLL);
    CVisual::CVisual(v6);
    *(_QWORD *)v6 = &CProjectionBorderVisual::`vftable';
    *((_QWORD *)v6 + 33) = 0LL;
    *((_QWORD *)v6 + 34) = 0LL;
    *((_BYTE *)v6 + 280) = 1;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v4 = -2147024882;
    goto LABEL_3;
  }
  v7 = (*(__int64 (__fastcall **)(CVisual *, struct IDwmChannel *))(*(_QWORD *)v6 + 8LL))(v6, a1);
  v4 = v7;
  if ( v7 >= 0 )
  {
    *a2 = v6;
    v6 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xAu);
  }
  if ( v6 )
    CBaseObject::Release(v6);
  return v4;
}
