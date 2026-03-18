/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x1403E5B1C
 * Callers:
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1403E4D70 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1404B550C (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x140548688 (NtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x140091A20 (MmGetSessionById.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, int *a2, KPROCESSOR_MODE a3, _QWORD *a4, PVOID *Object)
{
  int *v6; // r10
  int v8; // ecx
  int v9; // ecx
  NTSTATUS v10; // ecx
  int *v11; // rbx
  int v12; // eax
  __int64 SessionById; // rax
  ULONG Tag; // [rsp+20h] [rbp-28h]

  v6 = a2;
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
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = SeCaptureSid(a2, Tag, 0, (__int64)Object);
      if ( v10 >= 0 )
        *a4 = *Object;
      return (unsigned int)v10;
    }
    if ( v9 == 1 )
    {
      v10 = ObReferenceObjectByHandleWithTag(a2, 0, (POBJECT_TYPE)PsProcessType, a3, 0x20666E57u, Object, 0LL);
      if ( v10 >= 0 )
        *a4 = Object;
      return (unsigned int)v10;
    }
    return (unsigned int)-1073741811;
  }
  v11 = (int *)(Object + 1);
  if ( a3 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (int *)MmUserProbeAddress;
    v12 = *v6;
  }
  else
  {
    v12 = *a2;
  }
  *v11 = v12;
  SessionById = MmGetSessionById(v12);
  *Object = (PVOID)SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *a4 = v11;
  return 0;
}
