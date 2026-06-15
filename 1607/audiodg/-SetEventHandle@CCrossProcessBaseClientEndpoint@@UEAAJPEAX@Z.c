/*
 * XREFs of ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140039570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x140017F4C (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x1400333D8 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x140033408 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x140033458 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140038450 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     WPP_SF_SD @ 0x1400399CC (WPP_SF_SD.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z @ 0x140039BF8 (-AudCPTraceLoggingErrorHelper@@YAXPEADIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::SetEventHandle(CCrossProcessBaseClientEndpoint *this, void *a2)
{
  int v2; // ebp
  int v5; // ebx
  void **v6; // rax
  void **v7; // rdi
  __int64 v8; // rdx
  _UNKNOWN **v9; // rcx
  int v10; // eax
  int v11; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 104) )
    goto LABEL_2;
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2147024809;
    goto LABEL_37;
  }
  if ( (*((_DWORD *)this + 38) & 0x40000) == 0 || *((_QWORD *)this + 9) == -4LL )
  {
LABEL_2:
    v5 = -2147418113;
  }
  else
  {
    v6 = (void **)operator new(0x10uLL);
    v7 = v6;
    if ( v6 )
    {
      v6[1] = 0LL;
      *v6 = &HandleSendReceiveClient::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v5 = HandleSendReceiveClient::Initialize(v7, (unsigned __int16 *)(*((_QWORD *)this + 9) + 4LL));
      v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SD(*((_QWORD *)WPP_GLOBAL_Control + 2), v5);
        v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( v5 >= 0 )
      {
        v10 = HandleSendReceiveClient::SendHandle((__int64)v7, v8, a2);
        v5 = v10;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xFu,
            (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids,
            v10);
        }
        if ( v5 == -2147023537 )
          v5 = -2004287484;
        if ( v5 >= 0 )
          *((_DWORD *)this + 104) = 1;
        v11 = HandleSendReceiveClient::CloseConnection((HandleSendReceiveClient *)v7);
        v9 = (_UNKNOWN **)WPP_GLOBAL_Control;
        v2 = v11;
      }
      if ( v5 == -2147023537 )
      {
        v5 = -2004287484;
      }
      else if ( v5 >= 0 && v2 < 0 )
      {
        v5 = v2;
        if ( v9 != &WPP_GLOBAL_Control && (*((_DWORD *)v9 + 7) & 0x80000) != 0 && *((_BYTE *)v9 + 25) >= 2u )
          WPP_SF_D((__int64)v9[2], 0x10u, (__int64)&WPP_98f64ba30fd033af17de3dc3e532c096_Traceguids, v2);
        AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::SetEventHandle", 0x1B3u, v2);
      }
    }
    else
    {
      v5 = -2147024882;
    }
    if ( v7 )
      HandleSendReceiveClient::`vector deleting destructor'((HandleSendReceiveClient *)v7, 1);
  }
LABEL_37:
  memset_0((void *)(*((_QWORD *)this + 9) + 4LL), 0, 0x80uLL);
  return (unsigned int)v5;
}
