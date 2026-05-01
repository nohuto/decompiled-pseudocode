/*
 * XREFs of ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180039DE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     RmpActivityHostActOnProcesses @ 0x18000AE60 (RmpActivityHostActOnProcesses.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

void __fastcall RmpEmptyWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, unsigned __int8 *a2, const GUID *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r9
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-9h] BYREF
  __int64 v13; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v15; // [rsp+60h] [rbp+27h]
  int v16; // [rsp+68h] [rbp+2Fh]
  int v17; // [rsp+6Ch] [rbp+33h]
  __int64 *v18; // [rsp+70h] [rbp+37h]
  int v19; // [rsp+78h] [rbp+3Fh]
  int v20; // [rsp+7Ch] [rbp+43h]

  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v6 = *((_QWORD *)a2 + 3);
    v17 = 0;
    v20 = 0;
    v13 = v6;
    v15 = &v13;
    v12 = a2[816];
    v18 = &v12;
    v16 = 8;
    v19 = 8;
    TlgWrite(v4, &unk_18005B40D, a3, v5, 4u, &pData);
  }
  RmpActivityHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a2,
    12296,
    (unsigned int)a3,
    (__int64 (__fastcall *)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementEmptyProcess,
    (_QWORD *)a2[816]);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v7, 1uLL) )
  {
    v11 = *((_QWORD *)a2 + 3);
    v17 = 0;
    v12 = v11;
    v15 = &v12;
    v16 = 8;
    TlgWrite(v8, &unk_18005B018, v9, v10, 3u, &pData);
  }
  NtSetEvent(*((HANDLE *)a2 + 101), 0LL);
  RmpObjectRelease((volatile signed __int32 *)a2);
}
