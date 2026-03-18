/*
 * XREFs of DpiDxgkDdiQueryChildStatus @ 0x1C00E64DC
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C00AA280 (DpiPdoIsChildConnected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     Template_pdqttq @ 0x1C0028C0C (Template_pdqttq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildStatus(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+38h] [rbp-30h]
  __int64 v21; // [rsp+40h] [rbp-28h]

  v4 = 0;
  v6 = (unsigned int *)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pdqttq(a1, &EventEnterDdiQueryChildStatus, a3, a2, 0, 0, 0, a4, 0);
  LOBYTE(a3) = a4;
  v11 = (*(int (__fastcall **)(__int64, unsigned int *, __int64))(a1 + 208))(a2, v6, a3);
  if ( bTracingEnabled )
  {
    v9 = 0LL;
    LOBYTE(v10) = 0;
    if ( v6 )
    {
      v4 = *v6;
      v9 = v6[1];
      LOBYTE(v10) = *((_BYTE *)v6 + 8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v21) = v11;
      LODWORD(v20) = a4;
      LODWORD(v19) = (unsigned __int8)v10;
      LODWORD(v18) = v9;
      LODWORD(v17) = v4;
      Template_pdqttq((unsigned __int8)v10, &EventExitDdiQueryChildStatus, v12, a2, v17, v18, v19, v20, v21);
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v12, v13);
  v14[3] = a1;
  v14[4] = v6[1];
  v15 = *v6;
  if ( a4 == 1 )
    LODWORD(v15) = v15 | 0x80000000;
  v14[5] = v15;
  v14[6] = *((unsigned __int8 *)v6 + 8);
  result = (unsigned int)v11;
  v14[7] = v11;
  return result;
}
