/*
 * XREFs of ?QueryInterface@CBackgroundSessionCallbacks@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A0A80
 * Callers:
 *     ?QueryInterface@CBackgroundSessionCallbacks@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049510 (-QueryInterface@CBackgroundSessionCallbacks@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065050 (-QueryInterface@CUnknown@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CBackgroundSessionCallbacks::QueryInterface(
        CBackgroundSessionCallbacks *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
  char *v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_c26fe81d_0fd3_45f2_8f0f_ba660f256851.Data4 )
    {
      v4 = (char *)this + 16;
      if ( !this )
        v4 = 0LL;
      *a3 = v4;
      (*(void (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)this + 8LL))(this);
    }
    else
    {
      return (unsigned int)CUnknown::QueryInterface(this, a2, a3);
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
