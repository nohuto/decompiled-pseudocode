/*
 * XREFs of ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C
 * Callers:
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001ADC (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001BE0 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?UnmapDwmVirtualAccount@@YAJXZ @ 0x180001F00 (-UnmapDwmVirtualAccount@@YAJXZ.c)
 *     DwmpTerminateSessionProcess @ 0x180003460 (DwmpTerminateSessionProcess.c)
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004CB8 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x180004E1C (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x1800056E0 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1800057C0 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x180005970 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180005C00 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x180003D78 (-DoStackCapture@@YAXIJI@Z.c)
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x180003E54 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 *     ?IsHRInList@@YA_NJQEBJI@Z @ 0x180003F48 (-IsHRInList@@YA_NJQEBJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180004008 (-IsOOM@@YA_NJ@Z.c)
 */

void __fastcall MilInstrumentationCheckHR(unsigned int a1, const int *const a2, __int64 a3, DWORD a4, unsigned int a5)
{
  bool v7; // al
  __int64 v8; // rcx
  const int *v9; // r10
  unsigned int v10; // r11d
  char v11; // r9

  v7 = IsOOM(a4);
  if ( (a1 & 0x10) != 0 && v7 )
  {
    if ( !v9 || !v10 )
      goto LABEL_10;
  }
  else if ( !v9 || !v10 )
  {
    v9 = (const int *)&unk_18000A1C0;
    v10 = 10;
  }
  if ( !IsHRInList(v8, v9, v10) )
  {
LABEL_10:
    MilInstrumentationHandleFailure(v8, a4, a1, a5);
    return;
  }
  if ( (a1 & 4) != 0 )
  {
    if ( v11 )
      DoStackCapture(1, a4, a5);
  }
}
