/*
 * XREFs of ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800097E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x180009DB8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800395C4 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::SendResponse(CaptureBitsResponse *this, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  CLegacySurfaceManager *v6; // rcx
  _DWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]

  v8[1] = 0;
  v8[0] = 2;
  v9 = 0LL;
  v10 = 0LL;
  HIDWORD(v10) = *((_DWORD *)this + 26);
  v11 = a2;
  if ( a2 >= 0 )
  {
    v9 = *((_QWORD *)this + 16);
    LODWORD(v10) = *((_DWORD *)this + 36);
  }
  v4 = CChannelContext::PostMessageToChannel(*((CChannelContext **)this + 6), (const struct MIL_MESSAGE *)v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xA5u);
  }
  else if ( a2 >= 0 )
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  v6 = (CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 96LL);
  *((_BYTE *)this + 33) = 1;
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(v6);
  return v5;
}
