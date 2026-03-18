/*
 * XREFs of NtGdiSetPixelFormat @ 0x1C02B3C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     UserGetHwnd @ 0x1C01E843C (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C027B8A4 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299740 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B3A44 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(__int64 *a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 left_low; // rdx
  int v8; // eax
  struct _RECTL *v9; // rcx
  ULONG v10; // ecx
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  struct _RECTL v15; // xmm0
  _QWORD *v16; // rcx
  __int64 DeviceHdev; // rdx
  __int64 v18; // rsi
  unsigned int (__fastcall *v19)(__int64, _QWORD, __int64); // rax
  ULONG v20; // ecx
  struct _RECTL *v22[2]; // [rsp+20h] [rbp-39h] BYREF
  struct _RECTL v23; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v24[112]; // [rsp+40h] [rbp-19h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v22, (HDC)a1);
  v6 = 0;
  if ( !v22[0] || !*(_QWORD *)&v22[0][32].left )
  {
    v20 = 6;
    goto LABEL_37;
  }
  left_low = LOWORD(v22[0][155].left);
  if ( (left_low & 0x8000u) != 0LL )
    v8 = XDCOBJ::ipfdDevMaxGet(v22);
  else
    v8 = (__int16)left_low;
  if ( a2 < 1 || a2 > v8 )
  {
    v20 = 87;
LABEL_37:
    EngSetLastError(v20);
    goto LABEL_38;
  }
  UserEnterUserCritSec(v4, left_low, v5);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct XDCOBJ *)v22, 0);
  v9 = v22[0];
  if ( (v22[0][2].top & 1) == 0 )
  {
    v11 = 0LL;
    goto LABEL_17;
  }
  if ( (unsigned int)UserGetHwnd(a1, &v26, &v25) )
  {
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 188) != a2 )
      {
        v10 = 2000;
        goto LABEL_14;
      }
LABEL_33:
      v6 = 1;
      goto LABEL_34;
    }
    v9 = v22[0];
    v11 = v26;
LABEL_17:
    v12 = *(_QWORD *)&v9[32].left;
    v13 = *(_QWORD *)&v9[3].left;
    if ( v12 )
      v14 = v12 + 24;
    else
      v14 = 0LL;
    if ( (*(_DWORD *)(v13 + 56) & 0x20000) != 0 )
    {
      v15 = v9[89];
      v16 = *(_QWORD **)&v9[3].left;
      v23 = v15;
      DeviceHdev = hdevFindDeviceHdev(v16, &v23, 0LL);
      if ( DeviceHdev )
      {
        if ( *(_QWORD *)&v22[0][32].left == *(_QWORD *)(v13 + 2576) )
        {
          v18 = *(_QWORD *)(DeviceHdev + 2576);
          if ( v18 )
            v14 = v18 + 24;
          else
            v14 = 0LL;
        }
        v13 = DeviceHdev;
      }
    }
    if ( !*(_QWORD *)(v13 + 3168) )
      goto LABEL_34;
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v14) + 112) & 0x200000) == 0 )
      goto LABEL_34;
    v19 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v13 + 3152);
    if ( !v19 || !v19(v14, (unsigned int)a2, v11) )
      goto LABEL_34;
    if ( gbWndobjUpdate )
    {
      gbWndobjUpdate = 0;
      vForceClientRgnUpdate();
    }
    goto LABEL_33;
  }
  v10 = 2002;
LABEL_14:
  EngSetLastError(v10);
LABEL_34:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v24);
  UserLeaveUserCritSec();
LABEL_38:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v22);
  return v6;
}
