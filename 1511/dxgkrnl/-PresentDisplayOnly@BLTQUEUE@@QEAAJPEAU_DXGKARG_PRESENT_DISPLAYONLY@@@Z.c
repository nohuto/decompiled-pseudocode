/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C015E7BC
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00BFA8C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C012D5A8 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB60 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000C810 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01275E0 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C01443E4 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C015F108 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C015F9C0 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(struct _KEVENT *this, struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  struct DXGPROCESS *Current; // rax
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  char v8; // bp
  int v9; // edx
  __int64 v10; // r14
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  _BYTE v14[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)&this[18]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  Current = DXGPROCESS::GetCurrent();
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v15, Current);
  if ( *(_DWORD *)(*(_QWORD *)&this->Header.Lock + 132LL) )
  {
    v5 = -1073741823;
    goto LABEL_18;
  }
  KeClearEvent(this + 14);
  a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)&this->Header.Lock) + 22) + 64LL) + 40LL) + 28LL) < 0x3007u));
  v6 = *(_QWORD *)&this->Header.Lock;
  LODWORD(this[17].Header.WaitListHead.Blink) = 1;
  v8 = 0;
  v5 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*(ADAPTER_DISPLAY **)(v6 + 88), a2, v7);
  v9 = 259;
  if ( v5 >= 0 )
  {
    if ( g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
    {
      v8 = 1;
      v5 = v9;
    }
    else
    {
      v8 = 0;
    }
  }
  if ( v5 != v9 )
  {
LABEL_17:
    KeSetEvent(this + 14, 0, 0);
    goto LABEL_18;
  }
  v5 = 258;
  v10 = 10000000LL * (unsigned int)dword_1C0047168;
  Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C0047168;
  while ( 1 )
  {
    v11 = KeWaitForSingleObject(&this[14], Executive, 0, 0, &Timeout);
    LODWORD(this[17].Header.WaitListHead.Blink) = 0;
    if ( v8 )
    {
      v12 = 4LL;
      goto LABEL_16;
    }
    if ( !*(_DWORD *)(*(_QWORD *)&this->Header.Lock + 132LL) && (v11 != 258 || KeReadStateEvent(this + 14)) )
      break;
    v12 = 5LL;
LABEL_16:
    if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                         *(_QWORD *)&this->Header.Lock,
                         v12,
                         (unsigned int)this[2].Header.Lock,
                         v10) != 1 )
      goto LABEL_17;
  }
  v5 = 0;
LABEL_18:
  BLTQUEUE::SetVisibilityIfDeferred((BLTQUEUE *)this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return (unsigned int)v5;
}
