/*
 * XREFs of ?Initialize@CVolumeProvider@@QEAAJXZ @ 0x18003D43C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003A328 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18003D250 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeProvider::Initialize(CVolumeProvider *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  int v2; // esi
  unsigned int v3; // r14d
  int v4; // eax
  __int64 v5; // rbx
  unsigned int v7; // [rsp+60h] [rbp+38h] BYREF
  int v8; // [rsp+64h] [rbp+3Ch]
  __int64 v9; // [rsp+68h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+48h] BYREF
  __int64 v11; // [rsp+78h] [rbp+50h] BYREF

  v8 = HIDWORD(this);
  v1 = g_pVolumeProvider;
  v11 = 0LL;
  v7 = 0;
  EnterCriticalSection(g_pVolumeProvider);
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         2LL,
         1LL,
         &v11);
  if ( v2 >= 0 )
  {
    v3 = 0;
    v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v7);
    if ( v7 )
    {
      while ( 1 )
      {
        v9 = 0LL;
        pv = 0LL;
        v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, v3, &v9);
        v5 = v9;
        v2 = v4;
        if ( v4 < 0 )
          break;
        v2 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 40LL))(v9, &pv);
        if ( v2 < 0 )
        {
          v5 = v9;
          break;
        }
        if ( (int)CVolumeProvider::CreateDeviceVolumeStrip(v1, (STRSAFE_PCNZWCH)pv, 0LL) < 0
          && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0xAu,
            (__int64)&WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
            v2);
        }
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        if ( ++v3 >= v7 )
          goto LABEL_11;
      }
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
LABEL_11:
  LeaveCriticalSection(v1);
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xBu,
      (__int64)&WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
      v2);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v2;
}
