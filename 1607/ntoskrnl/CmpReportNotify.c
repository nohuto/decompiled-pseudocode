/*
 * XREFs of CmpReportNotify @ 0x140514840
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     CmpProcessLightWeightUOW @ 0x14053AD0C (CmpProcessLightWeightUOW.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x140514960 (CmpReportNotifyHelper.c)
 */

__int64 __fastcall CmpReportNotify(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  _DWORD v12[4]; // [rsp+40h] [rbp-28h] BYREF

  v7 = a3;
  v8 = a2;
  if ( a5 != 1 )
  {
LABEL_2:
    result = CmpReportNotifyHelper(a1, v8, v8, v7, a4, a5, a6);
    if ( v8 != CmpMasterHive )
      return CmpReportNotifyHelper(a1, CmpMasterHive, v8, v7, a4, a5, a6);
    return result;
  }
  v12[0] = -1;
  v12[1] = 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a2 + 8))(a2, a3, v12);
  v11 = result;
  if ( result )
  {
    v7 = *(_DWORD *)(result + 16);
    if ( (*(_BYTE *)(result + 2) & 4) == 0
      || ((*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v12),
          a1 = *(_QWORD *)(a1 + 64),
          v8 = *(_QWORD *)(a1 + 24),
          v7 = *(_DWORD *)(a1 + 32),
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v8 + 8))(v8, v7, v12),
          (v11 = result) != 0) )
    {
      a1 = *(_QWORD *)(a1 + 64);
      if ( (*(_BYTE *)(v11 + 2) & 2) != 0 )
        v7 = *(_DWORD *)(v11 + 16);
      (*(void (__fastcall **)(__int64, _DWORD *))(v8 + 16))(v8, v12);
      goto LABEL_2;
    }
  }
  return result;
}
