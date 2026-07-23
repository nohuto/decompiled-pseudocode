/*
 * XREFs of ExpFindDiskSignature @ 0x1406B0C5C
 * Callers:
 *     ExpConvertSignatureName @ 0x1406B023C (ExpConvertSignatureName.c)
 *     ExpCreateOutputEFI @ 0x1406B0538 (ExpCreateOutputEFI.c)
 *     ExpTranslateEfiPath @ 0x1406B28C4 (ExpTranslateEfiPath.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpGetPartitionTableInfo @ 0x1406B104C (ExpGetPartitionTableInfo.c)
 */

NTSTATUS ExpFindDiskSignature(__int64 a1, _DWORD *a2, unsigned int *a3, _QWORD *a4, _QWORD *a5, char a6, ...)
{
  __int64 v6; // r14
  char v7; // si
  NTSTATUS result; // eax
  int PartitionTableInfo; // ebx
  wchar_t *PoolWithTag; // r12
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // [rsp+20h] [rbp-88h]
  _DWORD SystemInformation[6]; // [rsp+48h] [rbp-60h] BYREF

  v6 = 0LL;
  v16 = a2;
  v7 = 0;
  result = ZwQuerySystemInformation(SystemDeviceInformation, SystemInformation, 0x18u, 0LL);
  PartitionTableInfo = result;
  if ( result < 0 )
    return result;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x4CuLL, 0x72766E45u);
  if ( !PoolWithTag )
    return -1073741670;
  v11 = 0;
  if ( !SystemInformation[0] )
    goto LABEL_23;
  do
  {
    swprintf_s(PoolWithTag, 0x26uLL, L"\\Device\\Harddisk%lu\\Partition0", v11, v16);
    PartitionTableInfo = ExpGetPartitionTableInfo(PoolWithTag);
    if ( PartitionTableInfo < 0 )
      goto LABEL_22;
    if ( MEMORY[0] != (a6 == 1) || a6 != 1 && MEMORY[8] != *(_DWORD *)a1 )
      goto LABEL_21;
    v12 = 0;
    if ( !MEMORY[4] )
      goto LABEL_20;
    v13 = 96LL;
    while ( 1 )
    {
      v6 = v13 - 48;
      if ( a6 == 1 )
        break;
      v14 = v16;
      if ( *(_DWORD *)(v13 - 24) == *v16 )
      {
        v7 = 1;
        goto LABEL_24;
      }
LABEL_17:
      ++v12;
      v13 += 144LL;
      if ( v12 >= MEMORY[4] )
        goto LABEL_20;
    }
    v15 = *(_QWORD *)v13 - *(_QWORD *)a1;
    if ( *(_QWORD *)v13 == *(_QWORD *)a1 )
      v15 = *(_QWORD *)(v13 + 8) - *(_QWORD *)(a1 + 8);
    if ( v15 )
      goto LABEL_17;
    v7 = 1;
LABEL_20:
    if ( v7 == 1 )
      break;
LABEL_21:
    ExFreePoolWithTag(0LL, 0);
LABEL_22:
    ++v11;
  }
  while ( v11 < SystemInformation[0] );
LABEL_23:
  v14 = v16;
LABEL_24:
  if ( PartitionTableInfo >= 0 && !v7 )
    PartitionTableInfo = -1073741766;
  if ( v7 == 1 )
  {
    *v14 = *(_DWORD *)(v6 + 24);
    *a3 = v11;
    if ( a4 )
      *a4 = *(_QWORD *)(v6 + 8);
    if ( a5 )
      *a5 = *(_QWORD *)(v6 + 16);
    ExFreePoolWithTag(0LL, 0);
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return PartitionTableInfo;
}
