/*
 * XREFs of NtGdiSwapBuffers @ 0x140334850
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140310430 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x140310638 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x14032910C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiSwapBuffers(HDC a1)
{
  __int64 v1; // r8
  unsigned int v2; // edi
  int v3; // eax
  struct EWNDOBJ *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v10)(__int64, struct EWNDOBJ *); // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v12[14]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[168]; // [rsp+A8h] [rbp-60h] BYREF
  struct EWNDOBJ *v14; // [rsp+150h] [rbp+48h]

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v12, a1);
  if ( v12[0] && *(_QWORD *)(v12[0] + 496LL) )
  {
    v2 = 1;
    if ( *(_DWORD *)(v12[0] + 32LL) == 1 )
    {
LABEL_8:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
      return v2;
    }
    DEVLOCKOBJ_WNDOBJ::DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v13, (struct XDCOBJ *)v12, v1);
    if ( (v13[32] & 1) != 0 )
    {
      if ( !v14 )
      {
        EngSetLastError(6u);
        goto LABEL_7;
      }
      if ( ERECTL::bEmpty((struct EWNDOBJ *)((char *)v14 + 4)) )
      {
LABEL_12:
        DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v13);
        goto LABEL_8;
      }
      ++*(_DWORD *)(*(_QWORD *)(v12[0] + 496LL) + 92LL);
      v5 = v14;
      v6 = *(_QWORD *)(v12[0] + 48LL);
      v7 = (*(_QWORD *)(v12[0] + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(v12[0] + 496LL) != 0LL);
      if ( (*(_DWORD *)(v6 + 40) & 0x20000) != 0 )
      {
        v8 = *(_QWORD **)(v12[0] + 48LL);
        *(_OWORD *)&v11[1] = *(_OWORD *)(v12[0] + 1032LL);
        DeviceHdev = hdevFindDeviceHdev(v8, (struct _RECTL *)&v11[1], v14);
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(v12[0] + 496LL) == *(_QWORD *)(v6 + 2544) )
            v7 = (*(_QWORD *)(DeviceHdev + 2544) + 24LL) & -(__int64)(*(_QWORD *)(DeviceHdev + 2544) != 0LL);
          v6 = DeviceHdev;
        }
      }
      v10 = *(__int64 (__fastcall **)(__int64, struct EWNDOBJ *))(v6 + 3128);
      if ( !v10 )
        goto LABEL_7;
      v3 = v10(v7, v5);
    }
    else
    {
      v3 = XDCOBJ::bFullScreen((XDCOBJ *)v12);
    }
    if ( !v3 )
    {
LABEL_7:
      DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ((DEVLOCKOBJ_WNDOBJ *)v13);
      v2 = 0;
      goto LABEL_8;
    }
    goto LABEL_12;
  }
  EngSetLastError(6u);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v12);
  return 0LL;
}
