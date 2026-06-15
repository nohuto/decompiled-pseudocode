/*
 * XREFs of AudioVolumeDisconnect @ 0x1800324D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18001D2C0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall AudioVolumeDisconnect(CVolumeStrip **a1)
{
  CVolumeStrip *v1; // rbx
  __int64 (__fastcall *v3)(CVolumeStrip *); // rdi

  v1 = *a1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      25LL,
      &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
      v1);
  }
  v3 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v1 + 16LL);
  if ( v3 == CVolumeStrip::Release )
    CVolumeStrip::Release(v1);
  else
    v3(v1);
  *a1 = 0LL;
  return 0LL;
}
