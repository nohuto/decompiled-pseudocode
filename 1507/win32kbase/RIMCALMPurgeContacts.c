/*
 * XREFs of RIMCALMPurgeContacts @ 0x1C0072214
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     RIMCALMAddAfterLifeContact @ 0x1C00C8F70 (RIMCALMAddAfterLifeContact.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C00722DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMCALMPurgeContacts(__int64 a1, int a2)
{
  _QWORD *v2; // r15
  _QWORD *v4; // rbx
  unsigned __int64 v6; // rbp
  int v7; // edx
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  v2 = (_QWORD *)(a1 + 608);
  v4 = *(_QWORD **)(a1 + 608);
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    14,
    (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
    a2);
  while ( v4 != v2 )
  {
    v9 = v4 - 4;
    if ( (unsigned int)(v6 - *((_DWORD *)v4 - 1)) < 0x7D0 )
    {
      if ( a2 )
        break;
    }
    v4 = (_QWORD *)*v4;
    v10 = v9[4];
    v11 = (_QWORD *)v9[5];
    if ( *(_QWORD **)(v10 + 8) != v9 + 4 || (_QWORD *)*v11 != v9 + 4 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      4,
      15,
      (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
      --*(_DWORD *)(a1 + 628));
    Win32FreePool();
  }
  return WPP_RECORDER_SF_d(
           WPP_GLOBAL_Control->DeviceExtension,
           v7,
           4,
           16,
           (__int64)&WPP_6d580f25f81f898f33a23dea95b38970_Traceguids,
           *(_DWORD *)(a1 + 628));
}
