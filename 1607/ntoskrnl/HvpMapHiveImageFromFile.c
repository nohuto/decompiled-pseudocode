/*
 * XREFs of HvpMapHiveImageFromFile @ 0x14047DE28
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     HvpMapHiveImage @ 0x1404F7004 (HvpMapHiveImage.c)
 */

__int64 __fastcall HvpMapHiveImageFromFile(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  PVOID P; // [rsp+40h] [rbp-20h]
  unsigned int v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+4Ch] [rbp-14h]
  unsigned int v14; // [rsp+50h] [rbp-10h]

  v9 = 0;
  v4 = 0x200000;
  P = 0LL;
  v13 = 0;
  v8 = BugCheckParameter2;
  v10 = 4096;
  if ( a4 < 0x200000 )
    v4 = a4;
  v14 = a4;
  v12 = v4;
  while ( 1 )
  {
    P = ExAllocatePoolWithTag(PagedPool, v4, 0x6F494D43u);
    if ( P )
      break;
    v4 = ((v12 >> 1) + 4095) & 0xFFFFF000;
    v12 = v4;
    if ( v4 < 0x10000 )
      return (unsigned int)-1073741801;
  }
  v6 = HvpMapHiveImage(BugCheckParameter2, (__int64)&v8);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v6;
}
