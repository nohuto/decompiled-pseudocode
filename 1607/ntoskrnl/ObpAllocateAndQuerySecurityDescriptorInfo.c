/*
 * XREFs of ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140504198
 * Callers:
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     NtSetSecurityObject @ 0x140503BA4 (NtSetSecurityObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateAndQuerySecurityDescriptorInfo(__int64 a1, int a2, _QWORD *a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  PVOID PoolWithTag; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, int *, PVOID, SIZE_T *, __int64, _DWORD, __int64, _BYTE); // r15
  int v9; // edi
  int v11; // [rsp+40h] [rbp-48h]
  SIZE_T NumberOfBytes; // [rsp+90h] [rbp+8h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF

  v13 = a2;
  v5 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  LODWORD(NumberOfBytes) = ObpDefaultSecurityDescriptorLength;
  v6 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v5];
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)ObpDefaultSecurityDescriptorLength, 0x7153624Fu);
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, int *, PVOID, SIZE_T *, __int64, _DWORD, __int64, _BYTE))(v6 + 152);
  v9 = v8(a1, 1LL, &v13, PoolWithTag, &NumberOfBytes, a1 - 8, *(_DWORD *)(v6 + 100), v6 + 76, 0);
  if ( v9 == -1073741789 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x7153624Fu);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x7153624Fu);
    if ( PoolWithTag )
    {
      LOBYTE(v11) = 0;
      v9 = v8(a1, 1LL, &v13, PoolWithTag, &NumberOfBytes, a1 - 8, *(_DWORD *)(v6 + 100), v6 + 76, v11);
      goto LABEL_3;
    }
    return 3221225626LL;
  }
LABEL_3:
  if ( v9 < 0 )
    ExFreePoolWithTag(PoolWithTag, 0x7153624Fu);
  else
    *a3 = PoolWithTag;
  return (unsigned int)v9;
}
