/*
 * XREFs of ?QueryInterface@CBackgroundSessionCallbacks@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A37A0
 * Callers:
 *     ?QueryInterface@CBackgroundSessionCallbacks@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180045300 (-QueryInterface@CBackgroundSessionCallbacks@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066C00 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CBackgroundSessionCallbacks::QueryInterface(
        CBackgroundSessionCallbacks *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  char *v5; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data4;
    if ( v4 )
    {
      return (unsigned int)CUnknown::QueryInterface(this, a2, a3);
    }
    else
    {
      v5 = (char *)this + 16;
      if ( !this )
        v5 = 0LL;
      *a3 = v5;
      (*(void (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
