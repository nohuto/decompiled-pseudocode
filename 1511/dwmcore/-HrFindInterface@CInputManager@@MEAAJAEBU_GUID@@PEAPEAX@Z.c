/*
 * XREFs of ?HrFindInterface@CInputManager@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180130400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputManager::HrFindInterface(CInputManager *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( result )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
      *a3 = this;
    }
  }
  return result;
}
