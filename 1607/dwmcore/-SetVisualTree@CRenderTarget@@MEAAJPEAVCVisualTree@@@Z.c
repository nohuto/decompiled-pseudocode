/*
 * XREFs of ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800B8390
 * Callers:
 *     ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800756D0 (-SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800768A0 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800B9BB4 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CHwndRenderTargetRemoteApp@@MEAAJPEAVCVisualTree@@@Z @ 0x18012DBD0 (-SetVisualTree@CHwndRenderTargetRemoteApp@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x180166B60 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x1800BA5A4 (-RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 */

__int64 __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  unsigned int v3; // ebx
  CVisualTree *v4; // rcx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  CMILRefCountBase *v10; // rcx
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (CVisualTree *)*((_QWORD *)this + 16);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      if ( *((_BYTE *)this + 136) )
      {
        CVisualTree::RemoveTreeClient(v4, (CRenderTarget *)((char *)this + 120));
        *((_BYTE *)this + 136) = 0;
      }
      v10 = (CMILRefCountBase *)*((_QWORD *)this + 16);
      if ( v10 )
      {
        CMILRefCountBase::Release(v10);
        *((_QWORD *)this + 16) = 0LL;
      }
    }
    if ( a2 )
    {
      v11 = (char *)this + 120;
      v7 = *((_DWORD *)a2 + 218);
      v8 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v8 <= *((_DWORD *)a2 + 217) )
        {
          *(_QWORD *)(*((_QWORD *)a2 + 106) + 8LL * v7) = v11;
          *((_DWORD *)a2 + 218) = v8;
LABEL_8:
          *((_BYTE *)this + 136) = 1;
          *((_QWORD *)this + 16) = a2;
          _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
          return v3;
        }
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 848, 8u, 1, &v11);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
      }
      if ( (v3 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4Du);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC2u);
        return v3;
      }
      goto LABEL_8;
    }
  }
  return v3;
}
