/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x1800733E4
 * Callers:
 *     LdrpRelocateImage @ 0x180073308 (LdrpRelocateImage.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpSetProtection @ 0x1800734DC (LdrpSetProtection.c)
 *     LdrRelocateImage @ 0x1800735D8 (LdrRelocateImage.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
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
  NTSTATUS v12; // [rsp+20h] [rbp-58h]
  PVOID v13; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]

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
        1948,
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
      v11 = 1958;
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
    v11 = 1982;
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
      1992,
      (unsigned int)"LdrpProtectAndRelocateImage",
      4,
      (__int64)"Status: 0x%08lx\n",
      v8);
  return (unsigned int)v8;
}
