/*
 * XREFs of DpiDxgkDdiLinkDevice @ 0x1C0010AF4
 * Callers:
 *     DpiAddDevice @ 0x1C00EA390 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_ppqqtq @ 0x1C00301A4 (Template_ppqqtq.c)
 */

__int64 __fastcall DpiDxgkDdiLinkDevice(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // ebx
  int v9; // r8d
  __int64 v10; // r14
  _QWORD *v11; // rax
  int v13; // ecx
  char v14; // dl

  LOBYTE(v4) = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_ppqqtq(a1, (unsigned int)&EventEnterDdiLinkDevice, a3, a2, a3, 0, 0, 0, 0);
  v10 = (*(int (__fastcall **)(__int64, __int64, int *))(a1 + 616))(a2, a3, a4);
  if ( bTracingEnabled )
  {
    v13 = 0;
    v14 = 0;
    if ( a4 )
    {
      v4 = *a4;
      v13 = a4[1];
      v14 = *((_BYTE *)a4 + 8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_ppqqtq(v13, (unsigned int)&EventExitDdiLinkDevice, v9, a2, a3, v4, v13, v14, v10);
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v11[3] = a2;
  v11[4] = a3;
  v11[5] = (unsigned int)a4[1];
  v11[6] = *((unsigned __int8 *)a4 + 8);
  v11[7] = v10;
  return (unsigned int)v10;
}
