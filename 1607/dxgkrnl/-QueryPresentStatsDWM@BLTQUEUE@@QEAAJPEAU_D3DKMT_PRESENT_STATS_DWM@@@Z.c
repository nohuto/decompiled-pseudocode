/*
 * XREFs of ?QueryPresentStatsDWM@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0184340
 * Callers:
 *     ?QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z @ 0x1C0143BF4 (-QueryLastCompletedPresentIdDWM@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS_DWM@@@Z.c)
 * Callees:
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x1C0028694 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::QueryPresentStatsDWM(BLTQUEUE *this, struct _D3DKMT_PRESENT_STATS_DWM *a2)
{
  union _LARGE_INTEGER v5; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject((char *)this + 104, Executive, 0, 0, 0LL);
  a2->PresentCount = *((_DWORD *)this + 40);
  a2->PresentRefreshCount = *((_DWORD *)this + 41);
  a2->SyncRefreshCount = *((_DWORD *)this + 42);
  BLTQUEUE::UpdateVsyncCount(this, &v5);
  a2->PresentQPCTime.QuadPart = (__int64)(v5.QuadPart
                                        * a2->PresentRefreshCount
                                        * (unsigned __int64)*((unsigned int *)this + 53))
                              / *((unsigned int *)this + 52);
  a2->SyncRefreshCount = *((_DWORD *)this + 70);
  a2->SyncQPCTime.QuadPart = *((_QWORD *)this + 36);
  KeReleaseMutex((PRKMUTEX)((char *)this + 104), 0);
  return 0LL;
}
