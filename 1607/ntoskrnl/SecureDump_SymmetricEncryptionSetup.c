/*
 * XREFs of SecureDump_SymmetricEncryptionSetup @ 0x1401CBE30
 * Callers:
 *     SecureDump_Init @ 0x1401CB980 (SecureDump_Init.c)
 * Callees:
 *     SecureDump_LogErrorEvent @ 0x1401CBAC0 (SecureDump_LogErrorEvent.c)
 *     BCryptGenRandom @ 0x140219450 (BCryptGenRandom.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BCryptGetProperty @ 0x140550A60 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140550AE0 (BCryptOpenAlgorithmProvider.c)
 *     BCryptGenerateSymmetricKey @ 0x14068CCC4 (BCryptGenerateSymmetricKey.c)
 *     BCryptSetProperty @ 0x14068CDD4 (BCryptSetProperty.c)
 */

__int64 SecureDump_SymmetricEncryptionSetup()
{
  NTSTATUS SymmetricKey; // ebx
  UCHAR *PoolWithTag; // rax
  void *v2; // rcx
  ULONG v3; // r9d
  UCHAR *v4; // rdi
  ULONG v5; // r9d
  ULONG pbSecret; // [rsp+20h] [rbp-28h]
  ULONG cbSecret; // [rsp+28h] [rbp-20h]
  ULONG v9; // [rsp+30h] [rbp-18h]
  int pbOutput; // [rsp+50h] [rbp+8h] BYREF
  ULONG pcbResult; // [rsp+58h] [rbp+10h] BYREF

  dword_1403234E8 = 1;
  SymmetricKey = BCryptOpenAlgorithmProvider(&hAlgorithm, L"XTS-AES", L"Microsoft Primitive Provider", 1u);
  if ( SymmetricKey < 0 )
    goto LABEL_11;
  PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x706D6453u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SymmetricKey = -1073741670;
    goto LABEL_11;
  }
  SymmetricKey = BCryptGenRandom(v2, PoolWithTag, 0x40u, v3);
  if ( SymmetricKey >= 0 )
  {
    SymmetricKey = BCryptGenerateSymmetricKey(hAlgorithm, &hObject, 0LL, 0, v4, 0x40u, v9);
    ExFreePoolWithTag(v4, 0);
    if ( SymmetricKey < 0 )
      goto LABEL_11;
    SymmetricKey = BCryptGetProperty(hObject, L"KeyLength", (PUCHAR)&pbOutput, v5, &pcbResult, cbSecret);
    if ( SymmetricKey < 0 )
      goto LABEL_11;
    if ( pbOutput == 512 )
    {
      cbOutput = 4096;
      SymmetricKey = BCryptSetProperty(hObject, L"MessageBlockLength", (PUCHAR)&cbOutput, 4u, pbSecret);
    }
  }
  else
  {
    ExFreePoolWithTag(v4, 0);
  }
  if ( SymmetricKey < 0 )
LABEL_11:
    SecureDump_LogErrorEvent(1);
  return (unsigned int)SymmetricKey;
}
