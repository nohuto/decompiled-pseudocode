/*
 * XREFs of ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0135234
 * Callers:
 *     DxgkCreateOverlay @ 0x1C0142F50 (DxgkCreateOverlay.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000A1EC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C001D2A0 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0142860 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateOverlay(DXGDEVICE *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  DXGOVERLAY *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DXGOVERLAY *v14; // rbx
  __int64 v15; // rax
  int v16; // edi
  DXGOVERLAY **v17; // rsi
  DXGOVERLAY *v18; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 3181LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (DXGOVERLAY *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x38uLL);
  v14 = v9;
  if ( v9 )
  {
    *((_QWORD *)v9 + 2) = this;
    *(_QWORD *)v9 = 0LL;
    *((_QWORD *)v9 + 1) = 0LL;
    *((_DWORD *)v9 + 6) = 0;
    *((_DWORD *)v9 + 7) = 0;
    *((_DWORD *)v9 + 8) = -1;
    *((_QWORD *)v9 + 5) = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v16 = DXGOVERLAY::Initialize(v14, a2);
    if ( v16 >= 0 )
    {
      v17 = (DXGOVERLAY **)((char *)this + 304);
      v18 = *v17;
      *(_QWORD *)v14 = *v17;
      *((_QWORD *)v14 + 1) = v17;
      if ( *((DXGOVERLAY ***)v18 + 1) != v17 )
        __fastfail(3u);
      *((_QWORD *)v18 + 1) = v14;
      *v17 = v14;
    }
    else
    {
      DXGOVERLAY::`scalar deleting destructor'(v14);
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v16 = -1073741801;
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v15);
  }
  return (unsigned int)v16;
}
