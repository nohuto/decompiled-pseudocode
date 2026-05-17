/*
 * XREFs of LdrpRelocateImage @ 0x180084B78
 * Callers:
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C40 (LdrpProtectAndRelocateImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180085048 (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpRelocateImage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int v9; // ebx
  __int64 v11; // rax
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrmap.c",
      476,
      (unsigned int)"LdrpRelocateImage",
      3,
      (__int64)"DLL name: %wZ\n",
      a4);
  if ( (*(_BYTE *)(a3 + 22) & 1) == 0 && (!RtlImageDirectoryEntryToData(a1, 1, 5u, &v12) || !v12) )
    goto LABEL_5;
  if ( !a5 )
  {
    v11 = RtlImageDirectoryEntryToData(a1, 1, 0xEu, &v12);
    if ( !v11 || v12 < 0x48 || (*(_BYTE *)(v11 + 16) & 1) == 0 )
    {
      LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), a1, a2);
      v9 = LdrpProtectAndRelocateImage(a1);
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
      (__int64)"Status: 0x%08lx\n",
      v9);
  return v9;
}
