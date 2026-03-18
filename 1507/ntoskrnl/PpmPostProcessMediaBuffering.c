/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x1406BDBBC
 * Callers:
 *     PpmApplyProfile @ 0x1406BD84C (PpmApplyProfile.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmCheckApplyResetNotification @ 0x14023F448 (PpmCheckApplyResetNotification.c)
 */

void PpmPostProcessMediaBuffering()
{
  __int64 *v0; // rdx
  __int64 v1; // r8
  unsigned __int16 v2; // cx
  __int64 v3; // r9
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // ax
  int v6; // edx
  unsigned __int16 v7; // cx
  unsigned __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int16 v17; // [rsp+28h] [rbp-E0h]
  _QWORD v18[21]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v19; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int16 v20; // [rsp+DAh] [rbp-2Eh]
  int v21; // [rsp+DCh] [rbp-2Ch]
  _QWORD v22[21]; // [rsp+E0h] [rbp-28h]

  PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    v17 = 1;
    memset(v18, 0, 0xA0uLL);
    if ( KeNumberNodes )
    {
      v0 = KeNodeBlock;
      v1 = (unsigned __int16)KeNumberNodes;
      do
      {
        v2 = *(_WORD *)(*v0 + 144);
        v3 = *(_QWORD *)(*v0 + 64);
        if ( v17 <= v2 )
          v17 = v2 + 1;
        ++v0;
        v18[v2] |= v3;
        --v1;
      }
      while ( v1 );
    }
    v4 = KeActiveProcessors[0];
    v5 = v17;
    v6 = 0;
    v20 = 20;
    v19 = KeActiveProcessors[0];
    v7 = 0;
    if ( LOWORD(KeActiveProcessors[0]) < v17 )
      v5 = KeActiveProcessors[0];
    if ( v5 )
    {
      v7 = v5;
      v8 = 0LL;
      v9 = v5;
      do
      {
        v10 = v18[v8 / 2];
        v8 += 2LL;
        v11 = *(_QWORD *)&KeActiveProcessors[v8] & ~v10;
        *(_QWORD *)((char *)&v19 + v8 * 4) = v11;
        if ( v11 )
          v6 = 1;
        --v9;
      }
      while ( v9 );
    }
    if ( v7 < v4 )
    {
      v12 = v4 - v7;
      v13 = 8LL * v7;
      v14 = v12;
      v7 += v12;
      do
      {
        v15 = *(_QWORD *)&KeActiveProcessors[v13 / 4 + 2];
        v22[v13 / 8] = v15;
        v13 += 8LL;
        if ( v15 )
          v6 = 1;
        --v14;
      }
      while ( v14 );
    }
    v21 = 0;
    while ( v7 < v20 )
    {
      v16 = v7++;
      v22[v16] = 0LL;
    }
    if ( v6 )
      PopExecuteOnTargetProcessors((__int64)&v19, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
}
