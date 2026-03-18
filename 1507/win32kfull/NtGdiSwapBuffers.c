/*
 * XREFs of NtGdiSwapBuffers @ 0x1C02B4E90
 * Callers:
 *     <none>
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C02686A4 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C02687B0 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299C40 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiSwapBuffers(HDC a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  struct EWNDOBJ *v3; // r15
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r14
  _QWORD *v7; // rcx
  __int64 DeviceHdev; // rdx
  __int64 v9; // r14
  unsigned int (__fastcall *v10)(__int64, struct EWNDOBJ *); // rax
  _QWORD v12[6]; // [rsp+28h] [rbp-79h] BYREF
  struct _RECTL v13; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v14[112]; // [rsp+68h] [rbp-39h] BYREF
  struct EWNDOBJ *v15; // [rsp+D8h] [rbp+37h]

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v1 = 0;
  if ( !v12[0] || !*(_QWORD *)(v12[0] + 512LL) )
  {
    EngSetLastError(6u);
    v2 = 0;
    goto LABEL_24;
  }
  v2 = 1;
  if ( *(_DWORD *)(v12[0] + 32LL) == 1 )
  {
LABEL_24:
    v1 = v2;
    goto LABEL_25;
  }
  DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v14, (struct XDCOBJ *)v12);
  if ( (v14[24] & 1) != 0 )
  {
    if ( v15 )
    {
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v15 + 4)) )
        goto LABEL_21;
      ++*(_DWORD *)(*(_QWORD *)(v12[0] + 512LL) + 92LL);
      v3 = v15;
      v4 = *(_QWORD *)(v12[0] + 512LL);
      v5 = *(_QWORD *)(v12[0] + 48LL);
      if ( v4 )
        v6 = v4 + 24;
      else
        v6 = 0LL;
      if ( (*(_DWORD *)(v5 + 56) & 0x20000) != 0 )
      {
        v7 = *(_QWORD **)(v12[0] + 48LL);
        v13 = *(struct _RECTL *)(v12[0] + 1424LL);
        DeviceHdev = hdevFindDeviceHdev(v7, &v13, v15);
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v12[0] + 512LL) == *(_QWORD *)(v5 + 2576) )
          {
            v9 = *(_QWORD *)(DeviceHdev + 2576);
            if ( v9 )
              v6 = v9 + 24;
            else
              v6 = 0LL;
          }
          v5 = DeviceHdev;
        }
      }
      v10 = *(unsigned int (__fastcall **)(__int64, struct EWNDOBJ *))(v5 + 3168);
      if ( v10 )
      {
        if ( v10(v6, v3) )
LABEL_21:
          v1 = 1;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
  }
  else
  {
    LOBYTE(v1) = (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v12) != 0;
  }
  DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v14);
LABEL_25:
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v1;
}
