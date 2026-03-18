/*
 * XREFs of ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180075548
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180070E50 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180070E8C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180074110 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x18012C1A4 (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::PreRender(CVisualTree **this, char a2)
{
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned int v6; // edi
  CVisualTree *v7; // rcx
  CVisualTree *v8; // rcx
  __int64 v9; // rdx
  char v10; // si
  __int64 v11; // rdx
  CDirtyRegion *v13; // r11
  CDirtyRegion *v14; // r11
  _QWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF

  v4 = (__int64 (*)(void))*((_QWORD *)*this + 32);
  if ( (char *)v4 == (char *)CHwndRenderTarget::EnsureRenderTarget )
    v5 = CHwndRenderTarget::EnsureRenderTarget((CHwndRenderTarget *)this);
  else
    v5 = v4();
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x275u);
  }
  else
  {
    v7 = this[20];
    if ( !v7 || *((_BYTE *)this + 751) || *((_BYTE *)this + 749) || *((_BYTE *)this + 752) && !a2 )
      goto LABEL_22;
    if ( !this[22] && this[16] )
    {
      (*(void (__fastcall **)(CVisualTree *, _QWORD *))(*(_QWORD *)v7 + 64LL))(v7, v15);
      CVisualTree::PreCompute(this[16]);
    }
    if ( !this[23] )
    {
LABEL_22:
      *((_BYTE *)this + 745) = 0;
    }
    else
    {
      v8 = this[20];
      *((_BYTE *)this + 745) = 1;
      if ( (*(int (__fastcall **)(CVisualTree *, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v8 + 104LL))(v8, v15, 0LL, 0LL) >= 0 )
      {
        v10 = 0;
        if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
        {
          v9 = 0LL;
          if ( HIDWORD(qword_1801F0084) )
          {
            while ( *(_QWORD *)(qword_1801F0070 + 12 * v9) != v15[0] )
            {
              v9 = (unsigned int)(v9 + 1);
              if ( (unsigned int)v9 >= HIDWORD(qword_1801F0084) )
                goto LABEL_14;
            }
            v10 = 1;
          }
        }
LABEL_14:
        if ( v10 != (*(unsigned __int8 (__fastcall **)(CVisualTree *, __int64))(*(_QWORD *)this[20] + 168LL))(
                      this[20],
                      v9) )
        {
          LOBYTE(v11) = v10;
          (*(void (__fastcall **)(CVisualTree *, __int64))(*(_QWORD *)this[20] + 160LL))(this[20], v11);
          CDirtyRegion::SetFullDirty(this[23]);
        }
      }
      if ( *(_BYTE *)(*((_QWORD *)this[2] + 4) + 111LL) )
        CDirtyRegion::SetFullDirty(this[23]);
      if ( *((_DWORD *)this[2] + 306) && !CDirtyRegion::IsEmpty(this[23]) )
      {
        CDirtyRegion::SetRedrawRects(v13);
        CDirtyRegion::SetFullDirty(v14);
      }
    }
  }
  return v6;
}
