/*
 * XREFs of ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030BA0
 * Callers:
 *     ?HrFindInterface@CSecondaryD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015F500 (-HrFindInterface@CSecondaryD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::HrFindInterface(CD2DBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data4;
    if ( v4 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
      if ( v6 )
        return CD2DResource::HrFindInterface(this, a2, a3);
      if ( this )
      {
        v5 = (char *)this + 112;
        goto LABEL_7;
      }
    }
    else if ( this )
    {
      v5 = (char *)this + 104;
LABEL_7:
      *a3 = v5;
      return 0LL;
    }
    v5 = 0LL;
    goto LABEL_7;
  }
  return result;
}
