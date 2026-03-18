/*
 * XREFs of HUBPDO_GetHubName @ 0x1C0010488
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012300 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001A3C (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetHubSymbolicLinkName @ 0x1C0013BA0 (HUBPDO_GetHubSymbolicLinkName.c)
 *     HUBMISC_StripSymbolicNamePrefix @ 0x1C0026D08 (HUBMISC_StripSymbolicNamePrefix.c)
 *     memmove @ 0x1C0034300 (memmove.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBPDO_GetHubName(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  size_t v6; // rbp
  const void *v7; // rax
  int v8; // r14d
  __int64 v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  size_t Size; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  v3 = a2[3];
  v6 = *(unsigned int *)(a2[23] + 8LL);
  if ( v3 )
  {
    if ( (unsigned int)v6 >= 6 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1616LL) & 2) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
        memset((void *)v3, 0, v6);
        HUBPDO_GetHubSymbolicLinkName(a1, &DestinationString);
        v7 = (const void *)HUBMISC_StripSymbolicNamePrefix(&DestinationString, &Size);
        v8 = Size;
        if ( v7 && (unsigned int)v6 >= (int)Size + 6 )
          memmove((void *)(v3 + 4), v7, Size);
        v9 = (unsigned int)(v8 + 6);
        *(_DWORD *)v3 = v9;
        a2[7] = v9;
      }
      else
      {
        *(_DWORD *)v3 = 6;
        *(_WORD *)(v3 + 4) = 0;
        a2[7] = 6LL;
      }
    }
    else
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0xDu,
        (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids,
        v6,
        6);
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0xCu,
      (__int64)&WPP_14d924a2bc5654d18a61d41b78717f36_Traceguids);
    return (unsigned int)-1073741811;
  }
  return v2;
}
