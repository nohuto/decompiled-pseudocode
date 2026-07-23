/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x180084C30
 * Callers:
 *     LdrpRelocateImage @ 0x180084B68 (LdrpRelocateImage.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpSetProtection @ 0x180084D18 (LdrpSetProtection.c)
 *     LdrRelocateImage @ 0x180084E1C (LdrRelocateImage.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(PVOID BaseOfImage)
{
  bool v2; // si
  CHAR *v3; // rdx
  NTSTATUS v4; // ecx
  NTSTATUS v5; // r8d
  NTSTATUS v6; // r9d
  int v7; // eax
  NTSTATUS v8; // ebx
  char v10; // al
  int v11; // edx
  NTSTATUS v12; // [rsp+20h] [rbp-48h]
  PVOID v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]

  v2 = 0;
  v13 = BaseOfImage;
  v4 = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v13, 0x10uLL, 0LL);
  if ( v4 < 0 )
  {
    v10 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1959,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        (__int64)"Querying large page info failed with status 0x%08lx\n",
        v4);
      v10 = LdrpDebugFlags;
    }
    if ( (v10 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v14 & 1) != 0 )
  {
    v2 = (v14 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v7 = LdrpSetProtection(BaseOfImage);
    v8 = v7;
    if ( v7 < 0 )
    {
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_21;
      v11 = 1969;
      goto LABEL_20;
    }
  }
  v8 = LdrRelocateImage(BaseOfImage, v3, v5, v6, v12);
  if ( v8 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  v7 = LdrpSetProtection(BaseOfImage);
  v8 = v7;
  if ( v7 >= 0 )
    goto LABEL_9;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    v11 = 1993;
LABEL_20:
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v11,
      (unsigned int)"LdrpProtectAndRelocateImage",
      0,
      (__int64)"Changing the protection of the executable at %p failed with status 0x%08lx\n",
      BaseOfImage,
      v7);
  }
LABEL_21:
  if ( (LdrpDebugFlags & 0x10) != 0 )
    __debugbreak();
LABEL_9:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      2003,
      (unsigned int)"LdrpProtectAndRelocateImage",
      4,
      (__int64)"Status: 0x%08lx\n",
      v8);
  return (unsigned int)v8;
}
