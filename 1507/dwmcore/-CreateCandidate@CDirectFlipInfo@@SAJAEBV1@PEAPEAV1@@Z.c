/*
 * XREFs of ?CreateCandidate@CDirectFlipInfo@@SAJAEBV1@PEAPEAV1@@Z @ 0x18000F8C8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x18000662C (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::CreateCandidate(const struct CDirectFlipInfo *a1, struct CDirectFlipInfo **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int v5; // eax
  unsigned int v6; // esi
  CDirectFlipInfo *v7; // rax
  CDirectFlipInfo *v8; // rbx
  CDirectFlipInfo *v10; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a1 + 2);
  v11 = 0LL;
  v5 = (**v3)(v3, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x11u);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 288LL))(v11) )
  {
    v7 = (CDirectFlipInfo *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              136LL);
    v8 = v7;
    if ( v7 )
    {
      CDirectFlipInfo::CDirectFlipInfo(v7, (struct COverlayContext **)a1);
      *((_QWORD *)v8 + 15) = 0LL;
      *((_DWORD *)v8 + 32) = 0;
      *(_QWORD *)v8 = &COutOfFrameDirectFlipInfo::`vftable';
      *((_BYTE *)v8 + 132) = 0;
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
LABEL_6:
      *((_DWORD *)v8 + 14) = 2;
      *a2 = v8;
      goto LABEL_7;
    }
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Cu);
  }
  else
  {
    v10 = (CDirectFlipInfo *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               120LL);
    if ( v10 )
      v8 = CDirectFlipInfo::CDirectFlipInfo(v10, (struct COverlayContext **)a1);
    else
      v8 = 0LL;
    if ( v8 )
      goto LABEL_6;
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x23u);
  }
LABEL_7:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v6;
}
