/*
 * XREFs of CmpCmdHiveClose @ 0x1404EE6E8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017F210 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14017FB70 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  HANDLE *v2; // rbx
  BOOLEAN v3; // r14
  HANDLE v4; // rsi
  __int64 v5; // rdx
  unsigned int i; // edi
  HANDLE v7; // rcx
  _WORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  __int16 ObjectInformation; // [rsp+34h] [rbp-4Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  _BYTE FileInformation[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]

  v2 = (HANDLE *)(a1 + 2664);
  v3 = IoSetThreadHardErrorMode(0);
  v4 = *v2;
  if ( *v2 && ZwQueryInformationFile(v4, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
  {
    if ( *(_BYTE *)(a1 + 125) )
    {
      v14 = MEMORY[0xFFFFF78000000014];
    }
    else
    {
      v5 = v14;
      if ( *(_QWORD *)(a1 + 5432) )
        v5 = *(_QWORD *)(a1 + 5432);
      v14 = v5;
    }
    v13 = MEMORY[0xFFFFF78000000014];
    ZwSetInformationFile(v4, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  }
  for ( i = 0; i < 6; ++i )
  {
    v7 = *v2;
    if ( *v2 )
    {
      if ( i )
      {
        v9[0] = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, v9, 2u);
        ZwClose(*v2);
      }
      else
      {
        CmpTrackHiveClose = 1;
        ObjectInformation = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &ObjectInformation, 2u);
        ZwClose(*v2);
        CmpTrackHiveClose = 0;
      }
      *v2 = 0LL;
    }
    ++v2;
  }
  return IoSetThreadHardErrorMode(v3);
}
