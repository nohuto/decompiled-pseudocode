/*
 * XREFs of GreDxDwmShutdown @ 0x1C0263768
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C00D3E60 (xxxDwmStopRedirection.c)
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C001CE48 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreDxDwmShutdown(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 HDEV; // rax
  __int64 i; // rcx
  int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !(unsigned int)UserIsRemoteConnection(a1, a2, a3, a4) )
  {
    gDxgkInterface[59]((int *)-1LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    HDEV = UserGetHDEV();
    GreLockVisRgn(HDEV);
    for ( i = 0LL; ; i = v9 )
    {
      v8 = hdevEnumerate(i);
      v9 = v8;
      if ( !v8 )
        break;
      v6 = *(_DWORD *)(v8 + 56) & 0x20401;
      v12 = v8;
      if ( v6 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v12) )
      {
        GreLockDisplayDevice(v9);
        if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))gDxgkInterface[96])(
               *(_QWORD *)(*(_QWORD *)(v9 + 2600) + 256LL),
               *(unsigned int *)(*(_QWORD *)(v9 + 2600) + 272LL)) )
        {
          if ( *(_QWORD *)(v9 + 2760) )
          {
            LOBYTE(v7) = 1;
            DrvDxgkDisplayOnOff(v9, v7, 3LL);
            (*(void (__fastcall **)(_QWORD, __int64))(v9 + 2760))(*(_QWORD *)(v9 + 1824), 1LL);
          }
        }
        GreUnlockDisplayDevice(v9);
      }
    }
    v10 = UserGetHDEV();
    GreUnlockVisRgn(v10);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  }
}
