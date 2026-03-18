/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01840FC
 * Callers:
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0148244 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C0183160 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007A60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C6CC (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C014B518 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C01670C4 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C0184AB0 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C0185028 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(BLTQUEUE *this, struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  int v8; // ebx
  DXGDODPRESENT *v9; // rax
  __int64 v10; // r8
  char v11; // bp
  int v12; // edx
  __int64 v13; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  _BYTE v17[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v18[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (BLTQUEUE *)((char *)this + 632));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v18, ProcessDxgProcess);
  if ( *(_DWORD *)(*(_QWORD *)this + 132LL) )
  {
    v8 = -1073741823;
    goto LABEL_18;
  }
  KeClearEvent((PRKEVENT)((char *)this + 536));
  a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)this) + 24) + 64LL) + 40LL) + 28LL) < 0x3007u));
  v9 = *(DXGDODPRESENT **)this;
  *((_DWORD *)this + 156) = 1;
  v11 = 0;
  v8 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v9 + 11), a2, v10);
  v12 = 259;
  if ( v8 >= 0 )
  {
    if ( g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
    {
      v11 = 1;
      v8 = v12;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v8 != v12 )
  {
LABEL_17:
    KeSetEvent((PRKEVENT)((char *)this + 536), 0, 0);
    goto LABEL_18;
  }
  v8 = 258;
  v13 = 10000000LL * (unsigned int)dword_1C0057368;
  Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C0057368;
  while ( 1 )
  {
    v14 = KeWaitForSingleObject((char *)this + 536, Executive, 0, 0, &Timeout);
    *((_DWORD *)this + 156) = 0;
    if ( v11 )
    {
      v15 = 4LL;
      goto LABEL_16;
    }
    if ( !*(_DWORD *)(*(_QWORD *)this + 132LL) && (v14 != 258 || KeReadStateEvent((PRKEVENT)((char *)this + 536))) )
      break;
    v15 = 5LL;
LABEL_16:
    if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(*(_QWORD *)this, v15, *((unsigned int *)this + 24), v13) != 1 )
      goto LABEL_17;
  }
  v8 = 0;
LABEL_18:
  BLTQUEUE::SetVisibilityIfDeferred(this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v8;
}
