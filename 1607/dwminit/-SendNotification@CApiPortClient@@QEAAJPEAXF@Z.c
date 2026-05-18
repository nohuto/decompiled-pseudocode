/*
 * XREFs of ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004CB8
 * Callers:
 *     DwmpUpdateUserSettings @ 0x180004778 (DwmpUpdateUserSettings.c)
 * Callees:
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003E40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004C6C (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800050B4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180005644 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180005670 (-SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800081B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::SendNotification(CApiPortClient *this, unsigned int *a2)
{
  unsigned int v3; // ebx
  CApiPortClient *v4; // rcx
  CApiPortClient *v5; // rcx
  int IsConnected; // edi
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  __int16 v9; // r9
  unsigned int v10; // esi
  int v11; // eax
  int v12; // edx

  v3 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  IsConnected = CApiPortClient::IsConnected(v4);
  if ( !byte_18000D778 )
  {
    while ( 1 )
    {
      v7 = CApiPortClient::EnsureConnected(v5);
      v3 = v7;
      if ( v7 < 0 )
        break;
      v8 = (volatile signed __int32 *)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 1u);
      LeaveCriticalSection(&CriticalSection);
      v10 = CPortClient::SendComplexAsyncRequest((CPortClient *)v8, *a2, a2, v9);
      if ( v8 && _InterlockedExchangeAdd(v8 + 22, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v8)(v8, 1LL);
      EnterCriticalSection(&CriticalSection);
      v5 = (CApiPortClient *)*(&hObject + 1);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 22, 1, 1) == 1 )
        CPortClient::DisconnectIfDeferred(v5);
      if ( v10 == -805306313 )
      {
        v11 = IsConnected--;
        if ( v11 > 0 )
          continue;
      }
      v7 = CApiPortClient::Translate(v10);
      v3 = v7;
      if ( v7 >= 0 )
        goto LABEL_21;
      if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
      {
        v12 = 140;
LABEL_16:
        DoStackCapture(v7, v12);
        goto LABEL_21;
      }
      MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x8Cu);
      goto LABEL_21;
    }
    if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
    {
      v12 = 115;
      goto LABEL_16;
    }
    MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x73u);
  }
LABEL_21:
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
