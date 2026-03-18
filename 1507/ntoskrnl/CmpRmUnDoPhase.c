/*
 * XREFs of CmpRmUnDoPhase @ 0x14065D500
 * Callers:
 *     CmpStartRMLog @ 0x1405B8B98 (CmpStartRMLog.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenTransaction @ 0x140181350 (ZwOpenTransaction.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 *     CmpTransMgrRollback @ 0x1405640A8 (CmpTransMgrRollback.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  char *v5; // rbx
  __int64 v6; // rcx
  char **v7; // rax
  __int64 v8; // [rsp+20h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  char v10; // [rsp+90h] [rbp+28h] BYREF
  int v11; // [rsp+98h] [rbp+30h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  HANDLE TransactionHandle; // [rsp+A8h] [rbp+40h] BYREF

LABEL_1:
  v12 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD *)(a1 + 16), &v12, 0);
    v5 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 26) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v11, v3, v4);
      CmpTransMgrFreeVolatileData((__int64)v5, 8);
      v6 = *(_QWORD *)v5;
      v7 = (char **)*((_QWORD *)v5 + 1);
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
        __fastfail(3u);
LABEL_14:
      *v7 = (char *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v5, 0x72544D43u);
      goto LABEL_1;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)result + 5, (HANDLE)(v3 & v8)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v5, &v11, &v10) < 0 || (int)CmpTransMgrCommit(a1, (__int64)v5, &v11) < 0 )
      {
        *((_DWORD *)v5 + 26) |= 2u;
        goto LABEL_1;
      }
      CmpTransMgrFreeVolatileData((__int64)v5, 4);
      v6 = *(_QWORD *)v5;
      v7 = (char **)*((_QWORD *)v5 + 1);
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v7 != v5 )
        __fastfail(3u);
      goto LABEL_14;
    }
    ZwClose(TransactionHandle);
  }
}
