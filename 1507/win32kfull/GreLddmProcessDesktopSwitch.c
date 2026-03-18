/*
 * XREFs of GreLddmProcessDesktopSwitch @ 0x1C003E4CC
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0030DD8 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void GreLddmProcessDesktopSwitch()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int IsRemoteConnection; // edi
  __int64 i; // rcx
  __int64 v6; // rax
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  IsRemoteConnection = UserIsRemoteConnection(v1, v0, v2, v3);
  for ( i = 0LL; ; i = v8 )
  {
    v6 = hdevEnumerate(i);
    v8 = v6;
    if ( !v6 )
      break;
    v9 = *(_DWORD *)(v6 + 56) & 0x20401;
    v10 = v6;
    if ( v9 == 1 && ((unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) || IsRemoteConnection) )
    {
      GreLockVisRgn(v8);
      GreLockDisplayDevice(v8);
      gDxgkInterface[125](
        *(_QWORD *)(*(_QWORD *)(v8 + 2600) + 256LL),
        *(unsigned int *)(*(_QWORD *)(v8 + 2600) + 272LL),
        IsRemoteConnection);
      GreUnlockDisplayDevice(v8);
      GreUnlockVisRgn(v8);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
}
