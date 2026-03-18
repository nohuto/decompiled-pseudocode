/*
 * XREFs of ?DxgkEngUpdateSQMData@@YAXXZ @ 0x1C00B82D0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0037B90 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0037D08 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreUnlockDisplayDevice @ 0x1C0045990 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C00459D0 (GreLockDisplayDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkEngUpdateSQMData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C i; // rcx
  int v6; // ecx
  void (__fastcall *v7)(_QWORD); // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v8; // rax
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  __int64 v10; // rbx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v11; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11, a2, a3);
  for ( i = 0LL; ; i = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)v10 )
  {
    v8 = hdevEnumerate(i, v3, v4);
    v10 = (__int64)v8;
    if ( !*(_QWORD *)&v8 )
      break;
    v6 = *(_DWORD *)(*(_QWORD *)&v8 + 56LL) & 0x20401;
    v11 = v8;
    if ( v6 == 1 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v11) )
    {
      GreLockDisplayDevice(v10);
      v7 = *(void (__fastcall **)(_QWORD))(v10 + 2696);
      if ( v7 )
        v7(*(_QWORD *)(v10 + 1824));
      GreUnlockDisplayDevice(v10);
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9, v3, v4);
}
