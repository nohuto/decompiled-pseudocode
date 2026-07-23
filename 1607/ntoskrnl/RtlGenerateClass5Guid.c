/*
 * XREFs of RtlGenerateClass5Guid @ 0x1405506EC
 * Callers:
 *     PipCreateComputerId @ 0x14079A240 (PipCreateComputerId.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x14013C724 (BCryptCloseAlgorithmProvider.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BCryptHashData @ 0x1405508D0 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x14055093C (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140550980 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1405509DC (BCryptCreateHash.c)
 *     BCryptGetProperty @ 0x140550A60 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140550AE0 (BCryptOpenAlgorithmProvider.c)
 */

__int64 __fastcall RtlGenerateClass5Guid(__int64 a1, UCHAR *a2, ULONG a3, __int64 a4)
{
  UCHAR *PoolWithTag; // rdi
  ULONG v9; // edx
  NTSTATUS Property; // ebx
  ULONG v11; // r9d
  ULONG v12; // r9d
  unsigned __int32 v13; // eax
  ULONG v14; // r9d
  ULONG v15; // r8d
  ULONG v16; // r9d
  ULONG *pcbResult; // [rsp+20h] [rbp-49h]
  ULONG v19; // [rsp+28h] [rbp-41h]
  ULONG v20; // [rsp+28h] [rbp-41h]
  ULONG v21; // [rsp+30h] [rbp-39h]
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-29h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+48h] [rbp-21h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-19h] BYREF
  ULONG v25; // [rsp+58h] [rbp-11h] BYREF
  UCHAR pbInput[16]; // [rsp+60h] [rbp-9h] BYREF
  UCHAR v27[24]; // [rsp+70h] [rbp+7h] BYREF

  phAlgorithm = 0LL;
  PoolWithTag = 0LL;
  phHash = 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a4 )
    return 3221225714LL;
  if ( !a2 && a3 )
    return 3221225713LL;
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA1", L"Microsoft Primitive Provider", 0);
  if ( Property >= 0 )
  {
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, v11, &v25, v19);
    if ( Property >= 0 )
    {
      PoolWithTag = (UCHAR *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)pbOutput, 0x64697547u);
      if ( !PoolWithTag )
        Property = -1073741670;
      if ( Property >= 0 )
      {
        Property = BCryptCreateHash(phAlgorithm, &phHash, PoolWithTag, *(ULONG *)pbOutput, (PUCHAR)pcbResult, v20, v21);
        if ( Property >= 0 )
        {
          v13 = _byteswap_ulong(*(_DWORD *)a1);
          *(_OWORD *)pbInput = *(_OWORD *)a1;
          *(_DWORD *)pbInput = v13;
          *(_WORD *)&pbInput[4] = __ROR2__(*(_WORD *)(a1 + 4), 8);
          *(_WORD *)&pbInput[6] = __ROR2__(*(_WORD *)(a1 + 6), 8);
          Property = BCryptHashData(phHash, pbInput, 0x10u, v12);
          if ( Property >= 0 )
          {
            Property = BCryptHashData(phHash, a2, a3, v14);
            if ( Property >= 0 )
            {
              Property = BCryptFinishHash(phHash, v27, v15, v16);
              if ( Property >= 0 )
              {
                *(_OWORD *)a4 = *(_OWORD *)v27;
                *(_DWORD *)a4 = _byteswap_ulong(*(_DWORD *)a4);
                *(_WORD *)(a4 + 4) = __ROR2__(*(_WORD *)(a4 + 4), 8);
                *(_WORD *)(a4 + 6) = __ROR2__(*(_WORD *)(a4 + 6), 8) & 0xFFF | 0x5000;
                *(_BYTE *)(a4 + 8) = *(_BYTE *)(a4 + 8) & 0x3F | 0x80;
              }
            }
          }
        }
      }
    }
  }
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, v9);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)Property;
}
