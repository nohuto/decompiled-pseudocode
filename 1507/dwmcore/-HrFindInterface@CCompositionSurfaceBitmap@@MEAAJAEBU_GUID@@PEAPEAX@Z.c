/*
 * XREFs of ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800086D0
 * Callers:
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008D00 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::HrFindInterface(
        CCompositionSurfaceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data4;
    if ( !v5 )
      goto LABEL_8;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data4;
      if ( v8 )
      {
        *a3 = 0LL;
        return 2147500033LL;
      }
      if ( this )
      {
        v6 = (char *)this + 56;
        goto LABEL_10;
      }
    }
    else
    {
LABEL_8:
      if ( this )
      {
        v6 = (char *)this + 40;
LABEL_10:
        *a3 = v6;
        return 0LL;
      }
    }
    v6 = 0LL;
    goto LABEL_10;
  }
  return result;
}
