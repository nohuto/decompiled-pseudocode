/*
 * XREFs of MapPhysMem @ 0x1C001FDF8
 * Callers:
 *     MapUnmapPhysMem @ 0x1C001FD98 (MapUnmapPhysMem.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C001FE98 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall MapPhysMem(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 *a3)
{
  ULONG_PTR v4; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rbp
  int MemoryCachingRequirements; // ebx
  int v9; // eax
  __int64 v10; // rax
  ULONG_PTR v12[5]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+64h] [rbp+Ch]
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = HIDWORD(BugCheckParameter3);
  v12[0] = BugCheckParameter3;
  v4 = (unsigned int)BugCheckParameter4;
  if ( (int)AmlpValidateFirmwareMemoryAddress(v12) < 0 )
    KeBugCheckEx(0xA5u, 0x1000uLL, v13, (unsigned int)BugCheckParameter3, v4);
  v6 = 516;
  v7 = (unsigned int)v4;
  MemoryCachingRequirements = HalGetMemoryCachingRequirements(BugCheckParameter3, (unsigned int)v4, &v14);
  if ( MemoryCachingRequirements < 0 )
  {
    v9 = 0;
    v14 = 0;
    MemoryCachingRequirements = 0;
  }
  else
  {
    v9 = v14;
  }
  if ( v9 == 1 )
    v6 = 4;
  v10 = MmMapIoSpaceEx(BugCheckParameter3, v7, v6);
  if ( v10 )
    *a3 = v10;
  else
    return (unsigned int)-1073741670;
  return (unsigned int)MemoryCachingRequirements;
}
