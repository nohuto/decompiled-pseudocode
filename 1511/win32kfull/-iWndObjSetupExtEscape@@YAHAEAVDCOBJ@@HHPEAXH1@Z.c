/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0268870
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0140480 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C01406D8 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C01412C4 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C027B8A4 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0299740 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall iWndObjSetupExtEscape(struct DCOBJ *a1, __int64 a2, __int64 a3, void *a4, unsigned int a5, void *a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  __int64 v12; // rdx
  HDEV DeviceHdev; // rax
  __int64 v14; // rsi
  struct _SURFOBJ *v15; // rsi
  __int64 v16; // rsi
  unsigned int v17; // edi
  struct _RECTL v18; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v19[80]; // [rsp+50h] [rbp-68h] BYREF
  HDEV v20; // [rsp+C0h] [rbp+8h] BYREF

  v6 = 0;
  v8 = a3;
  v9 = a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    UserEnterUserCritSec(a1, a2, a3);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, a1, 0);
    if ( !(unsigned int)fBlockExtEscape(a1) )
    {
      v12 = *(_QWORD *)a1;
      DeviceHdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
      v20 = DeviceHdev;
      v14 = *(_QWORD *)(v12 + 512);
      if ( v14 )
        v15 = (struct _SURFOBJ *)(v14 + 24);
      else
        v15 = 0LL;
      if ( ((_DWORD)DeviceHdev[14] & 0x20000) != 0 )
      {
        v18 = *(struct _RECTL *)(v12 + 1424);
        DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v12 + 48), &v18, 0LL);
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v20 + 322) )
          {
            v16 = *((_QWORD *)DeviceHdev + 322);
            if ( v16 )
              v15 = (struct _SURFOBJ *)(v16 + 24);
            else
              v15 = 0LL;
          }
          v20 = DeviceHdev;
        }
        else
        {
          DeviceHdev = v20;
        }
      }
      if ( *((_QWORD *)DeviceHdev + 364) )
      {
        v17 = PDEVOBJ::Escape((PDEVOBJ *)&v20, v15, v9, v8, a4, a5, a6);
        if ( gbWndobjUpdate )
        {
          gbWndobjUpdate = 0;
          vForceClientRgnUpdate();
        }
        v6 = v17;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    UserLeaveUserCritSec();
    return v6;
  }
  else
  {
    EngSetLastError(6u);
    return 0LL;
  }
}
