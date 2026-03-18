/*
 * XREFs of CmpRmUnDoPhase @ 0x1405E6328
 * Callers:
 *     CmpStartRMLog @ 0x140542840 (CmpStartRMLog.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1401529E0 (ZwOpenTransaction.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpTransMgrCommit @ 0x1403D6AEC (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1403D6C54 (CmpTransMgrPrepare.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrRollback @ 0x1404BA9E8 (CmpTransMgrRollback.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  char **v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+20h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+90h] [rbp+28h] BYREF
  int v14; // [rsp+98h] [rbp+30h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+38h] BYREF
  HANDLE TransactionHandle; // [rsp+A8h] [rbp+40h] BYREF

LABEL_1:
  v15 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD *)(a1 + 16), &v15, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 26) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v14);
      CmpTransMgrFreeVolatileData((__int64)v4, 8LL, v9, v10);
      v7 = *(_QWORD *)v4;
      v8 = (char **)*((_QWORD *)v4 + 1);
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v8 != v4 )
        __fastfail(3u);
LABEL_14:
      *v8 = (char *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_1;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)result + 5, (HANDLE)(v3 & v11)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v14, &v13) < 0 || (int)CmpTransMgrCommit(a1, (__int64)v4, &v14) < 0 )
      {
        *((_DWORD *)v4 + 26) |= 2u;
        goto LABEL_1;
      }
      CmpTransMgrFreeVolatileData((__int64)v4, 4LL, v5, v6);
      v7 = *(_QWORD *)v4;
      v8 = (char **)*((_QWORD *)v4 + 1);
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v8 != v4 )
        __fastfail(3u);
      goto LABEL_14;
    }
    ZwClose(TransactionHandle);
  }
}
