/*
 * XREFs of ?QueryInterface@CWindowsPolicyManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003E290
 * Callers:
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18003E024 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     ?QueryInterface@CWindowsPolicyManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049420 (-QueryInterface@CWindowsPolicyManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWindowsPolicyManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049430 (-QueryInterface@CWindowsPolicyManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065050 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::QueryInterface(
        CWindowsPolicyManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  char *v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_708046c2_41c8_4186_ade1_1eaa025d1838.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_708046c2_41c8_4186_ade1_1eaa025d1838.Data4 )
    {
      *a3 = this;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4 )
      {
        return (unsigned int)CUnknown::QueryInterface((CWindowsPolicyManager *)((char *)this + 16), a2, a3);
      }
      v4 = (char *)this + 8;
      if ( !this )
        v4 = 0LL;
      *a3 = v4;
    }
    (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 8LL))(this);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
