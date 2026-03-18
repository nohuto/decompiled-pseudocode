/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x140449D7C
 * Callers:
 *     CmpAssignSecurityDescriptorWrapper @ 0x140449A94 (CmpAssignSecurityDescriptorWrapper.c)
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, void *a2)
{
  int v5; // esi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v5 = ObLogSecurityDescriptor(a2, &v6, 16LL);
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
