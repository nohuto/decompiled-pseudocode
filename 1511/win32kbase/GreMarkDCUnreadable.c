/*
 * XREFs of GreMarkDCUnreadable @ 0x1C006D6A0
 * Callers:
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031AC8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 */

__int64 __fastcall GreMarkDCUnreadable(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]

  v11 = 0;
  v12 = 0;
  v1 = HmgShareLock(a1, 1);
  v10 = v1;
  GreAcquireHmgrSemaphore(v3, v2, v4);
  if ( v1 )
  {
    *(_DWORD *)(*(_QWORD *)(v1 + 512) + 112LL) |= 0x10000000u;
    v8 = *(_QWORD *)(v1 + 48);
    *(_DWORD *)(v8 + 196) |= 0x10000000u;
    *(_DWORD *)(v8 + 204) |= 0x10000000u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v10);
  }
  return GreReleaseHmgrSemaphore(v6, v5, v7);
}
