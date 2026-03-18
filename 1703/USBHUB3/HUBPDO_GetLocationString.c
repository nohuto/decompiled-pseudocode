/*
 * XREFs of HUBPDO_GetLocationString @ 0x1C0015B20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfExW @ 0x1C0010454 (RtlStringCchPrintfExW.c)
 */

__int64 __fastcall HUBPDO_GetLocationString(__int64 a1, wchar_t **a2)
{
  unsigned int v2; // ebx
  wchar_t *PoolWithTag; // rdi
  NTSTATUS v6; // eax
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-20h]
  size_t pcchRemaining; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x64334855u);
  if ( PoolWithTag )
  {
    v6 = RtlStringCchPrintfExW(
           PoolWithTag,
           0xAuLL,
           0LL,
           &pcchRemaining,
           0x200u,
           L"USB(%d)",
           *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 200LL));
    if ( v6 < 0 )
    {
      LODWORD(pszFormat) = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x62u,
        (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
        pszFormat);
    }
    *a2 = PoolWithTag;
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x61u,
      (__int64)&WPP_960ba12013703861ff3c57427b7fe6ef_Traceguids,
      0);
    return (unsigned int)-1073741670;
  }
  return v2;
}
