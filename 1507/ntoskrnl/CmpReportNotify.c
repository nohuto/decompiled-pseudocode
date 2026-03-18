/*
 * XREFs of CmpReportNotify @ 0x140429FE8
 * Callers:
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x14042A100 (CmpReportNotifyHelper.c)
 */

__int64 __fastcall CmpReportNotify(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  int v6; // ebp
  unsigned int v8; // edi
  __int64 v9; // rbx
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
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a2 + 8))(a2, a3, &a5);
  v13 = result;
  if ( result )
  {
    v8 = *(_DWORD *)(result + 16);
    if ( (*(_BYTE *)(result + 2) & 4) == 0
      || ((*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &a5),
          v9 = CmpMasterHive,
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(CmpMasterHive + 8))(CmpMasterHive, v8, &a5),
          (v13 = result) != 0) )
    {
      a1 = *(_QWORD *)(a1 + 72);
      if ( (*(_BYTE *)(v13 + 2) & 2) != 0 )
        v8 = *(_DWORD *)(v13 + 16);
      (*(void (__fastcall **)(__int64, int *))(v9 + 16))(v9, &a5);
      goto LABEL_2;
    }
  }
  return result;
}
