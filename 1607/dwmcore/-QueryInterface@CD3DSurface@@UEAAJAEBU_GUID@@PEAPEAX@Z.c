/*
 * XREFs of ?QueryInterface@CD3DSurface@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180177DE0
 * Callers:
 *     ?QueryInterface@CD3DSurface@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1390 (-QueryInterface@CD3DSurface@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801685A0 (-QueryInterface@CD3DResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CD3DSurface::QueryInterface(CD3DSurface *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD); // rdx
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
