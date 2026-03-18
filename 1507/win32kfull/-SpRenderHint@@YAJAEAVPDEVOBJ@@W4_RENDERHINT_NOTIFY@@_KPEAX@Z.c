/*
 * XREFs of ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C000DAF0
 * Callers:
 *     GreDesktopSwitch @ 0x1C000A0D8 (GreDesktopSwitch.c)
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C000DA44 (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 *     GreDwmShutdown @ 0x1C012C414 (GreDwmShutdown.c)
 *     GreDwmStartup @ 0x1C014AE34 (GreDwmStartup.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C00111C4 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C001928C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpRenderHint(struct PDEVOBJ *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  _BYTE v10[112]; // [rsp+30h] [rbp-78h] BYREF

  v8 = -1073741822;
  if ( (unsigned int)bNeedRenderHint(a1) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, a1);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 3464LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 1824LL),
           a2,
           a3,
           a4);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v10);
  }
  return v8;
}
