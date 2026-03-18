/*
 * XREFs of MapPhysMem @ 0x1C000BA38
 * Callers:
 *     MapUnmapPhysMem @ 0x1C000B9CC (MapUnmapPhysMem.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C000BAC8 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall MapPhysMem(ULONG_PTR a1, unsigned int a2, __int64 *a3)
{
  ULONG_PTR BugCheckParameter4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rsi
  int MemoryCachingRequirements; // ebx
  int v8; // eax
  __int64 v9; // rax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+68h] [rbp+20h] BYREF

  BugCheckParameter3 = a1;
  BugCheckParameter4 = a2;
  if ( (int)AmlpValidateFirmwareMemoryAddress(&BugCheckParameter3) < 0 )
    KeBugCheckEx(0xA5u, 0x1000uLL, SHIDWORD(BugCheckParameter3), (unsigned int)BugCheckParameter3, BugCheckParameter4);
  v5 = 516;
  v6 = (unsigned int)BugCheckParameter4;
  MemoryCachingRequirements = HalGetMemoryCachingRequirements(
                                BugCheckParameter3,
                                (unsigned int)BugCheckParameter4,
                                &v11);
  if ( MemoryCachingRequirements < 0 )
  {
    v8 = 0;
    v11 = 0;
    MemoryCachingRequirements = 0;
  }
  else
  {
    v8 = v11;
  }
  if ( v8 == 1 )
    v5 = 4;
  v9 = MmMapIoSpaceEx(BugCheckParameter3, v6, v5);
  if ( v9 )
    *a3 = v9;
  else
    return (unsigned int)-1073741670;
  return (unsigned int)MemoryCachingRequirements;
}
