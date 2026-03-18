/*
 * XREFs of ?HrFindInterface@CImageSource@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E610
 * Callers:
 *     ?QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002AAD0 (-QueryInterface@CGdiSpriteBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D290 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImageSource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008E6A0 (-QueryInterface@CImageSource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImageSource::HrFindInterface(CImageSource *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rcx

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data4;
      if ( v5 )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data4;
        if ( v6 )
        {
          *a3 = 0LL;
          return 2147500033LL;
        }
      }
      if ( this == (CImageSource *)16 )
        v7 = 0LL;
      else
        v7 = (char *)this - 8;
      *a3 = v7;
    }
    else
    {
      *a3 = (char *)this - 16;
    }
    return 0LL;
  }
  return result;
}
