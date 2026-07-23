/*
 * XREFs of LdrpRelocateImage @ 0x1800802E4
 * Callers:
 *     LdrpMapImage @ 0x18000E70C (LdrpMapImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     LdrpProtectAndRelocateImage @ 0x1800803C0 (LdrpProtectAndRelocateImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800807D8 (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpRelocateImage(PVOID BaseOfImage, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v9; // ebx
  _BYTE *v11; // rax
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      476,
      (unsigned int)"LdrpRelocateImage",
      3,
      (__int64)"DLL name: %wZ\n");
  if ( (*(_BYTE *)(a3 + 22) & 1) == 0 && (!RtlImageDirectoryEntryToData(BaseOfImage, 1u, 5u, &Size) || !Size) )
    goto LABEL_5;
  if ( !a5 )
  {
    v11 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xEu, &Size);
    if ( !v11 || Size < 0x48 || (v11[16] & 1) == 0 )
    {
      LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), BaseOfImage, a2);
      v9 = LdrpProtectAndRelocateImage(BaseOfImage);
      goto LABEL_6;
    }
LABEL_5:
    v9 = 0;
    goto LABEL_6;
  }
  v9 = -1073741800;
LABEL_6:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      521,
      (unsigned int)"LdrpRelocateImage",
      4,
      (__int64)"Status: 0x%08lx\n");
  return v9;
}
