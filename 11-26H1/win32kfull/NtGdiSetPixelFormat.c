/*
 * XREFs of NtGdiSetPixelFormat @ 0x1403345B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     UserGetHwnd @ 0x1402A496C (UserGetHwnd.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x14031912C (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x14032910C (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1403344BC (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiSetPixelFormat(HDC a1, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 DeviceHdev; // rdx
  unsigned int (__fastcall *v17)(__int64, _QWORD, __int64); // rax
  __int64 v18; // rdx
  int v19; // ecx
  Gre::Base *v20; // rcx
  ULONG v21; // ecx
  struct _RECTL v22; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v23[14]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v24[192]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+180h] [rbp+80h] BYREF
  __int64 v26; // [rsp+188h] [rbp+88h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v23, a1);
  v4 = 0;
  if ( !v23[0] || !*(_QWORD *)(v23[0] + 496LL) )
  {
    v21 = 6;
    goto LABEL_31;
  }
  v5 = XDCOBJ::ipfdDevMax((XDCOBJ *)v23);
  if ( a2 < 1 || a2 > v5 )
  {
    v21 = 87;
LABEL_31:
    EngSetLastError(v21);
    goto LABEL_32;
  }
  UserEnterUserCritSec(v7, v6, v8);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v24, (struct XDCOBJ *)v23, 0) )
  {
    v10 = 87;
LABEL_7:
    EngSetLastError(v10);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
    UserLeaveUserCritSec();
LABEL_32:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v23);
    return 0LL;
  }
  v11 = v23[0];
  v12 = 0LL;
  v26 = 0LL;
  if ( (*(_DWORD *)(v23[0] + 36LL) & 1) != 0 )
  {
    v25 = 0LL;
    if ( !(unsigned int)UserGetHwnd(a1, &v26, &v25, v9) )
    {
      v10 = 2002;
      goto LABEL_7;
    }
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 188) == a2 )
        v4 = 1;
      else
        EngSetLastError(0x7D0u);
LABEL_14:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
      UserLeaveUserCritSec();
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v23);
      return v4;
    }
    v11 = v23[0];
    v12 = v26;
  }
  v14 = *(_QWORD *)(v11 + 48);
  v15 = (*(_QWORD *)(v11 + 496) + 24LL) & -(__int64)(*(_QWORD *)(v11 + 496) != 0LL);
  if ( (*(_DWORD *)(v14 + 40) & 0x20000) != 0 )
  {
    v22 = *(struct _RECTL *)(v11 + 1032);
    DeviceHdev = hdevFindDeviceHdev((_QWORD *)v14, &v22, 0LL);
    if ( DeviceHdev )
    {
      if ( *(_QWORD *)(v23[0] + 496LL) == *(_QWORD *)(v14 + 2544) )
        v15 = (*(_QWORD *)(DeviceHdev + 2544) + 24LL) & -(__int64)(*(_QWORD *)(DeviceHdev + 2544) != 0LL);
      v14 = DeviceHdev;
    }
  }
  if ( !*(_QWORD *)(v14 + 3128) )
    goto LABEL_14;
  if ( (*(_DWORD *)(v15 + 88) & 0x200000) == 0 )
    goto LABEL_14;
  v17 = *(unsigned int (__fastcall **)(__int64, _QWORD, __int64))(v14 + 3112);
  if ( !v17 || !v17(v15, (unsigned int)a2, v12) )
    goto LABEL_14;
  v20 = *(Gre::Base **)(W32GetSessionState(v19, v18) + 96);
  if ( *((_DWORD *)v20 + 1202) )
  {
    *((_DWORD *)v20 + 1202) = 0;
    vForceClientRgnUpdate(v20);
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
  UserLeaveUserCritSec();
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v23);
  return 1LL;
}
