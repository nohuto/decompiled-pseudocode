/*
 * XREFs of HvpMapHiveImageFromFile @ 0x1403D3CD8
 * Callers:
 *     HvLoadHive @ 0x1403D3A54 (HvLoadHive.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     HvpMapHiveImage @ 0x1403D8C44 (HvpMapHiveImage.c)
 */

__int64 __fastcall HvpMapHiveImageFromFile(__int64 BugCheckParameter2, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  PVOID P; // [rsp+40h] [rbp-20h]
  unsigned int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]
  unsigned int v14; // [rsp+50h] [rbp-10h]

  v9 = 0;
  P = 0LL;
  v13 = 0;
  v5 = a4;
  v14 = a4;
  v12 = a4;
  v8 = BugCheckParameter2;
  v10 = 4096;
  while ( 1 )
  {
    P = ExAllocatePoolWithTag(PagedPool, v5, 0x6F494D43u);
    if ( P )
      break;
    v5 = ((v12 >> 1) + 4095) & 0xFFFFF000;
    v12 = v5;
    if ( v5 < 0x10000 )
      return (unsigned int)-1073741801;
  }
  v6 = HvpMapHiveImage(BugCheckParameter2, (__int64)&v8);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v6;
}
