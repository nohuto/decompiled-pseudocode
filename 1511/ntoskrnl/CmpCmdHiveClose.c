/*
 * XREFs of CmpCmdHiveClose @ 0x140499208
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140150840 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1401511A0 (ZwSetInformationObject.c)
 */

BOOLEAN __fastcall CmpCmdHiveClose(__int64 a1)
{
  HANDLE *v2; // rbx
  BOOLEAN v3; // r14
  HANDLE v4; // rsi
  __int64 v5; // rdx
  unsigned int i; // edi
  HANDLE v7; // rcx
  _WORD ObjectInformation[2]; // [rsp+30h] [rbp-50h] BYREF
  __int16 v10; // [rsp+34h] [rbp-4Ch] BYREF
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
        ObjectInformation[0] = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, ObjectInformation, 2u);
        ZwClose(*v2);
      }
      else
      {
        CmpTrackHiveClose = 1;
        v10 = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &v10, 2u);
        ZwClose(*v2);
        CmpTrackHiveClose = 0;
      }
      *v2 = 0LL;
    }
    ++v2;
  }
  return IoSetThreadHardErrorMode(v3);
}
