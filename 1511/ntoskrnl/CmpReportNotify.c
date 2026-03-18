/*
 * XREFs of CmpReportNotify @ 0x1403F4FC4
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x1403F5130 (CmpReportNotifyHelper.c)
 */

__int64 __fastcall CmpReportNotify(__int64 a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // ebp
  unsigned int v8; // edi
  ULONG_PTR v9; // rbx
  __int64 v11; // r14
  __int64 result; // rax
  __int64 v13; // rdx

  v6 = a5;
  v8 = a3;
  v9 = a2;
  if ( a5 != 1 )
  {
LABEL_2:
    v11 = a6;
    result = CmpReportNotifyHelper(a1, v9, v9, v8, a4, v6, a6);
    if ( v9 != CmpMasterHive )
      return CmpReportNotifyHelper(a1, CmpMasterHive, v9, v8, a4, v6, v11);
    return result;
  }
  a5 = -1;
  result = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a2 + 8))(a2, a3, &a5);
  v13 = result;
  if ( result )
  {
    v8 = *(_DWORD *)(result + 16);
    if ( (*(_BYTE *)(result + 2) & 4) == 0
      || ((*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &a5),
          v9 = CmpMasterHive,
          result = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(CmpMasterHive + 8))(CmpMasterHive, v8, &a5),
          (v13 = result) != 0) )
    {
      a1 = *(_QWORD *)(a1 + 72);
      if ( (*(_BYTE *)(v13 + 2) & 2) != 0 )
        v8 = *(_DWORD *)(v13 + 16);
      (*(void (__fastcall **)(ULONG_PTR, int *))(v9 + 16))(v9, &a5);
      goto LABEL_2;
    }
  }
  return result;
}
