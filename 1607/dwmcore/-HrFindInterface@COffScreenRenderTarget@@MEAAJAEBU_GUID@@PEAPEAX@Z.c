/*
 * XREFs of ?HrFindInterface@COffScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011EDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::HrFindInterface(
        COffScreenRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v4 )
    {
      if ( this )
      {
        v5 = (char *)this + 112;
LABEL_13:
        *a3 = v5;
        return 0LL;
      }
      goto LABEL_12;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4.Data4;
    if ( !v6 )
    {
      if ( this )
      {
        v5 = (char *)this + 152;
        goto LABEL_13;
      }
LABEL_12:
      v5 = 0LL;
      goto LABEL_13;
    }
    return 2147500034LL;
  }
  return result;
}
