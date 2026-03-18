/*
 * XREFs of ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180083AD0
 * Callers:
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070C30 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::HrFindInterface(CSystemMemoryBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  char *v5; // rcx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
  result = 0LL;
  if ( v3 )
    return CBitmap::HrFindInterface(this, a2, a3);
  if ( this )
    v5 = (char *)this + 256;
  else
    v5 = 0LL;
  *a3 = v5;
  return result;
}
