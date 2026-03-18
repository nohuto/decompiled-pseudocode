/*
 * XREFs of GreMarkDeletableDC @ 0x1C007F670
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031AC8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 */

void __fastcall GreMarkDeletableDC(int a1)
{
  __int64 v1; // rax
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  int v4; // [rsp+2Ch] [rbp-Ch]

  v3 = 0;
  v4 = 0;
  v1 = HmgShareLock(a1, 1);
  v2 = v1;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 36) &= ~8u;
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v2);
  }
}
