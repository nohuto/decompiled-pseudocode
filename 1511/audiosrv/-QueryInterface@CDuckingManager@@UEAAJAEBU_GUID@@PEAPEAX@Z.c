/*
 * XREFs of ?QueryInterface@CDuckingManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A3480
 * Callers:
 *     ?QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800495E0 (-QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDuckingManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800495F0 (-QueryInterface@CDuckingManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065050 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDuckingManager::QueryInterface(CDuckingManager *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // r9d
  char *v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
    {
      v4 = (char *)this + 16;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_fdcb4b3f_f35a_41cf_879b_c514c20a542c.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_fdcb4b3f_f35a_41cf_879b_c514c20a542c.Data4 )
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
