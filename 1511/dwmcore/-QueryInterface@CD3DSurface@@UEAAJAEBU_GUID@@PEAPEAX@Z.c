/*
 * XREFs of ?QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014BB30
 * Callers:
 *     ?QueryInterface@CD3DSurface@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE120 (-QueryInterface@CD3DSurface@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18013E930 (-QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CD3DSurface::QueryInterface(CD3DSurface *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD); // rdi
  char *v6; // rcx

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v4 )
    {
      return CD3DResource::QueryInterface(this, a2, a3);
    }
    else
    {
      v5 = (void (__fastcall ***)(_QWORD))((char *)this - 24);
      if ( this == (CD3DSurface *)24 )
        v6 = 0LL;
      else
        v6 = (char *)this + 104;
      *a3 = v6;
      (**v5)(v5);
      return 0LL;
    }
  }
  return result;
}
