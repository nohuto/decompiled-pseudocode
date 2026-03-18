/*
 * XREFs of HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x1C006AEE4
 * Callers:
 *     HUBDSM_WritingCustomPropertiesInRegistry @ 0x1C001BA50 (HUBDSM_WritingCustomPropertiesInRegistry.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C006D78C (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBMISC_ParseAndWriteCustomPropertiesInRegistry(__int64 a1)
{
  __int64 v1; // rbp
  int v3; // ebx
  unsigned int v4; // esi
  const WCHAR *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  __int64 result; // rax
  int v9; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 2096);
  v3 = 0;
  v4 = 0;
  v5 = (const WCHAR *)(v1 + 10);
  if ( *(_WORD *)(v1 + 8) )
  {
    while ( 1 )
    {
      v6 = v5[4];
      RtlInitUnicodeString(&DestinationString, v5 + 5);
      v7 = HUBREG_WriteValueToDeviceHardwareKey(
             a1,
             (unsigned int)&DestinationString,
             *((_DWORD *)v5 + 1),
             *(_DWORD *)((char *)v5 + v6 + 10),
             (__int64)v5 + v6 + 14);
      v3 = v7;
      if ( v7 < 0 )
        break;
      ++v4;
      v5 = (const WCHAR *)((char *)v5 + *(unsigned int *)v5);
      if ( v4 >= *(unsigned __int16 *)(v1 + 8) )
        goto LABEL_6;
    }
    v9 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x3Cu,
      (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
      v9);
  }
LABEL_6:
  result = 4065LL;
  if ( v3 >= 0 )
    return 4077LL;
  return result;
}
