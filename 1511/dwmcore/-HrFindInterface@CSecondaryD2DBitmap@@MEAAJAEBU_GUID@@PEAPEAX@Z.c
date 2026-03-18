/*
 * XREFs of ?HrFindInterface@CSecondaryD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015F500
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030BA0 (-HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::HrFindInterface(CSecondaryD2DBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

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
    if ( v5 )
    {
      return CD2DBitmap::HrFindInterface(this, a2, a3);
    }
    else
    {
LABEL_8:
      if ( this )
        this = (CSecondaryD2DBitmap *)((char *)this + 264);
      *a3 = this;
      return 0LL;
    }
  }
  return result;
}
