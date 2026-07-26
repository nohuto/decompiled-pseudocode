/*
 * XREFs of ??0MINIPORT_HOOK_DRIVER@@QEAA@XZ @ 0x1C009EE70
 * Callers:
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01039B4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 */

MINIPORT_HOOK_DRIVER *__fastcall MINIPORT_HOOK_DRIVER::MINIPORT_HOOK_DRIVER(MINIPORT_HOOK_DRIVER *this)
{
  __int128 v3; // [rsp+20h] [rbp-18h]

  *((_BYTE *)this + 1) = 0;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 1);
  *((_QWORD *)this + 2) = 0LL;
  DWORD2(v3) = 0;
  *(_QWORD *)&v3 = MINIPORT_HOOK_DRIVER::DeregisterAsync;
  *((_QWORD *)this + 13) = this;
  *((_OWORD *)this + 7) = v3;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 3) = 0LL;
  memset((char *)this + 32, 0, 0x28uLL);
  return this;
}
