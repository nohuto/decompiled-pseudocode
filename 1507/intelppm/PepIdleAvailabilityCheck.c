/*
 * XREFs of PepIdleAvailabilityCheck @ 0x1C0005870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepIdleAvailabilityCheck(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int (__fastcall *v4)(__int64); // rax

  v2 = 0;
  v3 = 9LL * a2;
  if ( *(_BYTE *)(a1 + 8 * v3 + 128) )
  {
    if ( *(_QWORD *)(a1 + 8 * v3 + 88) )
    {
      v4 = *(int (__fastcall **)(__int64))(a1 + 8 * v3 + 80);
      if ( v4 && v4(a1 + 8 * v3 + 96) < 0 )
        return (unsigned int)-2147483639;
    }
    else
    {
      return (unsigned int)-2147483638;
    }
  }
  return v2;
}
