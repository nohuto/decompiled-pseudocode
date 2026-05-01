/*
 * XREFs of RmpEnforcementSettingsUpdateLimit @ 0x180019220
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FB2C (-MemoryLimitNotification@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     PsmRetrieveHostMemoryLimit @ 0x180018AF0 (PsmRetrieveHostMemoryLimit.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 *     RmpCoreApiSetHostLimits @ 0x180046C70 (RmpCoreApiSetHostLimits.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

int __fastcall RmpEnforcementSettingsUpdateLimit(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 v3; // rax
  unsigned __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  void *v11; // [rsp+60h] [rbp-29h]
  int v12; // [rsp+68h] [rbp-21h]
  int v13; // [rsp+6Ch] [rbp-1Dh]
  __int64 *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  __int64 *v16; // [rsp+80h] [rbp-9h]
  __int64 v17; // [rsp+88h] [rbp-1h]
  _QWORD *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  _QWORD *v20; // [rsp+A0h] [rbp+17h]
  __int64 v21; // [rsp+A8h] [rbp+1Fh]
  _QWORD *v22; // [rsp+B0h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+2Fh]
  _QWORD *v24; // [rsp+C0h] [rbp+37h]
  __int64 v25; // [rsp+C8h] [rbp+3Fh]

  v2 = a2 + 2;
  v7 = a2[2];
  v3 = a2[3];
  if ( v3 )
    goto LABEL_4;
  v5 = a2[5];
  if ( !v5 )
  {
    v3 = a2[4];
LABEL_4:
    *v2 = v3;
    goto LABEL_5;
  }
  if ( a2[4] < v5 )
    v5 = a2[4];
  *v2 = v5;
LABEL_5:
  if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 )
  {
    v3 = qword_180071078 & 1;
    if ( v3 == qword_180071078 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v14 = &v9;
      v16 = &v7;
      v15 = 8LL;
      v22 = a2 + 4;
      v17 = 8LL;
      v18 = a2 + 3;
      v19 = 8LL;
      v20 = a2 + 5;
      v21 = 8LL;
      v23 = 8LL;
      v24 = a2 + 2;
      v25 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180062923 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v11 = &unk_18006292E;
      UserData.Reserved = 2;
      v12 = 168;
      v13 = 1;
      LODWORD(v3) = EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
    }
  }
  return v3;
}
