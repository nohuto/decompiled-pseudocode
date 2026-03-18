/*
 * XREFs of ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0021768
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C0008F90 (DxgNotifyDpcCB.c)
 * Callees:
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C0021928 (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C0021BA0 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x1C0021C98 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall DXGDODPRESENT::NotifyDpc(DXGDODPRESENT *this, ADAPTER_DISPLAY **a2)
{
  __int64 v2; // rsi
  unsigned __int64 i; // rdi
  unsigned int updated; // eax
  _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = _InterlockedExchange64((volatile __int64 *)this + 10, 0LL);
        (unsigned int)v2 < *(_DWORD *)this;
        v2 = (unsigned int)(v2 + 1) )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + v2 + 4, 0) )
    {
      updated = BLTQUEUE::UpdateVsyncCount((BLTQUEUE *)(*((_QWORD *)this + 1) + 2384LL * (unsigned int)v2), 0LL);
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(a2[247], (struct DXGADAPTER *)a2, v2, updated);
    }
    if ( (i & 3) != 0 )
    {
      v7.VidPnSourceId = v2;
      v7.ProgressId = ((unsigned __int8)i >> 1) & 1;
      DXGDODPRESENT::PresentDisplayOnlySetProgress(this, &v7);
    }
    i >>= 2;
  }
}
