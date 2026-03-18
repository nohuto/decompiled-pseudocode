/*
 * XREFs of MiAllowImageMap @ 0x14042A544
 * Callers:
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140026640 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     SeGetTrustLabelAce @ 0x14008DA70 (SeGetTrustLabelAce.c)
 *     ObpGetObjectSecurity @ 0x140406CE0 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x1404206A8 (ObReleaseObjectSecurity.c)
 *     SeQueryMandatoryLabel @ 0x1404D9024 (SeQueryMandatoryLabel.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int ObjectSecurity; // esi
  __int64 v5; // rdi
  ULONG_PTR v6; // rbx
  PSECURITY_DESCRIPTOR v7; // rbx
  BOOLEAN MemoryAllocated; // [rsp+30h] [rbp+8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_DWORD *)(a1 + 1740);
  if ( (v2 & 0x800) != 0 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
    return 3221225506LL;
  ObjectSecurity = 0;
  if ( (v2 & 0x1000) != 0 )
  {
    MemoryAllocated = 0;
    v5 = MiSectionControlArea(a2);
    v6 = MiReferenceControlAreaFile(v5);
    ObjectSecurity = ObpGetObjectSecurity(v6, &SecurityDescriptor, &MemoryAllocated, 0);
    MiDereferenceControlAreaFile(v5, v6);
    if ( ObjectSecurity < 0 )
    {
      return (unsigned int)-1073741790;
    }
    else
    {
      v7 = SecurityDescriptor;
      if ( (unsigned int)SeQueryMandatoryLabel(SecurityDescriptor) <= 0x1000 && !SeGetTrustLabelAce((__int64)v7) )
        ObjectSecurity = -1073741790;
      ObReleaseObjectSecurity(v7, MemoryAllocated);
    }
  }
  return (unsigned int)ObjectSecurity;
}
