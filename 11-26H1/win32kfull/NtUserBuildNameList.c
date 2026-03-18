/*
 * XREFs of NtUserBuildNameList @ 0x140264610
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     _BuildNameList @ 0x140259840 (_BuildNameList.c)
 *     ??$WriteMember@KUtagNAMELIST@@U1@@?$UserModePointer@UtagNAMELIST@@@@QEAAXPEQtagNAMELIST@@KAEBK@Z @ 0x140288CC0 (--$WriteMember@KUtagNAMELIST@@U1@@-$UserModePointer@UtagNAMELIST@@@@QEAAXPEQtagNAMELIST@@KAEBK@Z.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1403E23B0 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall NtUserBuildNameList(__int64 a1, unsigned int a2, char *a3, char *a4)
{
  SIZE_T v6; // r14
  PVOID v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  char *v13; // [rsp+30h] [rbp-48h]
  unsigned int v14; // [rsp+38h] [rbp-40h]
  char v15; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v16; // [rsp+88h] [rbp+10h] BYREF
  char *v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = a3;
  v6 = a2;
  v16 = 0;
  Object = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  if ( (unsigned int)v6 >= 0xC )
  {
    ProbeForWrite(a4, 4uLL, 1u);
    ProbeForWrite(a3, v6, 4u);
    if ( a1 )
    {
      LOBYTE(v9) = 1;
      LODWORD(a1) = ValidateHwinsta(a1, v9, 1LL, &Object);
    }
    if ( (int)a1 >= 0 )
    {
      LODWORD(a1) = BuildNameList((__int64)Object, (__int64)a3, v6, &v16);
      v13 = a4;
      v15 = 0;
      RtlWriteULongToUser(a4, v16);
      v14 = v16;
      v15 = 1;
      v8 = Object;
      if ( Object )
        ObfDereferenceObject(Object);
    }
    else
    {
      v13 = a3 + 8;
      RtlWriteUShortToUser(a3 + 8, 0LL);
      LODWORD(v11) = 1;
      UserModePointer<tagNAMELIST>::WriteMember<unsigned long,tagNAMELIST,tagNAMELIST>(&v17, 0LL, &v11);
    }
  }
  else
  {
    LODWORD(a1) = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v8);
  return (unsigned int)a1;
}
