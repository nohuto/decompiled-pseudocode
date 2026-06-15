/*
 * XREFs of AudioVolumeAddMasterVolumeNotification @ 0x180032340
 * Callers:
 *     <none>
 * Callees:
 *     ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x18001D188 (-AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall AudioVolumeAddMasterVolumeNotification(CVolumeStrip **a1)
{
  CVolumeStrip *v1; // rdi
  RPC_STATUS v2; // eax
  int v3; // ebx
  unsigned int Pid; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v3 = v2;
  if ( v2 > 0 )
    v3 = (unsigned __int16)v2 | 0x80070000;
  if ( v3 < 0 || (v3 = CVolumeStrip::AddVolumeClientNotification(v1, Pid), v3 < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Bu,
        (__int64)&WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
        v3);
    }
  }
  return (unsigned int)v3;
}
