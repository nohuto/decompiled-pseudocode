/*
 * XREFs of ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004A90
 * Callers:
 *     DwmpRequestProcessShutdown @ 0x180004618 (DwmpRequestProcessShutdown.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x180004674 (DwmpRequestUnloadUserRegKeys.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180003620 (_guard_check_icall_nop.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003D40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003DE4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x1800048C8 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004C30 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004C60 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180005174 (-DisconnectIfDeferred@CPortClient@@QEAAXXZ.c)
 *     ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180005208 (-SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z.c)
 */

__int64 __fastcall CApiPortClient::SendRequest(CApiPortClient *this, unsigned int *a2, __int16 a3, int *a4)
{
  unsigned int v6; // ebx
  CApiPortClient *v7; // rcx
  CApiPortClient *v8; // rcx
  int IsConnected; // esi
  int v10; // eax
  volatile signed __int32 *v11; // rdi
  __int16 v12; // r9
  unsigned int v13; // ebp
  int v14; // eax
  int v15; // edx
  void *v17; // [rsp+20h] [rbp-48h]
  __int16 v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+80h] [rbp+18h] BYREF

  LOWORD(v19) = a3;
  v6 = -2144980991;
  EnterCriticalSection(&CriticalSection);
  IsConnected = CApiPortClient::IsConnected(v7);
  if ( !byte_18000C758 )
  {
    while ( 1 )
    {
      v10 = CApiPortClient::EnsureConnected(v8);
      v6 = v10;
      if ( v10 < 0 )
        break;
      v11 = (volatile signed __int32 *)*(&hObject + 1);
      if ( *(&hObject + 1) )
        _InterlockedAdd((volatile signed __int32 *)*(&hObject + 1) + 22, 1u);
      LeaveCriticalSection(&CriticalSection);
      v13 = CPortClient::SendComplexSyncRequest((CPortClient *)v11, *a2, a2, v12, v17, v18, &v19);
      if ( v11 && _InterlockedExchangeAdd(v11 + 22, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v11)(v11, 1LL);
      EnterCriticalSection(&CriticalSection);
      v8 = (CApiPortClient *)*(&hObject + 1);
      if ( *(&hObject + 1) && _InterlockedCompareExchange((volatile signed __int32 *)*(&hObject + 1) + 22, 1, 1) == 1 )
        CPortClient::DisconnectIfDeferred(v8);
      if ( v13 == -805306313 )
      {
        v14 = IsConnected--;
        if ( v14 > 0 )
          continue;
      }
      v10 = CApiPortClient::Translate(v13);
      v6 = v10;
      if ( v10 >= 0 )
      {
        *a4 = CApiPortClient::Translate(v19);
        goto LABEL_22;
      }
      if ( &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
      {
        MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xC6u);
        goto LABEL_22;
      }
      v15 = 198;
      goto LABEL_20;
    }
    if ( !&CApiPortClient::MILINSTRUMENTATIONHRESULTLIST )
    {
      v15 = 167;
LABEL_20:
      DoStackCapture(v10, v15);
      goto LABEL_22;
    }
    MilInstrumentationCheckHR(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xA7u);
  }
LABEL_22:
  LeaveCriticalSection(&CriticalSection);
  return v6;
}
