/*
 * XREFs of UsbhBuildContainerID @ 0x1C002881C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhMakeId @ 0x1C0008D00 (UsbhMakeId.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     RtlStringCbCatW @ 0x1C0028C6C (RtlStringCbCatW.c)
 *     RtlStringLengthWorkerW @ 0x1C0028CE4 (RtlStringLengthWorkerW.c)
 *     RtlStringCopyWorkerW @ 0x1C0028D24 (RtlStringCopyWorkerW.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall UsbhBuildContainerID(__int64 a1, __int64 a2)
{
  UCHAR *v3; // r13
  wchar_t *v4; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // r15
  char *Id; // r8
  char *v11; // r8
  size_t v12; // r12
  wchar_t *PoolWithTag; // rax
  size_t *v14; // r8
  size_t v15; // rdi
  NTSTATUS v16; // ecx
  NTSTATUS Property; // ebx
  const wchar_t *v18; // r8
  int v19; // ecx
  NTSTATUS v20; // eax
  ULONG v21; // esi
  UCHAR *v22; // rax
  UCHAR *v23; // rdi
  UCHAR *v24; // rax
  int v26; // r8d
  int v27; // r8d
  size_t cchToCopy; // [rsp+20h] [rbp-50h]
  ULONG pcbResult[4]; // [rsp+40h] [rbp-30h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h]
  ULONG pbOutput; // [rsp+C0h] [rbp+50h] BYREF
  size_t pcchLength; // [rsp+C8h] [rbp+58h] BYREF

  phHash = 0LL;
  pbOutput = 0;
  pcbResult[0] = 0;
  v3 = 0LL;
  phAlgorithm = 0LL;
  v4 = 0LL;
  Log(a1, 4096, 1111705924, a2, 0LL);
  v9 = PdoExt(v8, v6, v7, v8);
  LODWORD(pcchLength) = 0;
  Id = UsbhMakeId(0, L"nnnn", 0LL, &pcchLength, 0, 4, *((_WORD *)v9 + 700), 0LL);
  if ( !Id )
  {
    v26 = 1111699745;
LABEL_44:
    Property = -1073741670;
    Log(a1, 4096, v26, a2, -1073741670LL);
    return (unsigned int)Property;
  }
  v11 = UsbhMakeId(0, L"nnnn", Id, &pcchLength, 0, 4, *((_WORD *)v9 + 701), 0LL);
  if ( !v11 )
  {
    v26 = 1111700001;
    goto LABEL_44;
  }
  P = UsbhMakeId(1, L"nnnn", v11, &pcchLength, 1u, 4, *((_WORD *)v9 + 702), 0LL);
  if ( !P )
  {
    v26 = 1111700257;
    goto LABEL_44;
  }
  v12 = (unsigned int)(pcchLength + v9[531]);
  if ( v12 < 2 )
  {
    v27 = 1111700769;
LABEL_48:
    Property = -1073741670;
    Log(a1, 4096, v27, a2, -1073741670LL);
    goto LABEL_50;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)v12, 0x42554855u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v27 = 1111700513;
    goto LABEL_48;
  }
  memset(PoolWithTag, 0, (unsigned int)v12);
  v15 = (unsigned __int64)(unsigned int)v12 >> 1;
  v16 = 0;
  if ( v15 - 1 > 0x7FFFFFFE )
    v16 = -1073741811;
  if ( v16 < 0 )
  {
    if ( v15 )
      *v4 = 0;
  }
  else
  {
    v16 = RtlStringCopyWorkerW(v4, (unsigned __int64)(unsigned int)v12 >> 1, v14, (STRSAFE_PCNZWCH)P, cchToCopy);
  }
  Property = v16;
  if ( v16 < 0
    || (v18 = (const wchar_t *)*((_QWORD *)v9 + 266)) != 0LL && (Property = RtlStringCbCatW(v4, v12, v18), Property < 0) )
  {
    v23 = 0LL;
    goto LABEL_31;
  }
  v19 = 0;
  pcchLength = 0LL;
  if ( v15 > 0x7FFFFFFF )
  {
    v20 = -1073741811;
  }
  else
  {
    v20 = RtlStringLengthWorkerW(v4, v15, &pcchLength);
    v19 = pcchLength;
  }
  v21 = 2 * v19;
  if ( v20 < 0 )
    v21 = 0;
  Property = v20;
  if ( v20 < 0 )
    goto LABEL_50;
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 1u);
  if ( Property < 0 )
  {
    phAlgorithm = 0LL;
    goto LABEL_50;
  }
  Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
  if ( Property < 0 )
  {
LABEL_50:
    v23 = 0LL;
    goto LABEL_31;
  }
  if ( pcbResult[0] != 4 )
  {
    Property = -1073741306;
    goto LABEL_50;
  }
  v22 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
  v23 = v22;
  if ( !v22 )
  {
LABEL_57:
    Property = -1073741670;
    goto LABEL_31;
  }
  memset(v22, 0, pbOutput);
  Property = BCryptCreateHash(phAlgorithm, &phHash, v23, pbOutput, 0LL, 0, 0);
  if ( Property < 0 )
    goto LABEL_31;
  Property = BCryptHashData(phHash, (PUCHAR)&pbInput, 0x10u, 0);
  if ( Property < 0 )
    goto LABEL_31;
  Property = BCryptHashData(phHash, (PUCHAR)v4, v21, 0);
  if ( Property < 0 )
    goto LABEL_31;
  Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&pbOutput, 4u, pcbResult, 0);
  if ( Property < 0 )
    goto LABEL_31;
  if ( pcbResult[0] == 4 && pbOutput >= 0x10 )
  {
    v24 = (UCHAR *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, pbOutput, 0x42554855u);
    v3 = v24;
    if ( v24 )
    {
      memset(v24, 0, pbOutput);
      Property = BCryptFinishHash(phHash, v3, pbOutput, 0);
      if ( Property >= 0 )
      {
        *(_OWORD *)(v9 + 671) = *(_OWORD *)v3;
        *((_WORD *)v9 + 1345) = *((_WORD *)v9 + 1345) & 0xFFF | 0x5000;
        *((_BYTE *)v9 + 2692) = v9[673] & 0x3F | 0x80;
        *((_BYTE *)v9 + 2700) = 1;
      }
      goto LABEL_31;
    }
    goto LABEL_57;
  }
  Property = -1073741811;
LABEL_31:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(P, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
