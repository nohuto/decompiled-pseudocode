/*
 * XREFs of itrp_InnerTraceExecute @ 0x1C02DD5EC
 * Callers:
 *     itrp_Execute @ 0x1C00B0DE0 (itrp_Execute.c)
 *     itrp_CALL @ 0x1C00C5070 (itrp_CALL.c)
 *     InvokeInterpreter @ 0x1C00EE7E4 (InvokeInterpreter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall itrp_InnerTraceExecute(__int64 a1, unsigned __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rdx

  qword_1C0323E88 = a2;
  qword_1C0323E90 = a1;
  v3 = (char *)a1;
  if ( a1 < a2 )
  {
    do
    {
      if ( !qword_1C0323E38 )
        break;
      qword_1C0323E20 = (__int64)v3;
      byte_1C0323E54 = *v3;
      qword_1C0323E38(&LocalGS, a2);
      if ( !qword_1C0323E38 )
        break;
      v4 = (unsigned __int8)*v3;
      if ( !--dword_1C0323EA0 )
      {
        dword_1C0323E80 = 4366;
        return;
      }
      v3 = (char *)((__int64 (__fastcall *)(char *))function[v4])(v3 + 1);
    }
    while ( (unsigned __int64)v3 < a2 );
  }
}
