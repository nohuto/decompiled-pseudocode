/*
 * XREFs of itrp_InnerExecute @ 0x1C00D2B2C
 * Callers:
 *     InvokeInterpreter @ 0x1C00D2B04 (InvokeInterpreter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall itrp_InnerExecute(unsigned __int8 *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx

  qword_1C0329538 = a2;
  qword_1C0329540 = (__int64)a1;
  if ( (unsigned __int64)a1 < a2 )
  {
    while ( 1 )
    {
      v3 = *a1;
      if ( !--dword_1C0329550 )
        break;
      a1 = (unsigned __int8 *)((__int64 (__fastcall *)(unsigned __int8 *))function[v3])(a1 + 1);
      if ( (unsigned __int64)a1 >= a2 )
        return;
    }
    dword_1C0329530 = 4366;
  }
}
