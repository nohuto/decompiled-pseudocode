/*
 * XREFs of ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800B2854
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180075320 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007566C (-AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x18013BFE4 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x18013CAF0 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rbx
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
        v14 = -2147024362;
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
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 16, 1, &v16);
        v14 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
        v3 = v14;
        if ( v14 >= 0 )
          goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4Cu);
      return v3;
    }
    v15 = 2LL * v8;
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 2) + 16LL * v8 + 8));
    *(_OWORD *)(*((_QWORD *)this + 2) + 8 * v15) = v16;
    goto LABEL_7;
  }
  return v3;
}
