/*
 * XREFs of PiDevCfgRequestDriverConfigurations @ 0x140689244
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140587FA4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSetObjectProperty @ 0x140589E38 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgAppendMultiSz @ 0x140682470 (PiDevCfgAppendMultiSz.c)
 */

__int64 __fastcall PiDevCfgRequestDriverConfigurations(__int64 a1, __int64 a2)
{
  int DriverConfiguration; // eax
  int appended; // ebx
  __int64 *v6; // rsi
  __int64 i; // rdi
  int v9; // [rsp+28h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-28h] BYREF

  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a2);
  appended = DriverConfiguration;
  if ( (int)(DriverConfiguration + 0x80000000) < 0 || DriverConfiguration == -1073741637 )
  {
    appended = PiDevCfgAppendMultiSz(&UnicodeString, (unsigned __int16 *)(a2 + 376), 0LL, 1);
    if ( appended >= 0 )
    {
      v6 = (__int64 *)(a2 + 192);
      for ( i = *v6; (__int64 *)i != v6; i = *(_QWORD *)i )
      {
        appended = PiDevCfgQueryDriverConfiguration(i);
        if ( ((appended + 0x80000000) & 0x80000000) == 0 && appended != -1073741637 )
          goto LABEL_13;
        appended = PiDevCfgAppendMultiSz(&UnicodeString, (unsigned __int16 *)(i + 376), 0LL, 1);
        if ( appended < 0 )
          goto LABEL_13;
      }
      if ( UnicodeString.Buffer )
        appended = PiDevCfgSetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (_BYTE *)a1,
                     *(_QWORD *)(a1 + 8),
                     1u,
                     *(_QWORD *)(a1 + 16),
                     v9,
                     (__int64)&DEVPKEY_Device_RequestConfigurationIds,
                     8210,
                     (__int64)UnicodeString.Buffer,
                     UnicodeString.Length);
      else
        appended = -1073741637;
    }
  }
LABEL_13:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)appended;
}
