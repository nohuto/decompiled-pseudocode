/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C015E9F8
 * Callers:
 *     DxgkGetDeviceState @ 0x1C00B1890 (DxgkGetDeviceState.c)
 * Callees:
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x1C0021B8C (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(LARGE_INTEGER *this, struct _D3DKMT_PRESENT_STATS_DWM *a2)
{
  struct _KMUTANT *QuadPart; // rbx
  union _LARGE_INTEGER v6; // [rsp+40h] [rbp+8h] BYREF

  QuadPart = (struct _KMUTANT *)this[7].QuadPart;
  KeWaitForSingleObject(QuadPart, Executive, 0, 0, 0LL);
  a2->PresentCount = this[8].LowPart;
  a2->PresentRefreshCount = this[8].HighPart;
  a2->SyncRefreshCount = this[9].LowPart;
  BLTQUEUE::UpdateVsyncCount((BLTQUEUE *)this, &v6);
  a2->PresentQPCTime.QuadPart = (__int64)(v6.QuadPart
                                        * a2->PresentRefreshCount
                                        * (unsigned __int64)(unsigned int)this[14].HighPart)
                              / this[14].LowPart;
  a2->SyncRefreshCount = this[23].LowPart;
  a2->SyncQPCTime = this[24];
  KeReleaseMutex(QuadPart, 0);
  return 0LL;
}
