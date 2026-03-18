/*
 * XREFs of SepSetSystemPaths @ 0x140545620
 * Callers:
 *     SepIsMinTCB @ 0x14044880C (SepIsMinTCB.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14009C26C (RtlStringCbPrintfW.c)
 *     RtlStringCbLengthW @ 0x140103D90 (RtlStringCbLengthW.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepLoadNgenLocations @ 0x14076DC8C (SepLoadNgenLocations.c)
 */

__int64 SepSetSystemPaths()
{
  NTSTATUS v0; // edi
  size_t v1; // rbp
  char *PoolWithTag; // rax
  signed __int64 v3; // rsi
  const WCHAR *v4; // rbx
  wchar_t *v5; // rbx
  void *v6; // rcx
  size_t pcbLength; // [rsp+40h] [rbp+8h] BYREF

  SepLoadNgenLocations();
  v0 = RtlStringCbLengthW((STRSAFE_PCNZWCH)0xFFFFF78000000030LL, 0x208uLL, &pcbLength);
  if ( v0 >= 0 )
  {
    v1 = pcbLength + 30;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2 * (pcbLength + 30) + 48, 0x63734943u);
    v3 = (signed __int64)PoolWithTag;
    if ( PoolWithTag )
    {
      v4 = (const WCHAR *)(PoolWithTag + 48);
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)PoolWithTag + 24, v1, L"\\??\\%ws\\System32\\", 0xFFFFF78000000030uLL);
      RtlInitUnicodeString((PUNICODE_STRING)v3, v4);
      v5 = (wchar_t *)&v4[v1 >> 1];
      RtlStringCbPrintfW(v5, v1, L"\\??\\%ws\\SysWOW64\\", 0xFFFFF78000000030uLL);
      RtlInitUnicodeString((PUNICODE_STRING)(v3 + 16), v5);
      *(_OWORD *)(v3 + 32) = *(_OWORD *)v3;
      *(_WORD *)(v3 + 32) = 12;
      v6 = (void *)(v3 & -(__int64)(_InterlockedCompareExchange64((volatile signed __int64 *)&qword_14031A508, v3, 0LL) != 0));
      if ( v6 )
        ExFreePoolWithTag(v6, 0x63734943u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v0;
}
