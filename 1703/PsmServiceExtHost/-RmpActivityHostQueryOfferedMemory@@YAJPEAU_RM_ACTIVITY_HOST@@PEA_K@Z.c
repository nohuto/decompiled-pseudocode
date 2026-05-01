/*
 * XREFs of ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180006FF0
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x1800071B0 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemory(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int (*v4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  unsigned int v5; // edx
  bool v6; // zf
  bool v8; // [rsp+30h] [rbp-69h] BYREF
  int v9; // [rsp+34h] [rbp-65h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-61h] BYREF
  __int64 v11; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+78h] [rbp-21h]
  int v16; // [rsp+7Ch] [rbp-1Dh]
  int *v17; // [rsp+80h] [rbp-19h]
  __int64 v18; // [rsp+88h] [rbp-11h]
  __int64 *v19; // [rsp+90h] [rbp-9h]
  __int64 v20; // [rsp+98h] [rbp-1h]
  unsigned __int64 *v21; // [rsp+A0h] [rbp+7h]
  __int64 v22; // [rsp+A8h] [rbp+Fh]
  bool *v23; // [rsp+B0h] [rbp+17h]
  __int64 v24; // [rsp+B8h] [rbp+1Fh]

  if ( (*((_BYTE *)a1 + 820) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)a1 + 816) & 0x40) != 0 )
    {
      v10 = 0LL;
      *a2 = 0LL;
      goto LABEL_5;
    }
    v4 = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
  }
  else
  {
    v4 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostQueryOfferedMemoryDxgCallback;
  }
  v10 = 0LL;
  v9 = RmpActivityHostActOnProcesses(a1, 0x1000u, 1u, v4, &v10);
  v5 = v9;
  if ( v9 < 0 )
  {
    v10 = -1LL;
    goto LABEL_6;
  }
  *a2 = v10;
LABEL_5:
  v9 = 0;
  v5 = 0;
LABEL_6:
  if ( (unsigned int)dword_18004D030 <= 5 || (qword_18004D040 & 1) == 0 || (qword_18004D048 & 1) != qword_18004D048 )
    return v5;
  v6 = (*((_BYTE *)a1 + 820) & 0x10) == 0;
  v17 = &v9;
  v11 = *((_QWORD *)a1 + 3);
  v19 = &v11;
  v21 = &v10;
  v18 = 4LL;
  v8 = !v6;
  v23 = &v8;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 1LL;
  *(_DWORD *)&EventDescriptor.Level = 5;
  UserData.Ptr = (ULONGLONG)off_18004D038;
  *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180041BEF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_18004D038;
  v14 = &unk_180041BFA;
  UserData.Reserved = 2;
  v15 = 83;
  v16 = 1;
  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  return (unsigned int)v9;
}
