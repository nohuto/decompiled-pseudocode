/*
 * XREFs of KiIntSteerLogProc @ 0x1401DA604
 * Callers:
 *     KiIntSteerLogStatus @ 0x1401DA6E8 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KiIntSteerEtwEventEnabled @ 0x14012DCE8 (KiIntSteerEtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogProc(char a1)
{
  const EVENT_DESCRIPTOR *v1; // rbx
  int v2; // eax
  int v4; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 *v5[2]; // [rsp+38h] [rbp-48h] BYREF
  __int16 v6; // [rsp+48h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]

  v1 = &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  if ( a1 )
    v1 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  LOBYTE(v2) = KiIntSteerEtwEventEnabled(v1);
  if ( (_BYTE)v2 )
  {
    v5[1] = (unsigned __int16 *)qword_1403AA618[0];
    v5[0] = (unsigned __int16 *)KeActiveProcessors;
    v6 = 0;
    while ( 1 )
    {
      v2 = KeEnumerateNextProcessor(&v4, v5);
      if ( v2 )
        break;
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v4;
      v9 = 4LL;
      v8 = KiProcessorBlock[v4] + 11544;
      EtwWrite(KiIntSteerEtwHandle, v1, 0LL, 2u, &UserData);
    }
  }
  return v2;
}
