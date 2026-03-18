/*
 * XREFs of ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x1800B6480
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800768A0 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180076D60 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x180166B60 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
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
  __int64 v14; // rbx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v6 = *((_DWORD *)this + 10);
    v7 = 0;
    *((_QWORD *)&v15 + 1) = a3;
    v8 = v6;
    *(_QWORD *)&v15 = a2;
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
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v11 <= *((_DWORD *)this + 9) )
        {
          *(_OWORD *)(*v9 + 16 * v10) = v15;
          *((_DWORD *)this + 10) = v11;
LABEL_7:
          _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
          return v3;
        }
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 0x10u, 1, &v15);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      }
      if ( (v3 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4Cu);
        return v3;
      }
      goto LABEL_7;
    }
    v14 = 2LL * v8;
    CMILRefCountBase::Release(*(CMILRefCountBase **)(*((_QWORD *)this + 2) + 16LL * v8 + 8));
    *(_OWORD *)(*((_QWORD *)this + 2) + 8 * v14) = v15;
    goto LABEL_7;
  }
  return v3;
}
