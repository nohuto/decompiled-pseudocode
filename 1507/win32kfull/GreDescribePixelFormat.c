/*
 * XREFs of GreDescribePixelFormat @ 0x1C02B4B34
 * Callers:
 *     NtGdiDescribePixelFormat @ 0x1C02A6480 (NtGdiDescribePixelFormat.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299C40 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B4A74 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, __int64 a4)
{
  struct _RECTL *v7; // rbx
  int v8; // edi
  ULONG v9; // ecx
  __int16 right; // ax
  int v11; // esi
  int v12; // eax
  __int64 v13; // rbx
  __int64 DeviceHdev; // rax
  unsigned int (__fastcall *v15)(_QWORD, _QWORD, _QWORD, __int64); // rax
  struct _RECTL v17; // [rsp+38h] [rbp-69h] BYREF
  struct _RECTL *v18[6]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v19[32]; // [rsp+78h] [rbp-29h] BYREF
  char v20[80]; // [rsp+98h] [rbp-9h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  v7 = v18[0];
  v8 = 0;
  if ( !v18[0] )
  {
    v9 = 6;
LABEL_19:
    EngSetLastError(v9);
    goto LABEL_20;
  }
  right = v18[0][156].right;
  if ( right < 0 )
  {
    v12 = XDCOBJ::ipfdDevMaxGet(v18);
    v7 = v18[0];
    v11 = v12;
  }
  else
  {
    v11 = right;
  }
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
  v13 = *(_QWORD *)&v7[3].left;
  *(_QWORD *)&v17.left = v13;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v17);
  if ( (*(_DWORD *)(v13 + 56) & 0x20000) != 0 )
  {
    v17 = v18[0][89];
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)&v18[0][3].left, &v17, 0LL);
    if ( DeviceHdev )
      v13 = DeviceHdev;
  }
  v15 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v13 + 3160);
  if ( !v15 || !v15(*(_QWORD *)(v13 + 1824), (unsigned int)a2, a3, a4) )
    v11 = 0;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
  DCOBJ::~DCOBJ((DCOBJ *)v20);
LABEL_21:
  DCOBJ::~DCOBJ((DCOBJ *)v18);
  return (unsigned int)v11;
}
