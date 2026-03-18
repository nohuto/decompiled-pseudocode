/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B6B74
 * Callers:
 *     GreDescribePixelFormat @ 0x1C02B6C34 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02B6D90 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0298EE0 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMaxGet(struct _RECTL **this)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  struct _RECTL *v4; // rax
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v6)(_QWORD, __int64, _QWORD); // rax
  int v7; // eax
  struct _RECTL v9; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-78h] BYREF
  char v11[80]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+8h] BYREF

  v2 = 0;
  v12 = *(_QWORD *)&(*this)[3].left;
  v3 = v12;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, (struct PDEVOBJ *)&v12);
  if ( (*(_DWORD *)(v3 + 56) & 0x20000) != 0 )
  {
    v4 = *this;
    v9 = (*this)[89];
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)&v4[3].left, &v9, 0LL);
    if ( DeviceHdev )
      v3 = DeviceHdev;
  }
  v6 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 3152);
  if ( v6 )
  {
    v7 = v6(*(_QWORD *)(v3 + 1824), 1LL, 0LL);
    if ( v7 < 0 )
      v7 = 0;
    v2 = v7;
  }
  LOWORD((*this)[156].right) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v10);
  DCOBJ::~DCOBJ((DCOBJ *)v11);
  return v2;
}
