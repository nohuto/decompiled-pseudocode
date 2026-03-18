/*
 * XREFs of DxgkPreSessionDisconnected @ 0x1C00C68D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00C6908 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 */

void __fastcall DxgkPreSessionDisconnected(char a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+3Ch] [rbp+14h]

  if ( a1 )
  {
    v6 = -1;
    v5 = -1;
    v1 = HMDDisplayOnOff(&v5, 0xFFFFFFFFLL, 2LL);
    v3 = v1;
    if ( v1 < 0 )
    {
      v4 = WdLogNewEntry5_WdError(v2);
      *(_QWORD *)(v4 + 24) = v3;
      WdLogEvent5_WdError(v4);
    }
  }
}
