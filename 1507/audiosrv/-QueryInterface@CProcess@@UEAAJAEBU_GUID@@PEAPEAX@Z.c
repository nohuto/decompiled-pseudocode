/*
 * XREFs of ?QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180011D10
 * Callers:
 *     ?QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180045310 (-QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CProcess@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180045320 (-QueryInterface@CProcess@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::QueryInterface(CProcess *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  char *v7; // rdx

  result = 0LL;
  if ( !a3 )
    return 2147500035LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ce0f8863_40a6_4428_a192_781e5d5780b0.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ce0f8863_40a6_4428_a192_781e5d5780b0.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4;
    if ( v6 )
      return CUnknown::QueryInterface(this, a2, a3);
    v7 = (char *)this + 24;
  }
  else
  {
    v7 = (char *)this + 16;
  }
  if ( !this )
    v7 = 0LL;
  *a3 = v7;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
