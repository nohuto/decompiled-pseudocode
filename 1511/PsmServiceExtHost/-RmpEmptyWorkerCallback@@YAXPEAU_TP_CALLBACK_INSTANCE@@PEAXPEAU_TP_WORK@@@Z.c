/*
 * XREFs of ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003F1F0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x180018750 (RmpActivityHostActOnProcesses.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
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

  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(a1, 1uLL) )
  {
    v6 = *((_QWORD *)a2 + 3);
    v17 = 0;
    v20 = 0;
    v13 = v6;
    v15 = &v13;
    v12 = a2[824];
    v18 = &v12;
    v16 = 8;
    v19 = 8;
    TlgWrite(v4, &unk_180062D21, a3, v5, 4u, &pData);
  }
  RmpActivityHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a2,
    12296,
    (unsigned int)a3,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementEmptyProcess,
    (void *)a2[824]);
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v7, 1uLL) )
  {
    v11 = *((_QWORD *)a2 + 3);
    v17 = 0;
    v12 = v11;
    v15 = &v12;
    v16 = 8;
    TlgWrite(v8, &unk_1800628BF, v9, v10, 3u, &pData);
  }
  NtSetEvent(*((HANDLE *)a2 + 102), 0LL);
  RmpObjectRelease((volatile signed __int32 *)a2);
}
