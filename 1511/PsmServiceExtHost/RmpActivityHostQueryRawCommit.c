/*
 * XREFs of RmpActivityHostQueryRawCommit @ 0x180047154
 * Callers:
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18000DD38 (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostQueryRawCommit(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  int v4; // ecx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp-89h] BYREF
  NTSTATUS InformationJobObject; // [rsp+48h] [rbp-81h] BYREF
  __int64 v13; // [rsp+50h] [rbp-79h] BYREF
  int v14; // [rsp+58h] [rbp-71h] BYREF
  __int64 v15; // [rsp+60h] [rbp-69h] BYREF
  _QWORD JobInformation[5]; // [rsp+68h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+B0h] [rbp-19h]
  const struct _TlgProvider_t *v19; // [rsp+B8h] [rbp-11h]
  __int64 *v20; // [rsp+C0h] [rbp-9h]
  __int64 v21; // [rsp+C8h] [rbp-1h]
  int *v22; // [rsp+D0h] [rbp+7h]
  const struct _TlgProvider_t *v23; // [rsp+D8h] [rbp+Fh]

  v4 = *(_DWORD *)(a1 + 40);
  v13 = 0LL;
  v11 = 0LL;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      InformationJobObject = NtQueryInformationJobObject(
                               *(HANDLE *)(a1 + 712),
                               MaxJobObjectInfoClass|0x10,
                               JobInformation,
                               0x28u,
                               0LL);
      if ( InformationJobObject >= 0 )
      {
        v13 = JobInformation[0];
        v11 = JobInformation[2];
      }
      else if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
      {
        v19 = v7;
        p_InformationJobObject = &InformationJobObject;
        v15 = *(_QWORD *)(a1 + 24);
        v20 = &v15;
        v14 = *(_DWORD *)(a1 + 48);
        v22 = &v14;
        v21 = 8LL;
        v23 = v7;
        TlgWrite(v7, &unk_180064EBE, v8, v9, 5u, &pData);
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, _QWORD, __int64 *, __int64 *))(**((_QWORD **)RmSvcGlobals + 10) + 48LL))(
      *((_QWORD *)RmSvcGlobals + 10),
      a1 + 48,
      a1 + 512,
      *(unsigned int *)(a1 + 580),
      *(_DWORD *)(a1 + 584),
      *(_QWORD *)(a1 + 24),
      &v13,
      &v11);
  }
  *a2 = v13;
  result = v11;
  *a3 = v11;
  return result;
}
