/*
 * XREFs of itrp_InnerTraceExecute @ 0x1C02DCFDC
 * Callers:
 *     itrp_Execute @ 0x1C00B7B20 (itrp_Execute.c)
 *     itrp_CALL @ 0x1C00C5390 (itrp_CALL.c)
 *     InvokeInterpreter @ 0x1C01268F4 (InvokeInterpreter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall itrp_InnerTraceExecute(__int64 a1, unsigned __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rdx

  qword_1C03231B8 = a2;
  qword_1C03231C0 = a1;
  v3 = (char *)a1;
  if ( a1 < a2 )
  {
    do
    {
      if ( !qword_1C0323168 )
        break;
      qword_1C0323150 = (__int64)v3;
      byte_1C0323184 = *v3;
      qword_1C0323168(&LocalGS, a2);
      if ( !qword_1C0323168 )
        break;
      v4 = (unsigned __int8)*v3;
      if ( !--dword_1C03231D0 )
      {
        dword_1C03231B0 = 4366;
        return;
      }
      v3 = (char *)((__int64 (__fastcall *)(char *))function[v4])(v3 + 1);
    }
    while ( (unsigned __int64)v3 < a2 );
  }
}
