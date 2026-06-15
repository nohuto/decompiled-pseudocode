/*
 * XREFs of ?QueryInterface@CProcess@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029C30
 * Callers:
 *     ?QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049520 (-QueryInterface@CProcess@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CProcess@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049530 (-QueryInterface@CProcess@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065050 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CProcess::QueryInterface(CProcess *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  char *v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9f4c761a_2104_42ec_983a_1be0e1293393.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9f4c761a_2104_42ec_983a_1be0e1293393.Data4 )
    {
      v4 = (char *)this + 16;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_2ea99478_7574_414c_8ba3_0c615b1716a4.Data4 )
      {
        return (unsigned int)CUnknown::QueryInterface(this, a2, a3);
      }
      v4 = (char *)this + 24;
    }
    if ( !this )
      v4 = 0LL;
    *a3 = v4;
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
