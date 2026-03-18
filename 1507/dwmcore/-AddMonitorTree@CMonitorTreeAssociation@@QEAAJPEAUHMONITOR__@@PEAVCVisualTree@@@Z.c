/*
 * XREFs of ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18006091C
 * Callers:
 *     ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800496E0 (-AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180092890 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ @ 0x1801262F8 (-EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?SetVisualTree@CAnalogRenderTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x1801276A0 (-SetVisualTree@CAnalogRenderTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::AddMonitorTree(
        CMonitorTreeAssociation *this,
        HMONITOR a2,
        struct CVisualTree *a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v13; // rbx
  int v14; // eax
  int v15; // ebx
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 10);
    v7 = 0;
    *((_QWORD *)&v16 + 1) = a3;
    v8 = v6;
    *(_QWORD *)&v16 = a2;
    if ( v6 )
    {
      while ( *(HMONITOR *)(*((_QWORD *)this + 2) + 16LL * v7) != a2 )
      {
        if ( ++v7 >= v6 )
          goto LABEL_3;
      }
      v8 = v7;
    }
LABEL_3:
    if ( v8 >= v6 )
    {
      v9 = (_QWORD *)((char *)this + 16);
      v10 = *((unsigned int *)this + 10);
      v11 = v10 + 1;
      if ( (int)v10 + 1 < (unsigned int)v10 )
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v3 = -2147024362;
      }
      else
      {
        if ( v11 <= *((_DWORD *)this + 9) )
        {
          *(_OWORD *)(*v9 + 16 * v10) = v16;
          *((_DWORD *)this + 10) = v11;
LABEL_7:
          _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
          return v3;
        }
        v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 0x10u, 1, &v16);
        v15 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
        v3 = v15;
        if ( v15 >= 0 )
          goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x4Cu);
      return v3;
    }
    v13 = 2LL * v8;
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 2) + 16LL * v8 + 8));
    *(_OWORD *)(*((_QWORD *)this + 2) + 8 * v13) = v16;
    goto LABEL_7;
  }
  return v3;
}
