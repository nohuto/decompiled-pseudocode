/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C015A498
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00AD7D0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C0127320 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005860 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C000A4D0 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01219A4 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C013DFA4 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C015ADE4 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C015B6CC (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(struct _KEVENT *this, struct _DXGKARG_PRESENT_DISPLAYONLY *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r8
  char v9; // bp
  int v10; // edx
  __int64 v11; // r14
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  _BYTE v15[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)&this[18]);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  Current = DXGPROCESS::GetCurrent(v4);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v16, Current);
  if ( *(_DWORD *)(*(_QWORD *)&this->Header.Lock + 132LL) )
  {
    v6 = -1073741823;
    goto LABEL_18;
  }
  KeClearEvent(this + 14);
  a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)&this->Header.Lock) + 22) + 64LL) + 40LL) + 28LL) < 0x3007u));
  v7 = *(_QWORD *)&this->Header.Lock;
  LODWORD(this[17].Header.WaitListHead.Blink) = 1;
  v9 = 0;
  v6 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*(ADAPTER_DISPLAY **)(v7 + 88), a2, v8);
  v10 = 259;
  if ( v6 >= 0 )
  {
    if ( g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
    {
      v9 = 1;
      v6 = v10;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v6 != v10 )
  {
LABEL_17:
    KeSetEvent(this + 14, 0, 0);
    goto LABEL_18;
  }
  v6 = 258;
  v11 = 10000000LL * (unsigned int)dword_1C00470E8;
  Timeout.QuadPart = -10000000LL * (unsigned int)dword_1C00470E8;
  while ( 1 )
  {
    v12 = KeWaitForSingleObject(&this[14], Executive, 0, 0, &Timeout);
    LODWORD(this[17].Header.WaitListHead.Blink) = 0;
    if ( v9 )
    {
      v13 = 4LL;
      goto LABEL_16;
    }
    if ( !*(_DWORD *)(*(_QWORD *)&this->Header.Lock + 132LL) && (v12 != 258 || KeReadStateEvent(this + 14)) )
      break;
    v13 = 5LL;
LABEL_16:
    if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                         *(_QWORD *)&this->Header.Lock,
                         v13,
                         (unsigned int)this[2].Header.Lock,
                         v11) != 1 )
      goto LABEL_17;
  }
  v6 = 0;
LABEL_18:
  BLTQUEUE::SetVisibilityIfDeferred((BLTQUEUE *)this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v6;
}
