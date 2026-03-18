/*
 * XREFs of ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800AD390
 * Callers:
 *     ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x18007E0B0 (-SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800AD304 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x18013CAF0 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z @ 0x180076B7C (-RemoveTreeClient@CVisualTree@@QEAAJPEAVIVisualTreeClient@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderTarget::SetVisualTree(CRenderTarget *this, struct CVisualTree *a2)
{
  unsigned int v3; // edi
  CVisualTree *v4; // rcx
  unsigned int v6; // eax
  unsigned int v7; // edx
  CMILRefCountBase *v9; // rcx
  int v10; // eax
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (CVisualTree *)*((_QWORD *)this + 7);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      if ( *((_BYTE *)this + 64) )
      {
        CVisualTree::RemoveTreeClient(v4, (CRenderTarget *)((char *)this + 48));
        *((_BYTE *)this + 64) = 0;
      }
      v9 = (CMILRefCountBase *)*((_QWORD *)this + 7);
      if ( v9 )
      {
        CMILRefCountBase::Release(v9);
        *((_QWORD *)this + 7) = 0LL;
      }
    }
    if ( a2 )
    {
      v11 = (char *)this + 48;
      v6 = *((_DWORD *)a2 + 190);
      v7 = v6 + 1;
      if ( v6 + 1 < v6 )
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v7 <= *((_DWORD *)a2 + 189) )
        {
          *(_QWORD *)(*((_QWORD *)a2 + 92) + 8LL * v6) = v11;
          *((_DWORD *)a2 + 190) = v7;
LABEL_7:
          *((_BYTE *)this + 64) = 1;
          *((_QWORD *)this + 7) = a2;
          _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
          return v3;
        }
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 736, 8, 1, &v11);
        v3 = v10;
        if ( v10 >= 0 )
        {
LABEL_17:
          if ( (v3 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC2u);
            return v3;
          }
          goto LABEL_7;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x4Du);
      goto LABEL_17;
    }
  }
  return v3;
}
