/*
 * XREFs of ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C00A10A4
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z @ 0x1C0008ACC (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0008CF0 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z @ 0x1C0009498 (--0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00BE454 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetGammaRamp(DMMVIDPNPRESENTPATH *this, const struct _D3DKMDT_GAMMA_RAMP *a2)
{
  D3DDDI_GAMMARAMP_TYPE Type; // eax
  PVOID v5; // rdi
  void *v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  Type = a2->Type;
  if ( (a2->Type != D3DDDI_GAMMARAMP_RGB256x3x16 || !a2->DataSize || !a2->Data.pRgb256x3x16)
    && (Type != D3DDDI_GAMMARAMP_DXGI_1 || !a2->DataSize || !a2->Data.pRgb256x3x16)
    && (Type != D3DDDI_GAMMARAMP_DEFAULT || a2->DataSize || a2->Data.pRgb256x3x16) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  v5 = 0LL;
  if ( !a2->Data.pRgb256x3x16 || (v5 = operator new[](a2->DataSize, 0x4E506456u, PagedPool)) != 0LL )
  {
    v6 = (void *)*((_QWORD *)this + 25);
    if ( v6 )
    {
      operator delete(v6);
      *((_QWORD *)this + 25) = 0LL;
      *((_QWORD *)this + 24) = 0LL;
    }
    if ( v5 )
    {
      if ( a2->Data.pRgb256x3x16 )
        goto LABEL_18;
    }
    else if ( !a2->Data.pRgb256x3x16 )
    {
LABEL_11:
      *((_QWORD *)this + 25) = v5;
      *((_QWORD *)this + 24) = a2->DataSize;
      *((_DWORD *)this + 46) = a2->Type;
      return 0LL;
    }
    v14 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v14);
LABEL_18:
    if ( v5 )
      memmove(v5, a2->Data.pRgb256x3x16, a2->DataSize);
    goto LABEL_11;
  }
  v13 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
  *(_QWORD *)(v13 + 24) = a2->DataSize;
  WdLogEvent5_WdLowResource(v13);
  return 3221225495LL;
}
