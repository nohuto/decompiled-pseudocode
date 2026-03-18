/*
 * XREFs of DestroyProcessHidRequests @ 0x1C0129400
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C0129430 (FreeProcessHidTable.c)
 */

__int64 __fastcall DestroyProcessHidRequests(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterDeviceInfoListCrit_(a1);
  v2 = *(_QWORD *)(a1 + 776);
  *(_QWORD *)(a1 + 776) = 0LL;
  FreeProcessHidTable(v2);
  return LeaveDeviceInfoListCrit_(v4, v3);
}
