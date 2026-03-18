/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x1403E01D8
 * Callers:
 *     CmpAssignSecurityDescriptorWrapper @ 0x1403DFD88 (CmpAssignSecurityDescriptorWrapper.c)
 *     WmipSecurityMethod @ 0x1404C19F8 (WmipSecurityMethod.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, void *a2)
{
  int v5; // esi
  __int64 v6; // [rsp+30h] [rbp+8h]

  if ( a2 )
  {
    v5 = ObLogSecurityDescriptor(a2);
    if ( v5 >= 0 )
    {
      ExFreePoolWithTag(a2, 0);
      if ( v6 )
        *(_QWORD *)(a1 - 8) = v6 + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
    return (unsigned int)v5;
  }
  else
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
}
