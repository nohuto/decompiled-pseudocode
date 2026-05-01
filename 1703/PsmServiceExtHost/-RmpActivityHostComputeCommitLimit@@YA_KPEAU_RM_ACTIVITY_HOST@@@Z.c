/*
 * XREFs of ?RmpActivityHostComputeCommitLimit@@YA_KPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006120
 * Callers:
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180002374 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180010B7C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 *     RmpHandlePsmRetrieveHostMemoryLimit @ 0x180015204 (RmpHandlePsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall RmpActivityHostComputeCommitLimit(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v6; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-71h] BYREF
  __int64 v8; // [rsp+40h] [rbp-69h] BYREF
  __int64 v9; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  void *v12; // [rsp+70h] [rbp-39h]
  int v13; // [rsp+78h] [rbp-31h]
  int v14; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v15; // [rsp+80h] [rbp-29h]
  __int64 v16; // [rsp+88h] [rbp-21h]
  unsigned __int64 *v17; // [rsp+90h] [rbp-19h]
  __int64 v18; // [rsp+98h] [rbp-11h]
  __int64 *v19; // [rsp+A0h] [rbp-9h]
  __int64 v20; // [rsp+A8h] [rbp-1h]
  char *v21; // [rsp+B0h] [rbp+7h]
  __int64 v22; // [rsp+B8h] [rbp+Fh]
  char *v23; // [rsp+C0h] [rbp+17h]
  __int64 v24; // [rsp+C8h] [rbp+1Fh]
  unsigned __int64 *v25; // [rsp+D0h] [rbp+27h]
  __int64 v26; // [rsp+D8h] [rbp+2Fh]

  v1 = *((_QWORD *)a1 + 122);
  v2 = *((_QWORD *)a1 + 118);
  if ( v1 == -1LL || v2 == -1 || (v3 = v1 + v2, v3 < v1) )
    v3 = -1LL;
  v7 = v3;
  v4 = *((_QWORD *)a1 + 114);
  v9 = *((_QWORD *)a1 + 86);
  if ( v4 )
  {
    v6 = v4;
  }
  else
  {
    v4 = *((_QWORD *)a1 + 115);
    if ( v4 )
    {
      if ( v3 < v4 )
        v4 = v3;
      v6 = v4;
    }
    else
    {
      v4 = v3;
      v6 = v3;
    }
  }
  if ( (unsigned int)dword_18004D030 <= 4 || (qword_18004D040 & 1) == 0 || (qword_18004D048 & 1) != qword_18004D048 )
    return v4;
  v8 = *((_QWORD *)a1 + 3);
  v15 = &v8;
  v17 = &v6;
  v19 = &v9;
  v25 = &v7;
  v16 = 8LL;
  v18 = 8LL;
  v20 = 8LL;
  v21 = (char *)a1 + 912;
  v22 = 8LL;
  v23 = (char *)a1 + 920;
  v24 = 8LL;
  v26 = 8LL;
  *(_DWORD *)&EventDescriptor.Level = 4;
  UserData.Ptr = (ULONGLONG)off_18004D038;
  *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180041447 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  EventDescriptor.Keyword = 1LL;
  UserData.Size = *(unsigned __int16 *)off_18004D038;
  v12 = &unk_180041452;
  UserData.Reserved = 2;
  v13 = 167;
  v14 = 1;
  EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  return v6;
}
