/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800EFB24
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x1800EFA3C (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800EFC70 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     RtlpGuardIsSuppressedImageRva @ 0x1800EFBC0 (RtlpGuardIsSuppressedImageRva.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(unsigned __int64 a1)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rcx
  unsigned int v4; // eax
  unsigned __int64 v6; // [rsp+30h] [rbp-28h]
  char v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+68h] [rbp+10h] BYREF

  if ( (int)ZwQueryVirtualMemory() >= 0
    && v6
    && (v7 & 2) == 0
    && (v7 & 1) == 0
    && a1 >= v6
    && (v2 = (unsigned int *)RtlImageDirectoryEntryToData(v6, 1, 0xAu, &v8), (v3 = v2) != 0LL)
    && (v4 = *v2, v8 == v4)
    && v4 >= 0x94 )
  {
    return RtlpGuardIsSuppressedImageRva(v3, (unsigned int)(a1 - v6));
  }
  else
  {
    return 0;
  }
}
