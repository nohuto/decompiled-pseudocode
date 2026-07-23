/*
 * XREFs of CmpReportNotify @ 0x1404F7C30
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x1404F7D50 (CmpReportNotifyHelper.c)
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
