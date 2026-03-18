/*
 * XREFs of GreMarkDCUnreadable @ 0x1C0082754
 * Callers:
 *     InitUserScreen @ 0x1C0057224 (InitUserScreen.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0028D68 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLock @ 0x1C0029670 (HmgShareLock.c)
 */

__int64 __fastcall GreMarkDCUnreadable(unsigned int a1)
{
  __int64 v1; // rbx
  int v2; // edx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v9 = 0;
  v10 = 0;
  v1 = HmgShareLock(a1, 1);
  v8 = v1;
  GreAcquireHmgrSemaphore(v3, v2, v4);
  if ( v1 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 512) + 112LL) |= 0x10000000u;
    v6 = *(_QWORD *)(v1 + 48);
    *(_DWORD *)(v6 + 196) |= 0x10000000u;
    *(_DWORD *)(v6 + 204) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v8);
  }
  return GreReleaseHmgrSemaphore(v5);
}
