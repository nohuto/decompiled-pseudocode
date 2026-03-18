/*
 * XREFs of ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800A871C
 * Callers:
 *     ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x1800A8AA0 (-MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x18004AC00 (-Release@CChannel@@UEAAKXZ.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800A88A8 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800A89CC (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 *     ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x180113968 (-DestroyKernelChannel@CConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180113B74 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CConnection::CreateKernelChannel(CConnection *this, struct CChannel **a2)
{
  unsigned int v3; // edi
  CChannel *v4; // rsi
  int v6; // ebx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  struct CChannel *v10; // rcx
  CConnection *v12; // rcx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+18h] BYREF
  struct CChannel *v15; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v13 = 0LL;
  v14 = 0;
  v4 = 0LL;
  v15 = 0LL;
  v6 = NtDCompositionCreateDwmChannel(&v14);
  if ( v6 < 0 )
  {
    v8 = v6 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB0u);
  }
  else
  {
    v3 = v14;
    v7 = CChannelTable::AssignChannelEntry((CConnection *)((char *)this + 16), v14, &v13);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB4u);
    }
    else
    {
      v9 = CChannel::Create(this, v3, &v15);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBCu);
        v4 = v15;
      }
      else
      {
        v10 = v15;
        *((_QWORD *)v13 + 1) = v15;
        _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
        v3 = 0;
        *a2 = v15;
      }
    }
  }
  if ( v8 < 0 && v3 )
  {
    CChannelTable::DestroyHandle((CConnection *)((char *)this + 16), v3);
    CConnection::DestroyKernelChannel(v12, v3);
  }
  if ( v4 )
    CChannel::Release(v4);
  return (unsigned int)v8;
}
