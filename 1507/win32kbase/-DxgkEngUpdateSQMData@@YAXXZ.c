/*
 * XREFs of ?DxgkEngUpdateSQMData@@YAXXZ @ 0x1C00B5BE0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00342F8 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUnlockDisplayDevice @ 0x1C0061400 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C0061430 (GreLockDisplayDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngUpdateSQMData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  struct PDEV *i; // rcx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  void (__fastcall *v9)(_QWORD); // rax
  struct PDEV *v10; // rax
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // rbx
  struct PDEV *v13; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v13, a2, a3);
  for ( i = 0LL; ; i = (struct PDEV *)v12 )
  {
    v10 = hdevEnumerate(i, v3, v4);
    v12 = (__int64)v10;
    if ( !v10 )
      break;
    v6 = *((_DWORD *)v10 + 14) & 0x20401;
    v13 = v10;
    if ( v6 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v13) )
    {
      GreLockDisplayDevice(v12);
      v9 = *(void (__fastcall **)(_QWORD))(v12 + 2696);
      if ( v9 )
        v9(*(_QWORD *)(v12 + 1824));
      GreUnlockDisplayDevice(v12, v7, v8);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11, v3, v4);
}
