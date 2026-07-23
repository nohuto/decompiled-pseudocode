/*
 * XREFs of SepHasAllAppPackagesPresent @ 0x140694F0C
 * Callers:
 *     SepCheckForAllAppPackagesAceRemoval @ 0x140694D8C (SepCheckForAllAppPackagesAceRemoval.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140009844 (RtlGetDaclSecurityDescriptor.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlGetControlSecurityDescriptor @ 0x1404CCE04 (RtlGetControlSecurityDescriptor.c)
 */

char __fastcall SepHasAllAppPackagesPresent(PSECURITY_DESCRIPTOR SecurityDescriptor, bool *a2, bool *a3, bool *a4)
{
  char v4; // r14
  char v9; // di
  PACL v10; // rsi
  PACL v11; // rbx
  unsigned int v12; // ebp
  unsigned int AceCount; // r15d
  PSID v14; // rsi
  char result; // al
  WORD Control; // [rsp+68h] [rbp+10h] BYREF
  ULONG Revision; // [rsp+70h] [rbp+18h] BYREF
  PACL v18; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0LL;
  v4 = 0;
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  v9 = 16;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, (PBOOLEAN)&Control, &v18, (PBOOLEAN)&Revision) < 0 )
    return 0;
  if ( !(_BYTE)Control )
    return 0;
  v10 = v18;
  if ( !v18 || RtlGetControlSecurityDescriptor(SecurityDescriptor, &Control, &Revision) < 0 )
    return 0;
  v11 = v10 + 1;
  *a3 = (Control & 0x400) != 0;
  v12 = 0;
  *a4 = (Control & 0x1000) != 0;
  AceCount = v10->AceCount;
  if ( v10->AceCount )
  {
    v14 = SeAllAppPackagesSid;
    do
    {
      if ( v11->AclRevision <= 3u )
      {
        if ( RtlEqualSid(&v11[1], v14) )
        {
          v4 = 1;
          v9 &= v11->Sbz1;
          if ( (v9 & 0x10) == 0 )
            break;
        }
      }
      ++v12;
      v11 = (PACL)((char *)v11 + v11->AclSize);
    }
    while ( v12 < AceCount );
  }
  result = v4;
  *a2 = (v9 & 0x10) != 0;
  return result;
}
