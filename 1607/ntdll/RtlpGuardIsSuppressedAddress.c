/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800EFB24
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800EFA3C (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800EFC70 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     RtlpGuardIsSuppressedImageRva @ 0x1800EFBC0 (RtlpGuardIsSuppressedImageRva.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(PVOID BaseAddress)
{
  int v2; // ebx
  unsigned int *v3; // rax
  unsigned int *v4; // rcx
  unsigned int v5; // eax
  PVOID BaseOfImage[2]; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+40h] [rbp-18h]
  ULONG Size; // [rsp+68h] [rbp+10h] BYREF

  if ( ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         MemoryImageInformation,
         BaseOfImage,
         0x18uLL,
         0LL) >= 0
    && (v2 = (int)BaseOfImage[0], BaseOfImage[0])
    && (v8 & 2) == 0
    && (v8 & 1) == 0
    && BaseAddress >= BaseOfImage[0]
    && (v3 = (unsigned int *)RtlImageDirectoryEntryToData(BaseOfImage[0], 1u, 0xAu, &Size), (v4 = v3) != 0LL)
    && (v5 = *v3, Size == v5)
    && v5 >= 0x94 )
  {
    return RtlpGuardIsSuppressedImageRva(v4, (unsigned int)((_DWORD)BaseAddress - v2));
  }
  else
  {
    return 0;
  }
}
