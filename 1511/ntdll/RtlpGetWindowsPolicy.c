/*
 * XREFs of RtlpGetWindowsPolicy @ 0x1800EAE30
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1800EC274 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     ZwQueryLicenseValue @ 0x1800A7850 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, __int64 a2, unsigned int *a3, unsigned __int64 *a4)
{
  unsigned __int64 Heap; // rbx
  int LicenseValue; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  UNICODE_STRING v11; // [rsp+30h] [rbp-18h] BYREF

  Heap = 0LL;
  if ( a2 && a3 && a4 && SourceString )
  {
    RtlInitUnicodeString(&v11, SourceString);
    LicenseValue = ZwQueryLicenseValue();
    v8 = LicenseValue;
    if ( LicenseValue >= 0 )
    {
      v9 = *a3;
      if ( !*a3 )
      {
        *a4 = 0LL;
        return v8;
      }
    }
    else
    {
      if ( LicenseValue != -1073741789 )
      {
LABEL_13:
        v8 = ZwQueryLicenseValue();
        if ( (v8 & 0x80000000) == 0 )
        {
          *a4 = Heap;
          return v8;
        }
        goto LABEL_16;
      }
      v9 = *a3;
      if ( !*a3 )
      {
LABEL_9:
        if ( !Heap )
          return (unsigned int)-1073741801;
        goto LABEL_13;
      }
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9);
    goto LABEL_9;
  }
  v8 = -1073741811;
LABEL_16:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v8;
}
