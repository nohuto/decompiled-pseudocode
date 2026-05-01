/*
 * XREFs of RmpSystemQueryActivityHostRawCommit @ 0x180037C64
 * Callers:
 *     RmpActivityHostQueryRawTypeSpecificCommit @ 0x18002F4C4 (RmpActivityHostQueryRawTypeSpecificCommit.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemQueryActivityHostRawCommit(__int64 a1, _QWORD *a2, const struct _TlgProvider_t **a3)
{
  int v5; // ecx
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rax
  NTSTATUS InformationJobObject; // [rsp+50h] [rbp-69h] BYREF
  int v13; // [rsp+54h] [rbp-65h] BYREF
  __int64 v14; // [rsp+58h] [rbp-61h] BYREF
  const struct _TlgProvider_t *v15; // [rsp+60h] [rbp-59h] BYREF
  __int64 v16; // [rsp+68h] [rbp-51h] BYREF
  _QWORD JobInformation[6]; // [rsp+70h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-19h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+C0h] [rbp+7h]
  int v20; // [rsp+C8h] [rbp+Fh]
  int v21; // [rsp+CCh] [rbp+13h]
  __int64 *v22; // [rsp+D0h] [rbp+17h]
  int v23; // [rsp+D8h] [rbp+1Fh]
  int v24; // [rsp+DCh] [rbp+23h]
  int *v25; // [rsp+E0h] [rbp+27h]
  int v26; // [rsp+E8h] [rbp+2Fh]
  int v27; // [rsp+ECh] [rbp+33h]

  v14 = 0LL;
  v15 = 0LL;
  v5 = *(_DWORD *)(a1 + 48);
  if ( !v5 )
  {
    LODWORD(v7) = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _DWORD, _QWORD, __int64 *, const struct _TlgProvider_t **))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 72LL) + 48LL))(
                    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
                    a1 + 56,
                    a1 + 520,
                    *(unsigned int *)(a1 + 588),
                    *(_DWORD *)(a1 + 592),
                    *(_QWORD *)(a1 + 24),
                    &v14,
                    &v15);
    if ( (int)v7 < 0 )
      return (unsigned int)v7;
    v10 = v14;
    v7 = v15;
LABEL_11:
    *a2 = v10;
    *a3 = v7;
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  if ( v5 != 1 )
  {
    LODWORD(v7) = -1073741585;
    return (unsigned int)v7;
  }
  InformationJobObject = NtQueryInformationJobObject(
                           *(HANDLE *)(a1 + 736),
                           MaxJobObjectInfoClass|0x10,
                           JobInformation,
                           0x28u,
                           0LL);
  LODWORD(v7) = InformationJobObject;
  if ( InformationJobObject >= 0 )
  {
    v10 = JobInformation[0];
    v7 = (const struct _TlgProvider_t *)JobInformation[2];
    goto LABEL_11;
  }
  if ( (unsigned int)dword_18004C030 > 4
    && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)InformationJobObject, 1uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    p_InformationJobObject = &InformationJobObject;
    v16 = *(_QWORD *)(a1 + 24);
    v22 = &v16;
    v13 = *(_DWORD *)(a1 + 56);
    v25 = &v13;
    v20 = (int)v8;
    v23 = 8;
    v26 = (int)v8;
    TlgWrite(v7, &unk_1800434A1, v8, v9, 5u, &pData);
    LODWORD(v7) = InformationJobObject;
  }
  return (unsigned int)v7;
}
