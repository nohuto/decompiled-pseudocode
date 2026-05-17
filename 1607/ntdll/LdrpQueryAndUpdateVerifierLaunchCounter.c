/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D29E0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180093C48 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlpOpenImageFileOptionsKey @ 0x18007F110 (RtlpOpenImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F330 (RtlQueryImageFileKeyOption.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     ZwSetValueKey @ 0x1800A7010 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, int *a2)
{
  int v2; // esi
  __int64 v4; // rax
  int v5; // edx
  int v7; // edi
  __int64 v8; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF

  v2 = 0;
  v4 = *((_QWORD *)a1 + 1) + *a1;
  v5 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( *(_WORD *)(v4 - 2) == 92 )
        break;
      v4 -= 2LL;
      v5 -= 2;
    }
    while ( v5 );
  }
  v8 = v4;
  RtlInitUnicodeString(&DestinationString, L"\\VerifierCounter");
  if ( (int)RtlpOpenImageFileOptionsKey(&DestinationString.Length, 0xBu, (__int64)&Handle) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKey(&DestinationString.Length, 9u, (__int64)&Handle) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v2 = 1;
  }
  v7 = RtlQueryImageFileKeyOption((__int64)Handle, v8, 4, a2, 4u, &v10);
  if ( v7 >= 0 )
  {
    if ( v2 || !*a2 )
      goto LABEL_14;
    ZwSetValueKey();
  }
  else
  {
    *a2 = 1;
  }
  v7 = 0;
LABEL_14:
  NtClose(Handle);
  return (unsigned int)v7;
}
