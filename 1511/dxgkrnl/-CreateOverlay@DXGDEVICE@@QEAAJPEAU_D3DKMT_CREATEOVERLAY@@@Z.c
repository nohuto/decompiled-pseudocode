/*
 * XREFs of ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0139E30
 * Callers:
 *     DxgkCreateOverlay @ 0x1C01488D0 (DxgkCreateOverlay.c)
 * Callees:
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000B0FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C001D410 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C0148274 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateOverlay(DXGDEVICE *this, struct _D3DKMT_CREATEOVERLAY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  DXGOVERLAY *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGOVERLAY *v11; // rbx
  __int64 v12; // rax
  int v13; // edi
  DXGOVERLAY **v14; // rsi
  DXGOVERLAY *v15; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 3211LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (DXGOVERLAY *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x38uLL);
  v11 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = this;
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 0;
    *((_DWORD *)v6 + 8) = -1;
    *((_QWORD *)v6 + 5) = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v13 = DXGOVERLAY::Initialize(v11, a2);
    if ( v13 >= 0 )
    {
      v14 = (DXGOVERLAY **)((char *)this + 304);
      v15 = *v14;
      *(_QWORD *)v11 = *v14;
      *((_QWORD *)v11 + 1) = v14;
      if ( *((DXGOVERLAY ***)v15 + 1) != v14 )
        __fastfail(3u);
      *((_QWORD *)v15 + 1) = v11;
      *v14 = v11;
    }
    else
    {
      DXGOVERLAY::`scalar deleting destructor'(v11);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    v13 = -1073741801;
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v12);
  }
  return (unsigned int)v13;
}
