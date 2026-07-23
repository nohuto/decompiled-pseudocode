/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x140461CC0
 * Callers:
 *     NtUpdateWnfStateData @ 0x140460B94 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140460F60 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1404C015C (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14057CF64 (NtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x140076640 (MmGetSessionById.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, unsigned int *a2, __int64 a3, _QWORD *a4, PVOID *Object)
{
  __int64 v6; // r10
  int v8; // ecx
  int v9; // ecx
  NTSTATUS v10; // ecx
  unsigned int *v11; // rdi
  unsigned int v12; // eax
  __int64 SessionById; // rax
  ULONG Tag; // [rsp+20h] [rbp-28h]

  v6 = (__int64)a2;
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
  v11 = (unsigned int *)(Object + 1);
  if ( (_BYTE)a3 )
  {
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    v12 = *(_DWORD *)v6;
  }
  else
  {
    v12 = *a2;
  }
  *v11 = v12;
  SessionById = MmGetSessionById(v12, (__int64)a2, a3);
  *Object = (PVOID)SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *a4 = v11;
  return 0;
}
