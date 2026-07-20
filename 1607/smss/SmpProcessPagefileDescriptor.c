/*
 * XREFs of SmpProcessPagefileDescriptor @ 0x140009970
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400099F0 (SmpCreatePagingFiles.c)
 *     SmpCreateEmergencyPagingFile @ 0x14000FF08 (SmpCreateEmergencyPagingFile.c)
 * Callees:
 *     SmpUpdatePagingFileSizes @ 0x140008770 (SmpUpdatePagingFileSizes.c)
 *     SmpCreatePagefileFromDescriptor @ 0x1400098EC (SmpCreatePagefileFromDescriptor.c)
 *     SmpMakeSystemManagedPagingFileDescriptor @ 0x1400103C0 (SmpMakeSystemManagedPagingFileDescriptor.c)
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
