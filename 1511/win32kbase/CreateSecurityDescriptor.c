/*
 * XREFs of CreateSecurityDescriptor @ 0x1C006D450
 * Callers:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001F5D0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     InitSecurity @ 0x1C013C36C (InitSecurity.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 */

struct _ACL *__fastcall CreateSecurityDescriptor(PVOID AceList, ULONG AceListLength, BOOLEAN DaclDefaulted)
{
  ULONG v3; // ebx
  struct _ACL *v7; // rax
  struct _ACL *v8; // rdi
  NTSTATUS v9; // ebx

  v3 = AceListLength + 8;
  if ( AceListLength + 8 >= AceListLength && AceListLength + 48 >= AceListLength + 8 )
  {
    v7 = (struct _ACL *)Win32AllocPoolWithQuota();
    v8 = v7;
    if ( v7 )
    {
      RtlCreateSecurityDescriptor(v7, 1u);
      if ( RtlCreateAcl(v8 + 5, v3, 2u) >= 0 && RtlAddAce(v8 + 5, 2u, 0xFFFFFFFF, AceList, AceListLength) >= 0 )
      {
        v9 = RtlSetDaclSecurityDescriptor(v8, 1u, v8 + 5, DaclDefaulted);
        RtlSetSaclSecurityDescriptor(v8, 0, 0LL, 0);
        RtlSetOwnerSecurityDescriptor(v8, 0LL, 0);
        RtlSetGroupSecurityDescriptor(v8, 0LL, 0);
        if ( v9 >= 0 )
          return v8;
      }
      Win32FreePool();
    }
  }
  return 0LL;
}
