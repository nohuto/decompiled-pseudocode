/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180074BE0
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180073444 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180020960 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x180074050 (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180074ABC (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18007EDE4 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180080C90 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(__int64 this, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // r12
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rbx
  int updated; // eax
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // r8
  int started; // eax
  int v20; // eax
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  unsigned int v24; // [rsp+48h] [rbp-8h]
  struct CWindowData *MDIOwner; // [rsp+90h] [rbp+40h] BYREF
  struct CWindowData **p_MDIOwner; // [rsp+98h] [rbp+48h] BYREF
  char v27; // [rsp+A0h] [rbp+50h]

  v27 = a3;
  v3 = 0;
  v5 = this;
  v24 = 0;
  v6 = 0;
  v23 = 0LL;
  v7 = 0;
  v8 = 0;
  v22 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v9 = v22;
    do
    {
      MDIOwner = CWindowData::GetMDIOwner(*(CWindowData **)(*(_QWORD *)a2 + 8LL * v8));
      if ( MDIOwner )
      {
        this = v3 + 1;
        if ( (unsigned int)this >= v3 )
        {
          if ( (unsigned int)this > v7 )
          {
            p_MDIOwner = &MDIOwner;
            v11 = DynArrayImpl<0>::Grow((__int64)&v22, 8u, 1, 0, (unsigned __int64 *)&p_MDIOwner);
            v9 = v22;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xC0u);
              v3 = v24;
            }
            else
            {
              this = 8 * v24;
              v3 = ++v24;
              *(_QWORD *)(this + v22) = *p_MDIOwner;
            }
            v7 = HIDWORD(v23);
          }
          else
          {
            v10 = v3++;
            v24 = this;
            *(_QWORD *)(v9 + 8 * v10) = MDIOwner;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
      }
      ++v8;
    }
    while ( v8 < *(_DWORD *)(a2 + 24) );
    a3 = v27;
  }
  v12 = *(_DWORD *)(v5 + 344) - 1;
  v13 = v12;
  if ( v12 < 0 )
  {
LABEL_35:
    CLivePreview::_ShowHideImmersiveBackground((CLivePreview *)v5);
    goto LABEL_36;
  }
  v14 = 48LL * v12;
  while ( 1 )
  {
    if ( a3 )
    {
      this = *(_QWORD *)(v5 + 320);
      if ( !*(_DWORD *)(v14 + this + 40) )
      {
        updated = CVisual::UpdateOpacity(*(CVisual **)(v14 + this));
        v6 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x1F4u);
          goto LABEL_36;
        }
        goto LABEL_31;
      }
    }
    v16 = *(_QWORD *)(v5 + 320);
    if ( CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v14 + v16 + 24))
      || CLivePreview::_ContainsWindow(this, (__int64)&v22, v17)
      || CLivePreview::_ContainsWindow(this, a2, *(_QWORD *)(v14 + v16 + 32))
      || CLivePreview::_ContainsWindow(this, (__int64)&v22, v18) )
    {
      break;
    }
    if ( !*(_DWORD *)(v14 + v16 + 40) )
    {
      started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v14 + v16), 3LL);
      v6 = started;
      if ( started < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x209u);
        goto LABEL_36;
      }
      *(_DWORD *)(v14 + *(_QWORD *)(v5 + 320) + 40) = 1;
    }
LABEL_31:
    v14 -= 48LL;
    if ( --v13 < 0 )
      goto LABEL_35;
    a3 = v27;
  }
  if ( *(_DWORD *)(v14 + v16 + 40) != 1 )
    goto LABEL_31;
  v20 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v14 + v16), 4LL);
  v6 = v20;
  if ( v20 >= 0 )
  {
    *(_DWORD *)(v14 + *(_QWORD *)(v5 + 320) + 40) = 0;
    goto LABEL_31;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x200u);
LABEL_36:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v22);
  return v6;
}
