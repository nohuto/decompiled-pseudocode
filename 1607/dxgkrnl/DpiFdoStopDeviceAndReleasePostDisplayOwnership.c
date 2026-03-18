/*
 * XREFs of DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C0196084
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C0195AFC (DpiFdoStopAdapter.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership @ 0x1C019EB60 (DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership.c)
 */

__int64 __fastcall DpiFdoStopDeviceAndReleasePostDisplayOwnership(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  char v3; // al
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v2) = -1073741637;
  v3 = *(_BYTE *)(v1 + 3696);
  v4 = *(_QWORD *)(v1 + 40);
  if ( (v3 & 4) == 0 )
    goto LABEL_9;
  *(_BYTE *)(v1 + 3696) = v3 & 0xFB;
  if ( *(_DWORD *)(v4 + 136) < 0x3003u || !*(_QWORD *)(v4 + 736) )
    goto LABEL_9;
  dword_1C00570EC = 0;
  v5 = DpiDxgkDdiStopDeviceAndReleasePostDisplayOwnership(
         v4,
         *(_QWORD *)(v1 + 48),
         (unsigned int)dword_1C0057174,
         dword_1C00570D0);
  v2 = v5;
  if ( v5 >= 0 )
  {
    if ( !dword_1C00570D0[0] )
    {
      v8 = WdLogNewEntry5_WdEvent(v6);
      *(_QWORD *)(v8 + 24) = v4;
      WdLogEvent5_WdEvent(v8);
      dword_1C00570E8 = -3;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = v2;
    WdLogEvent5_WdError(v7);
  }
  if ( (int)v2 < 0 )
  {
LABEL_9:
    memset(dword_1C00570D0, 0, 0x20uLL);
    dword_1C00570E8 = -1;
    memset(&xmmword_1C00570F0, 0, 0x80uLL);
  }
  result = (unsigned int)v2;
  dword_1C0057170 = 2;
  return result;
}
