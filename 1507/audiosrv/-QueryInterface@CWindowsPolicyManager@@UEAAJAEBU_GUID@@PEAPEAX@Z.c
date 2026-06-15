/*
 * XREFs of ?QueryInterface@CWindowsPolicyManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180041640
 * Callers:
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180041FF0 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     ?QueryInterface@CWindowsPolicyManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180045210 (-QueryInterface@CWindowsPolicyManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWindowsPolicyManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180045220 (-QueryInterface@CWindowsPolicyManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066C00 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::QueryInterface(
        CWindowsPolicyManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rax

  v3 = 0;
  if ( !a3 )
    return (unsigned int)-2147467261;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a0e47bc0_7ea6_46f0_8a4c_1e853f4aed66.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a0e47bc0_7ea6_46f0_8a4c_1e853f4aed66.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a0e47bc0_7ea6_46f0_8a4c_1e853f4aed66.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4;
    if ( v5 )
      return (unsigned int)CUnknown::QueryInterface((CWindowsPolicyManager *)((char *)this + 16), a2, a3);
    v6 = (char *)this + 8;
    if ( !this )
      v6 = 0LL;
    *a3 = v6;
  }
  else
  {
    *a3 = this;
  }
  (*(void (__fastcall **)(CWindowsPolicyManager *))(*(_QWORD *)this + 8LL))(this);
  return v3;
}
