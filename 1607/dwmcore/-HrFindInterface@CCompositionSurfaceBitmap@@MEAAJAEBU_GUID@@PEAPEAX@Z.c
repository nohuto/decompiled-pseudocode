/*
 * XREFs of ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180093D10
 * Callers:
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180093780 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
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
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rcx

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data4;
    if ( !v4 )
      goto LABEL_29;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data4;
    if ( !v5 )
      goto LABEL_29;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data4;
      if ( !v7 )
      {
        v8 = *((_QWORD *)this + 65);
        if ( v8 && *(_DWORD *)(v8 + 104) > 1u )
        {
          *a3 = (char *)this + 112;
          return 0LL;
        }
        result = 2147500034LL;
LABEL_26:
        *a3 = 0LL;
        return result;
      }
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data4;
      if ( v9 )
      {
        result = 2147500033LL;
        goto LABEL_26;
      }
      if ( this )
      {
        v10 = (char *)this + 136;
LABEL_24:
        *a3 = v10;
        return 0LL;
      }
    }
    else
    {
LABEL_29:
      if ( this )
      {
        v10 = (char *)this + 120;
        goto LABEL_24;
      }
    }
    v10 = 0LL;
    goto LABEL_24;
  }
  return result;
}
