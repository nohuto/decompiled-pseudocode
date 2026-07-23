/*
 * XREFs of LdrpProtectAndRelocateImage @ 0x1800803C0
 * Callers:
 *     LdrpRelocateImage @ 0x1800802E4 (LdrpRelocateImage.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpSetProtection @ 0x1800804B8 (LdrpSetProtection.c)
 *     LdrRelocateImage @ 0x1800805C0 (LdrRelocateImage.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpProtectAndRelocateImage(PVOID BaseOfImage)
{
  bool v2; // si
  CHAR *v3; // rdx
  NTSTATUS v4; // r8d
  NTSTATUS v5; // r9d
  NTSTATUS v6; // ebx
  char v8; // al
  int v9; // edx
  NTSTATUS v10; // [rsp+20h] [rbp-58h]
  PVOID v11; // [rsp+48h] [rbp-30h] BYREF
  __int64 v12; // [rsp+50h] [rbp-28h]

  v2 = 0;
  v11 = BaseOfImage;
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, MemoryWorkingSetExInformation, &v11, 0x10uLL, 0LL) < 0 )
  {
    v8 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1948,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        (__int64)"Querying large page info failed with status 0x%08lx\n");
      v8 = LdrpDebugFlags;
    }
    if ( (v8 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v12 & 1) != 0 )
  {
    v2 = (v12 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v6 = LdrpSetProtection(BaseOfImage);
    if ( v6 < 0 )
    {
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_21;
      v9 = 1958;
      goto LABEL_20;
    }
  }
  v6 = LdrRelocateImage(BaseOfImage, v3, v4, v5, v10);
  if ( v6 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  v6 = LdrpSetProtection(BaseOfImage);
  if ( v6 >= 0 )
    goto LABEL_9;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    v9 = 1982;
LABEL_20:
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v9,
      (unsigned int)"LdrpProtectAndRelocateImage",
      0,
      (__int64)"Changing the protection of the executable at %p failed with status 0x%08lx\n");
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
      (__int64)"Status: 0x%08lx\n");
  return (unsigned int)v6;
}
