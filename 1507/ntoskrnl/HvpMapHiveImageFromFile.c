/*
 * XREFs of HvpMapHiveImageFromFile @ 0x1404AF8C8
 * Callers:
 *     HvLoadHive @ 0x1404AE98C (HvLoadHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     HvpMapHiveImage @ 0x14049FFF8 (HvpMapHiveImage.c)
 */

__int64 __fastcall HvpMapHiveImageFromFile(__int64 BugCheckParameter2, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // eax
  unsigned int v7; // r8d
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+3Ch] [rbp-24h]
  PVOID P; // [rsp+40h] [rbp-20h]
  unsigned int v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]
  unsigned int v17; // [rsp+50h] [rbp-10h]

  v12 = 0;
  P = 0LL;
  v16 = 0;
  v6 = a4;
  v17 = a4;
  v15 = a4;
  v11 = BugCheckParameter2;
  v13 = 4096;
  while ( 1 )
  {
    P = ExAllocatePoolWithTag(PagedPool, v6, 0x6F494D43u);
    if ( P )
      break;
    v6 = ((v15 >> 1) + 4095) & 0xFFFFF000;
    v15 = v6;
    if ( v6 < 0x10000 )
      return (unsigned int)-1073741801;
  }
  v9 = HvpMapHiveImage(BugCheckParameter2, a4, v7, v8, (__int64)&v11);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v9;
}
