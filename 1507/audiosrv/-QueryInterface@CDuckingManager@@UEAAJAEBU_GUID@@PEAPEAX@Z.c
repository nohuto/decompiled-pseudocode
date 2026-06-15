/*
 * XREFs of ?QueryInterface@CDuckingManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6150
 * Callers:
 *     ?QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800453D0 (-QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDuckingManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800453E0 (-QueryInterface@CDuckingManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDuckingManager::QueryInterface(CDuckingManager *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  char *v6; // rdx
  __int64 v7; // rdx

  result = 0LL;
  if ( !a3 )
    return 2147500035LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4;
  if ( v5 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fdcb4b3f_f35a_41cf_879b_c514c20a542c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fdcb4b3f_f35a_41cf_879b_c514c20a542c.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fdcb4b3f_f35a_41cf_879b_c514c20a542c.Data4;
    if ( v7 )
      return CUnknown::QueryInterface(this, a2, a3);
    v6 = (char *)this + 24;
  }
  else
  {
    v6 = (char *)this + 16;
  }
  if ( !this )
    v6 = 0LL;
  *a3 = v6;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return result;
}
