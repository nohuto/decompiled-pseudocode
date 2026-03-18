/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C000B100
 * Callers:
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C005FA7C (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B6F10 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0174978 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C0177438 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0094FB8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        const struct DMMVIDPNPRESENTPATH *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rdi
  _QWORD *v7; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 11);
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_WORD *)this + 54) = *((_WORD *)a2 + 54);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 31);
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 16);
  *((_QWORD *)this + 17) = *((_QWORD *)a2 + 17);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *(_OWORD *)((char *)this + 148) = *(_OWORD *)((char *)a2 + 148);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  v3 = *((_DWORD *)a2 + 44);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 44) = v3;
  *((_DWORD *)this + 20) = 1;
  *((_DWORD *)this + 46) = 1;
  v4 = DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 184));
  v5 = v4;
  if ( v4 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v7[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v7[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    v7[5] = v5;
    *((_DWORD *)this + 16) = v5;
  }
  else
  {
    *((_DWORD *)this + 20) = 2;
  }
  return this;
}
