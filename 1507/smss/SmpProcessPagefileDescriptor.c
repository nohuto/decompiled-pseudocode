/*
 * XREFs of SmpProcessPagefileDescriptor @ 0x14000AE90
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000AF10 (SmpCreatePagingFiles.c)
 *     SmpCreateEmergencyPagingFile @ 0x14000FAF4 (SmpCreateEmergencyPagingFile.c)
 * Callees:
 *     SmpUpdatePagingFileSizes @ 0x140009C74 (SmpUpdatePagingFileSizes.c)
 *     SmpCreatePagefileFromDescriptor @ 0x14000AE0C (SmpCreatePagefileFromDescriptor.c)
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x14000FFAC (SmpMakeSystemManagedPagingFileDescriptor.c)
 */

__int64 __fastcall SmpProcessPagefileDescriptor(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 92) & 2) != 0 )
    SmpMakeSystemManagedPagingFileDescriptor();
  v2 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 > v2 )
    v2 = v5;
  v6 = v2;
  SmpUpdatePagingFileSizes((__int64 *)&v5, &v6);
  v3 = v5;
  *(_QWORD *)(a1 + 64) = v6;
  *(_QWORD *)(a1 + 56) = v3;
  if ( *(_QWORD *)(a1 + 48) > v3 )
    *(_QWORD *)(a1 + 48) = v3;
  if ( (*(_BYTE *)(a1 + 92) & 4) == 0 )
    return SmpCreatePagefileFromDescriptor(a1, 1);
  result = SmpCreatePagefileFromDescriptor(a1, 0);
  if ( (int)result < 0 )
    return SmpCreatePagefileFromDescriptor(a1, 1);
  return result;
}
