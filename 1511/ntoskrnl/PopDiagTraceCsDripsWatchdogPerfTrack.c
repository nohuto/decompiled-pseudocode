/*
 * XREFs of PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1401EF258
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14063CAA4 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDripsWatchdogPerfTrack(
        int a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        unsigned __int8 a7)
{
  _UNKNOWN **v7; // rax
  REGHANDLE v12; // rbx
  __int16 v13; // cx
  _DWORD *v14; // r8
  __int16 v15; // ax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // r10
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rax
  _DWORD v21[4]; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  v7 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    v12 = PopDiagHandle;
    LOBYTE(v7) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK);
    if ( (_BYTE)v7 )
    {
      v21[0] = a1;
      v21[1] = a2;
      v21[2] = a3;
      if ( a6 )
        v13 = (a4 != 0) | 0x200;
      else
        v13 = a4 != 0;
      v14 = v21;
      v15 = v13 & 0xFE01 | (2 * a7);
      v16 = a5;
      v17 = v15 & 0x3FF;
      if ( a5 > 0xFFFF )
        v16 = 0xFFFF;
      v21[3] = (v16 << 16) | v17;
      v18 = 4LL;
      p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
      do
      {
        p_Reserved->Reserved = 0;
        *(_QWORD *)&p_Reserved[-3].Reserved = v14++;
        p_Reserved[-1].Reserved = 4;
        p_Reserved += 4;
        --v18;
      }
      while ( v18 );
      LOBYTE(v7) = EtwWrite(v12, &POP_ETW_EVENT_CS_DRIPS_WATCHDOG_PERFTRACK, 0LL, 4u, &UserData);
    }
  }
  return (char)v7;
}
