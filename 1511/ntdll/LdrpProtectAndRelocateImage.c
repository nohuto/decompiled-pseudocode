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

__int64 __fastcall LdrpProtectAndRelocateImage(__int64 a1)
{
  bool v2; // si
  int v3; // ebx
  __int64 v4; // rdx
  char v6; // al
  int v7; // edx
  __int64 v8; // [rsp+48h] [rbp-30h] BYREF
  __int64 v9; // [rsp+50h] [rbp-28h]

  v2 = 0;
  v8 = a1;
  if ( (int)ZwQueryVirtualMemory(-1LL, 0LL, 4LL, &v8) < 0 )
  {
    v6 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrfind.c",
        1948,
        (unsigned int)"LdrpProtectAndRelocateImage",
        0,
        (__int64)"Querying large page info failed with status 0x%08lx\n");
      v6 = LdrpDebugFlags;
    }
    if ( (v6 & 0x10) != 0 )
      __debugbreak();
  }
  else if ( (v9 & 1) != 0 )
  {
    v2 = (v9 & 0x800000) != 0;
  }
  if ( !v2 )
  {
    v3 = LdrpSetProtection(a1, 0LL);
    if ( v3 < 0 )
    {
      if ( (LdrpDebugFlags & 3) == 0 )
        goto LABEL_21;
      v7 = 1958;
      goto LABEL_20;
    }
  }
  v3 = LdrRelocateImage(a1);
  if ( v3 < 0 )
    goto LABEL_9;
  if ( v2 )
    goto LABEL_9;
  LOBYTE(v4) = 1;
  v3 = LdrpSetProtection(a1, v4);
  if ( v3 >= 0 )
    goto LABEL_9;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    v7 = 1982;
LABEL_20:
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      v7,
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
  return (unsigned int)v3;
}
