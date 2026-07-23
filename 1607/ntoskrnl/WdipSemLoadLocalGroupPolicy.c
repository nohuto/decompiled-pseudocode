/*
 * XREFs of WdipSemLoadLocalGroupPolicy @ 0x14069BF80
 * Callers:
 *     WdipSemLoadGroupPolicy @ 0x140564E58 (WdipSemLoadGroupPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwEnumerateKey @ 0x14015A830 (ZwEnumerateKey.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     WdipSemQueryValueFromRegistry @ 0x140565D80 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x140565E80 (WdipSemOpenRegistryKey.c)
 */

__int64 __fastcall WdipSemLoadLocalGroupPolicy(HANDLE KeyHandle)
{
  HANDLE v2; // rcx
  ULONG v3; // esi
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  GUID *v6; // rbx
  GUID *PoolWithTag; // rax
  unsigned int Data1; // eax
  HANDLE Handle; // [rsp+30h] [rbp-89h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-81h] BYREF
  int v12; // [rsp+3Ch] [rbp-7Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-79h] BYREF
  GUID Guid; // [rsp+50h] [rbp-69h] BYREF
  _DWORD KeyInformation[38]; // [rsp+60h] [rbp-59h] BYREF

  ResultLength = 0;
  v2 = 0LL;
  Handle = 0LL;
  v3 = 0;
  v12 = 0;
  if ( KeyHandle )
  {
    while ( 1 )
    {
      if ( v2 )
      {
        ZwClose(v2);
        Handle = 0LL;
      }
      memset(KeyInformation, 0, sizeof(KeyInformation));
      v5 = ZwEnumerateKey(KeyHandle, v3++, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
      if ( v5 == -2147483622 )
        break;
      if ( v5 >= 0 )
      {
        if ( KeyInformation[3] >= 0x80u )
        {
          v4 = -2147483643;
          goto LABEL_22;
        }
        *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)&KeyInformation[4]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0
          && WdipSemOpenRegistryKey((PCWSTR)&KeyInformation[4], KeyHandle, &Handle) >= 0
          && (int)WdipSemQueryValueFromRegistry(Handle, L"ScenarioExecutionEnabled", 4, 4u, &v12, &ResultLength) >= 0
          && !v12 )
        {
          v6 = (GUID *)WdipSemDisabledScenarioTable;
          if ( !WdipSemDisabledScenarioTable )
          {
            PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x404uLL, 0x73494457u);
            WdipSemDisabledScenarioTable = PoolWithTag;
            v6 = PoolWithTag;
            if ( !PoolWithTag )
            {
              v4 = -1073741670;
              goto LABEL_22;
            }
            memset(PoolWithTag, 0, 0x404uLL);
          }
          Data1 = v6[64].Data1;
          if ( Data1 >= 0x40 )
          {
            v4 = -1073741823;
            goto LABEL_22;
          }
          v6[64].Data1 = Data1 + 1;
          v6[Data1] = Guid;
        }
      }
      v2 = Handle;
    }
    v4 = 0;
LABEL_22:
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
