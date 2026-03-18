/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x140502CE8
 * Callers:
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x1400FD644 (MmGetSessionById.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, unsigned __int8 *a2, __int64 a3, _QWORD *a4, PVOID *Object)
{
  int *v6; // r10
  int v8; // ecx
  int *v9; // rdi
  int v10; // eax
  __int64 SessionById; // rax
  int v12; // ecx
  ULONG Tag; // [rsp+20h] [rbp-28h]

  v6 = (int *)a2;
  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v8 = a1 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v12 = SeCaptureSid(a2, a3, a3, (__int64)a4, Tag, 0, Object);
      if ( v12 >= 0 )
        *a4 = *Object;
    }
    else
    {
      v12 = ObReferenceObjectByHandleWithTag(a2, 0, (POBJECT_TYPE)PsProcessType, a3, 0x20666E57u, Object, 0LL);
      if ( v12 >= 0 )
        *a4 = Object;
    }
    return (unsigned int)v12;
  }
  v9 = (int *)(Object + 1);
  if ( (_BYTE)a3 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (int *)MmUserProbeAddress;
    v10 = *v6;
  }
  else
  {
    v10 = *(_DWORD *)a2;
  }
  *v9 = v10;
  SessionById = MmGetSessionById(v10);
  *Object = (PVOID)SessionById;
  if ( SessionById )
  {
    *a4 = v9;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
