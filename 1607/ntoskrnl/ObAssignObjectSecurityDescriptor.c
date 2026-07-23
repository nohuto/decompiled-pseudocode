/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x1404C5464
 * Callers:
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     WmipSecurityMethod @ 0x1404C53C0 (WmipSecurityMethod.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, void *a2)
{
  int v4; // esi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = ObLogSecurityDescriptor(a2, &v6, 0x10u);
    if ( v4 >= 0 )
    {
      ExFreePoolWithTag(a2, 0);
      if ( v6 )
        *(_QWORD *)(a1 - 8) = v6 + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
    return (unsigned int)v4;
  }
  else
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
}
