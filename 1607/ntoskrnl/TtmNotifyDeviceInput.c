/*
 * XREFs of TtmNotifyDeviceInput @ 0x140676EB8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     TtmiAcquireCurrentSession @ 0x140547078 (TtmiAcquireCurrentSession.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpFindDeviceByToken @ 0x1406774F0 (TtmpFindDeviceByToken.c)
 *     TtmiGetTerminalById @ 0x140677AD0 (TtmiGetTerminalById.c)
 *     TtmiResetTerminalTimeouts @ 0x140677BCC (TtmiResetTerminalTimeouts.c)
 *     TtmiLogDeviceInputNotified @ 0x14067AB6C (TtmiLogDeviceInputNotified.c)
 */

__int64 __fastcall TtmNotifyDeviceInput(unsigned int a1, __int64 a2, int a3)
{
  char DeviceByToken; // di
  char v7; // r15
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  int TerminalById; // eax
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  DeviceByToken = 0;
  v7 = 0;
  v8 = TtmiAcquireCurrentSession((__int64)&v21);
  if ( v8 < 0 )
  {
    TtmiLogError("TtmNotifyDeviceInput", 738, v8, -1);
LABEL_3:
    v10 = v21;
    goto LABEL_4;
  }
  v10 = v21;
  if ( (*(_DWORD *)(v21 + 4) & 4) != 0 )
  {
    v15 = 746;
    v16 = -1073740715;
LABEL_9:
    TtmiLogError("TtmNotifyDeviceInput", v15, v16, -1);
    goto LABEL_4;
  }
  DeviceByToken = TtmpFindDeviceByToken(v21, a1, a2, &v19);
  if ( !DeviceByToken )
  {
    v15 = 763;
    v16 = -1073741275;
    goto LABEL_9;
  }
  v17 = v19;
  *(_QWORD *)(v19 + 608) = MEMORY[0xFFFFF78000000008];
  if ( *(_DWORD *)(v17 + 596) == -1 )
    goto LABEL_3;
  v10 = v21;
  TerminalById = TtmiGetTerminalById(v20, v21);
  if ( TerminalById < 0 )
  {
    v16 = TerminalById;
    v15 = 782;
    goto LABEL_9;
  }
  v7 = TtmiResetTerminalTimeouts(v10, v20[0], 4, 1414809921, a3 & 1);
LABEL_4:
  LOBYTE(v9) = DeviceByToken;
  result = TtmiLogDeviceInputNotified(a1, a2, a3, v9, v7);
  if ( v10 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  }
  return result;
}
