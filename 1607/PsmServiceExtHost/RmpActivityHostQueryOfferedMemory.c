/*
 * XREFs of RmpActivityHostQueryOfferedMemory @ 0x18002F36C
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000D650 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemory(__int64 a1, __int64 *a2)
{
  __int64 (__fastcall *v4)(struct _RM_ACTIVITY_HOST *, void *, __int64, _QWORD *); // r9
  int v5; // edx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // edx
  const GUID *v8; // r8
  const GUID *v9; // r9
  char v10; // al
  char v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  __int64 v15; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v17; // [rsp+70h] [rbp+7h]
  int v18; // [rsp+78h] [rbp+Fh]
  int v19; // [rsp+7Ch] [rbp+13h]
  __int64 *v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  __int64 *v23; // [rsp+90h] [rbp+27h]
  int v24; // [rsp+98h] [rbp+2Fh]
  int v25; // [rsp+9Ch] [rbp+33h]
  char *v26; // [rsp+A0h] [rbp+37h]
  int v27; // [rsp+A8h] [rbp+3Fh]
  int v28; // [rsp+ACh] [rbp+43h]

  if ( (*(_BYTE *)(a1 + 820) & 0x10) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 816) & 0x40) != 0 )
    {
      v14 = 0LL;
      *a2 = 0LL;
LABEL_9:
      v6 = 0LL;
      v13 = 0;
      goto LABEL_10;
    }
    v4 = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
    v5 = 4096;
  }
  else
  {
    v4 = RmpActivityHostQueryOfferedMemoryDxgCallback;
    v5 = 1536;
  }
  v14 = 0LL;
  v13 = RmpActivityHostActOnProcesses(
          (struct _RM_ACTIVITY_HOST *)a1,
          v5,
          1,
          (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v4,
          &v14);
  v6 = (const struct _TlgProvider_t *)(unsigned int)v13;
  if ( v13 >= 0 )
  {
    *a2 = v14;
    goto LABEL_9;
  }
  v14 = -1LL;
LABEL_10:
  if ( (unsigned int)dword_18004C030 > 5 && TlgKeywordOn(v6, 1uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v17 = &v13;
    v15 = *(_QWORD *)(a1 + 24);
    v20 = &v15;
    v23 = &v14;
    v10 = v7 & (*(_BYTE *)(a1 + 820) >> 4);
    v18 = 4;
    v28 = 0;
    v12 = v10;
    v26 = &v12;
    v21 = v7 + 7;
    v24 = v7 + 7;
    v27 = v7;
    TlgWrite((TraceLoggingHProvider)(unsigned int)(v7 + 7), &unk_180040A04, v8, v9, 6u, &pData);
    LODWORD(v6) = v13;
  }
  return (unsigned int)v6;
}
