/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18002E510
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryCommitSaveCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _BYTE *a4)
{
  int v8; // eax
  NTSTATUS v9; // eax
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  int v14; // [rsp+30h] [rbp-59h] BYREF
  int v15; // [rsp+34h] [rbp-55h] BYREF
  __int64 v16; // [rsp+38h] [rbp-51h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-49h] BYREF
  int v18; // [rsp+44h] [rbp-45h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  int *v20; // [rsp+80h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  __int64 *v22; // [rsp+90h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+Fh]
  int *v24; // [rsp+A0h] [rbp+17h]
  __int64 v25; // [rsp+A8h] [rbp+1Fh]

  memset_0(&ProcessInformation, 0, 0x20uLL);
  ProcessInformation = 3;
  if ( (a4[16] & 2) != 0 )
    v8 = v18 | 3;
  else
    v8 = v18 | 5;
  v18 = v8;
  v9 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u);
  v10 = (const struct _TlgProvider_t *)(unsigned int)v9;
  if ( v9 >= 0 )
    v10 = 0LL;
  v14 = (int)v10;
  if ( (unsigned int)dword_18004D030 > 5 && TlgKeywordOn(v10, 0x11uLL) )
  {
    v21 = 4LL;
    v20 = &v14;
    v16 = *((_QWORD *)a1 + 3);
    v22 = &v16;
    v24 = &v15;
    v23 = 8LL;
    v15 = a3;
    v25 = 4LL;
    TlgWrite(v10, &unk_1800417C2, v11, v12, 5u, &pData);
    LODWORD(v10) = v14;
  }
  return (unsigned int)v10;
}
