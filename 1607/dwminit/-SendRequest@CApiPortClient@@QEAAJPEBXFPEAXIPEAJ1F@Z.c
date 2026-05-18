/*
 * XREFs of ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x180004E1C
 * Callers:
 *     DwmpRequestProcessShutdown @ 0x180004748 (DwmpRequestProcessShutdown.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x1800047A8 (DwmpRequestUnloadUserRegKeys.c)
 * Callees:
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003E40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004C6C (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800050B4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180005644 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x180005690 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800081B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendRequest(
        CApiPortClient *this,
        unsigned int *a2,
        __int16 a3,
        void *a4,
        unsigned int a5,
        int *a6,
        void *a7,
        unsigned int a8)
{
  unsigned int v9; // ebx
  const struct reg_FeatureDescriptor *v10; // rcx
  CApiPortClient *v11; // rcx
  int v12; // eax
  volatile signed __int32 *v13; // rbx
  __int16 v14; // r9
  unsigned int v15; // esi
  CPortClient *v16; // rcx
  unsigned int v17; // ecx
  int v18; // edx
  CApiPortClient *v19; // rcx
  int IsConnected; // esi
  volatile signed __int32 *v21; // rbx
  __int16 v22; // r9
  unsigned int v23; // ebp
  int v24; // eax
  void *v26; // [rsp+20h] [rbp-48h]
  unsigned int v27; // [rsp+20h] [rbp-48h]
  unsigned int v28; // [rsp+28h] [rbp-40h]
  void *v29; // [rsp+30h] [rbp-38h]
  __int16 v30; // [rsp+38h] [rbp-30h]
  int v31; // [rsp+80h] [rbp+18h] BYREF

  LOWORD(v31) = a3;
  v9 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  if ( byte_18000D778 )
    goto LABEL_43;
  if ( !EvaluateCurrentState(v10) )
  {
    IsConnected = CApiPortClient::IsConnected(v11);
    while ( 1 )
    {
      v12 = CApiPortClient::EnsureConnected(v19);
      v9 = v12;
      if ( v12 < 0 )
        break;
      v21 = (volatile signed __int32 *)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 1u);
      LeaveCriticalSection(&CriticalSection);
      v23 = CPortClient::SendComplexSyncRequest((CPortClient *)v21, *a2, a2, v22, v26, v28, v29, v30, (int *)&a8);
      if ( v21 && _InterlockedExchangeAdd(v21 + 22, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v21)(v21, 1LL);
      EnterCriticalSection(&CriticalSection);
      v19 = (CApiPortClient *)*(&hObject + 1);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 22, 1, 1) == 1 )
        CPortClient::DisconnectIfDeferred(v19);
      if ( v23 == -805306313 )
      {
        v24 = IsConnected--;
        if ( v24 > 0 )
          continue;
      }
      v12 = CApiPortClient::Translate(v23);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v17 = a8;
        goto LABEL_35;
      }
      if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
      {
        v18 = 247;
        goto LABEL_16;
      }
      v27 = 247;
      goto LABEL_42;
    }
    if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
    {
      v18 = 214;
      goto LABEL_16;
    }
    v27 = 214;
    goto LABEL_42;
  }
  v12 = CApiPortClient::EnsureConnected(v11);
  v9 = v12;
  if ( v12 < 0 )
  {
    if ( &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
    {
      MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0xADu);
      goto LABEL_43;
    }
    v18 = 173;
    goto LABEL_16;
  }
  v13 = (volatile signed __int32 *)*(&hObject + 1);
  if ( *(&hObject + 1) )
    _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 1u);
  LeaveCriticalSection(&CriticalSection);
  v15 = CPortClient::SendComplexSyncRequest((CPortClient *)v13, *a2, a2, v14, v26, v28, v29, v30, &v31);
  if ( v13 && _InterlockedExchangeAdd(v13 + 22, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v13)(v13, 1LL);
  EnterCriticalSection(&CriticalSection);
  v16 = (CPortClient *)*(&hObject + 1);
  if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 22, 1, 1) == 1 )
    CPortClient::DisconnectIfDeferred(v16);
  v12 = CApiPortClient::Translate(v15);
  v9 = v12;
  if ( v12 < 0 )
  {
    if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
    {
      v18 = 202;
LABEL_16:
      DoStackCapture(v12, v18);
      goto LABEL_43;
    }
    v27 = 202;
LABEL_42:
    MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, v27);
    goto LABEL_43;
  }
  v17 = v31;
LABEL_35:
  *a6 = CApiPortClient::Translate(v17);
LABEL_43:
  LeaveCriticalSection(&CriticalSection);
  return v9;
}
