/*
 * XREFs of GreDescribePixelFormat @ 0x1C02B3AFC
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C02A5C90 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002CCC0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299740 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B3A44 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  struct _RECTL *v7; // rbp
  int v8; // edi
  ULONG v9; // ecx
  __int16 left; // ax
  int v11; // esi
  __int64 v12; // rbx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v14)(_QWORD, _QWORD, _QWORD, __int64); // rax
  struct _RECTL v16; // [rsp+30h] [rbp-88h] BYREF
  struct _RECTL *v17[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v18[80]; // [rsp+50h] [rbp-68h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v7 = v17[0];
  v8 = 0;
  if ( !v17[0] )
  {
    v9 = 6;
LABEL_19:
    EngSetLastError(v9);
    goto LABEL_20;
  }
  left = v17[0][155].left;
  if ( left < 0 )
    v11 = XDCOBJ::ipfdDevMaxGet(v17);
  else
    v11 = left;
  if ( !a3 )
  {
    v8 = v11;
LABEL_20:
    v11 = v8;
    goto LABEL_21;
  }
  if ( a3 < 0x28 || a2 < 1 || a2 > v11 )
  {
    v9 = 87;
    goto LABEL_19;
  }
  *(_QWORD *)&v16.left = *(_QWORD *)&v7[3].left;
  v12 = *(_QWORD *)&v16.left;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v16);
  if ( (*(_DWORD *)(v12 + 56) & 0x20000) != 0 )
  {
    v16 = v7[89];
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)&v7[3].left, &v16, 0LL);
    if ( DeviceHdev )
      v12 = DeviceHdev;
  }
  v14 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v12 + 3160);
  if ( !v14 || !v14(*(_QWORD *)(v12 + 1824), (unsigned int)a2, a3, a4) )
    v11 = 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
LABEL_21:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  return (unsigned int)v11;
}
