/*
 * XREFs of DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C016D220
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x1C01751B0 (DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership.c)
 */

__int64 __fastcall DpiFdoStopDeviceAndReleasePostDisplayOwnership(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v2) = -1073741637;
  v3 = *(_BYTE *)(v1 + 2552);
  v4 = *(_QWORD *)(v1 + 40);
  if ( (v3 & 4) == 0 )
    goto LABEL_9;
  *(_BYTE *)(v1 + 2552) = v3 & 0xFB;
  if ( *(_DWORD *)(v4 + 136) < 0x3003u || !*(_QWORD *)(v4 + 736) )
    goto LABEL_9;
  dword_1C0046F2C = 0;
  v5 = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
         v4,
         *(_QWORD *)(v1 + 48),
         (unsigned int)dword_1C0046FB4,
         dword_1C0046F10);
  v2 = v5;
  if ( v5 >= 0 )
  {
    if ( !dword_1C0046F10[0] )
    {
      v11 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
      *(_QWORD *)(v11 + 24) = DpiFdoStopDeviceAndReleasePostDisplayOwnership;
      *(_QWORD *)(v11 + 32) = v4;
      WdLogEvent5_WdEvent(v11);
      dword_1C0046F28 = -3;
    }
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v10[3] = DpiFdoStopDeviceAndReleasePostDisplayOwnership;
    v10[4] = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership;
    v10[5] = v2;
    WdLogEvent5_WdError(v10);
  }
  if ( (int)v2 < 0 )
  {
LABEL_9:
    memset(dword_1C0046F10, 0, 0x20uLL);
    dword_1C0046F28 = -1;
    memset(&xmmword_1C0046F30, 0, 0x80uLL);
  }
  result = (unsigned int)v2;
  dword_1C0046FB0 = 2;
  return result;
}
