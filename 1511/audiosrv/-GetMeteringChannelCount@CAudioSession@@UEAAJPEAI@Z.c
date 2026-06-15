/*
 * XREFs of ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x180073EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z @ 0x18007CFDC (-GetMeteringChannelCount@CAudioStream@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall CAudioSession::GetMeteringChannelCount(CAudioSession *this, unsigned int *a2)
{
  TraceLoggingHProvider v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // edi
  unsigned __int64 i; // rsi
  LPCRITICAL_SECTION v9; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+28h] [rbp-20h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, 0LL);
    v4 = WPP_GLOBAL_Control;
  }
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
    for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
    {
      if ( (int)CAudioStream::GetMeteringChannelCount(*(CAudioStream **)(*((_QWORD *)this + 12) + 8 * i), &v11) >= 0
        && v11 > v6 )
      {
        v6 = v11;
      }
    }
    if ( v10 )
      ATL::CCritSecLock::Unlock(&v9);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x37u,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        v6);
    }
    *a2 = v6;
  }
  else
  {
    v5 = -2147467261;
    if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v4 + 28) & 0x40) != 0
      && *((_BYTE *)v4 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v4 + 2), 0x38u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, -2147467261);
    }
  }
  return v5;
}
