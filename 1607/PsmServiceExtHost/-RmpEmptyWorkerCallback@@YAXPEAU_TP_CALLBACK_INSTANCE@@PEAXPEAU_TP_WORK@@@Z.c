/*
 * XREFs of ?RmpEmptyWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002A430
 * Callers:
 *     <none>
 * Callees:
 *     RmpObjectRelease @ 0x180002ED0 (RmpObjectRelease.c)
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

void __fastcall RmpEmptyWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, unsigned __int8 *a2, struct _TP_WORK *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  __int64 v12; // rax
  __int64 v13; // [rsp+30h] [rbp-9h] BYREF
  __int64 v14; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v16; // [rsp+60h] [rbp+27h]
  int v17; // [rsp+68h] [rbp+2Fh]
  int v18; // [rsp+6Ch] [rbp+33h]
  __int64 *v19; // [rsp+70h] [rbp+37h]
  int v20; // [rsp+78h] [rbp+3Fh]
  int v21; // [rsp+7Ch] [rbp+43h]

  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(a1, 0x11uLL) )
  {
    v7 = *((_QWORD *)a2 + 3);
    v18 = 0;
    v21 = 0;
    v14 = v7;
    v16 = &v14;
    v13 = a2[904];
    v19 = &v13;
    v17 = 8;
    v20 = 8;
    TlgWrite(v4, &unk_18003F61E, v5, v6, 4u, &pData);
  }
  RmpActivityHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)a2,
    12296,
    1,
    (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RmpEnforcementEmptyProcess,
    (_QWORD *)a2[904]);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v8, 0x11uLL) )
  {
    v12 = *((_QWORD *)a2 + 3);
    v18 = 0;
    v13 = v12;
    v16 = &v13;
    v17 = 8;
    TlgWrite(v9, &unk_18003F490, v10, v11, 3u, &pData);
  }
  NtSetEvent(*((HANDLE *)a2 + 112), 0LL);
  RmpObjectRelease((volatile signed __int32 *)a2);
}
