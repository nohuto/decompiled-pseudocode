/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0005A90
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00891AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0094FB8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct DMMVIDPNPRESENTPATH *const a4)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdi
  _QWORD *v9; // rax

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
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 26) = *((_DWORD *)a4 + 26);
  *((_WORD *)this + 54) = *((_WORD *)a4 + 54);
  *((_DWORD *)this + 28) = *((_DWORD *)a4 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a4 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a4 + 30);
  *((_DWORD *)this + 31) = *((_DWORD *)a4 + 31);
  *((_QWORD *)this + 16) = *((_QWORD *)a4 + 16);
  *((_QWORD *)this + 17) = *((_QWORD *)a4 + 17);
  *((_DWORD *)this + 36) = *((_DWORD *)a4 + 36);
  *(_OWORD *)((char *)this + 148) = *(_OWORD *)((char *)a4 + 148);
  *((_DWORD *)this + 41) = *((_DWORD *)a4 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a4 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a4 + 43);
  v5 = *((_DWORD *)a4 + 44);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 44) = v5;
  *((_DWORD *)this + 20) = 1;
  *((_DWORD *)this + 46) = 1;
  v6 = DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct _D3DKMDT_GAMMA_RAMP *)((char *)a4 + 184));
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v9[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v9[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    v9[5] = v7;
    *((_DWORD *)this + 16) = v7;
  }
  else
  {
    *((_DWORD *)this + 20) = 2;
  }
  return this;
}
