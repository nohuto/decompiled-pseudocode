/*
 * XREFs of ?HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180160190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::HrFindInterface(
        CSecondarySysmemBitmap *this,
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
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data4;
    if ( !v5 )
    {
LABEL_8:
      if ( this )
      {
        v6 = (char *)this + 16;
LABEL_21:
        *a3 = v6;
        return 0LL;
      }
      goto LABEL_20;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( !v7 )
    {
      if ( this )
      {
        v6 = (char *)this + 96;
        goto LABEL_21;
      }
LABEL_20:
      v6 = 0LL;
      goto LABEL_21;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data4;
    if ( !v8 )
    {
      if ( this )
      {
        v6 = (char *)this + 104;
        goto LABEL_21;
      }
      goto LABEL_20;
    }
    *a3 = 0LL;
    return 2147500033LL;
  }
  return result;
}
