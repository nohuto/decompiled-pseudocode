/*
 * XREFs of ?CreateInstance@CTransportControlRouterWorkItem@@SAJKPEBGPEAPEAVIPBMWorkItem@@@Z @ 0x1800A6CD8
 * Callers:
 *     PbmAllowMediaPlaybackForApp @ 0x1800A0ED8 (PbmAllowMediaPlaybackForApp.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??_GCTransportControlRouterWorkItem@@UEAAPEAXI@Z @ 0x18002D150 (--_GCTransportControlRouterWorkItem@@UEAAPEAXI@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z @ 0x1800A6DC0 (-Initialize@CTransportControlRouterWorkItem@@IEAAJPEBG@Z.c)
 */

__int64 __fastcall CTransportControlRouterWorkItem::CreateInstance(
        int a1,
        const unsigned __int16 *a2,
        struct IPBMWorkItem **a3)
{
  CTransportControlRouterWorkItem *v6; // rax
  CTransportControlRouterWorkItem *v7; // rbx
  int v8; // edi

  v6 = (CTransportControlRouterWorkItem *)operator new(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = 0LL;
    *(_QWORD *)v6 = &CTransportControlRouterWorkItem::`vftable';
    *((_DWORD *)v6 + 2) = a1;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    if ( a2 )
    {
      v8 = CTransportControlRouterWorkItem::Initialize(v7, a2);
      if ( v8 >= 0 )
      {
        *a3 = v7;
        v7 = 0LL;
      }
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v7 )
    CTransportControlRouterWorkItem::`scalar deleting destructor'(v7, 1);
  if ( v8 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Du,
      (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
