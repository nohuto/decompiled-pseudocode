/*
 * XREFs of ?HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046BC0 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::HrFindInterface(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  char *v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4;
    if ( v4 )
    {
      return CBitmapRealization::HrFindInterface(this, a2, a3);
    }
    else
    {
      if ( this )
        v5 = (char *)this + 472;
      else
        v5 = 0LL;
      *a3 = v5;
      return 0LL;
    }
  }
  return result;
}
