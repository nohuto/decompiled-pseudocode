/*
 * XREFs of itrp_InnerTraceExecute @ 0x1C02E0D7C
 * Callers:
 *     itrp_Execute @ 0x1C00CAFA0 (itrp_Execute.c)
 *     itrp_CALL @ 0x1C00CB8B0 (itrp_CALL.c)
 *     InvokeInterpreter @ 0x1C00D2B04 (InvokeInterpreter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall itrp_InnerTraceExecute(__int64 a1, unsigned __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rdx

  qword_1C0329538 = a2;
  qword_1C0329540 = a1;
  v3 = (char *)a1;
  if ( a1 < a2 )
  {
    do
    {
      if ( !qword_1C03294E8 )
        break;
      qword_1C03294D0 = (__int64)v3;
      byte_1C0329504 = *v3;
      qword_1C03294E8(&LocalGS, a2);
      if ( !qword_1C03294E8 )
        break;
      v4 = (unsigned __int8)*v3;
      if ( !--dword_1C0329550 )
      {
        dword_1C0329530 = 4366;
        return;
      }
      v3 = (char *)((__int64 (__fastcall *)(char *))function[v4])(v3 + 1);
    }
    while ( (unsigned __int64)v3 < a2 );
  }
}
