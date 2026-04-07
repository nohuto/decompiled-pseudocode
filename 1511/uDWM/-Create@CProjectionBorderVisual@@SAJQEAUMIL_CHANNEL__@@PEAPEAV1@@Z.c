/*
 * XREFs of ?Create@CProjectionBorderVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18007B9BC
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CVisual@@IEAA@XZ @ 0x180022088 (--0CVisual@@IEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::Create(struct MIL_CHANNEL__ *const a1, struct CProjectionBorderVisual **a2)
{
  unsigned int v4; // ebx
  CVisual *v5; // rax
  struct CProjectionBorderVisual *v6; // rdi
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
                    280LL);
  v6 = v5;
  if ( v5 )
  {
    CVisual::CVisual(v5);
    *(_QWORD *)v6 = &CProjectionBorderVisual::`vftable';
    *((_QWORD *)v6 + 33) = 0LL;
    *((_QWORD *)v6 + 34) = 0LL;
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
  v7 = (*(__int64 (__fastcall **)(struct CProjectionBorderVisual *, struct MIL_CHANNEL__ *const))(*(_QWORD *)v6 + 8LL))(
         v6,
         a1);
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
