/*
 * XREFs of ?Reset@CContactManager@@QEAAJXZ @ 0x180008DB0
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002A034 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??1CContactManager@@QEAA@XZ @ 0x18007DA24 (--1CContactManager@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047610 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z @ 0x1800817B8 (-RemoveAt@-$DynArray@PEAVCTouchVisual@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x180081820 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z @ 0x1800818B0 (-RemoveAt@-$DynArray@UCStationaryAnimation@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x180081934 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800819F8 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CContactManager::Reset(CContactManager *this)
{
  unsigned __int64 *v2; // rsi
  __int64 result; // rax
  char *v4; // rsi
  char *v5; // rsi
  unsigned __int64 *v6; // rsi
  CContactManager *v7; // rcx
  unsigned __int64 *v8; // r14
  CContactManager *v9; // rcx
  unsigned __int64 *v10; // r14
  CContactManager *v11; // rcx
  unsigned __int64 *v12; // r14
  CContactManager *v13; // rcx
  unsigned __int64 *v14; // r14
  CContactManager *v15; // rcx
  unsigned __int64 *v16; // r14
  CContactManager *v17; // rcx
  unsigned __int64 *v18; // r14
  CContactManager *v19; // rcx
  unsigned __int64 *v20; // r14
  CContactManager *v21; // rcx
  unsigned __int64 ***v22; // r14
  unsigned __int64 *v23; // rsi
  CContactManager *v24; // rcx
  unsigned __int64 *v25; // r14
  CContactManager *v26; // rcx
  unsigned __int64 *v27; // r14
  CContactManager *v28; // rcx
  char *v29; // r14
  unsigned __int64 *v30; // rsi
  CContactManager *v31; // rcx
  char *v32; // r14
  unsigned __int64 *v33; // rsi
  CContactManager *v34; // rcx
  CContactManager *v35; // rcx

  while ( *((_DWORD *)this + 36) )
  {
    v6 = *(unsigned __int64 **)(*((_QWORD *)this + 15) + 16LL);
    if ( v6 )
    {
      (*(void (__fastcall **)(unsigned __int64 *))(*v6 + 184))(v6);
      CContactManager::RemoveFromTouchNode(v7, v6[34], (struct CVisual *)v6);
      CBaseObject::Release((CBaseObject *)v6);
    }
    DynArray<CStationaryAnimation,0>::RemoveAt((char *)this + 120, 0LL);
  }
  if ( *((_DWORD *)this + 20) )
  {
    v4 = (char *)this + 56;
    do
    {
      v8 = *(unsigned __int64 **)(*(_QWORD *)v4 + 48LL);
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD))(*v8 + 184))(*(_QWORD *)(*(_QWORD *)v4 + 48LL));
        CContactManager::RemoveFromTouchNode(v9, v8[34], (struct CVisual *)v8);
        CBaseObject::Release((CBaseObject *)v8);
      }
      v10 = *(unsigned __int64 **)(*(_QWORD *)v4 + 56LL);
      if ( v10 )
      {
        (*(void (__fastcall **)(_QWORD))(*v10 + 184))(*(_QWORD *)(*(_QWORD *)v4 + 56LL));
        CContactManager::RemoveFromTouchNode(v11, v10[34], (struct CVisual *)v10);
        CBaseObject::Release((CBaseObject *)v10);
      }
      v12 = *(unsigned __int64 **)(*(_QWORD *)v4 + 72LL);
      if ( v12 )
      {
        (*(void (__fastcall **)(_QWORD))(*v12 + 184))(*(_QWORD *)(*(_QWORD *)v4 + 72LL));
        CContactManager::RemoveFromTouchNode(v13, v12[34], (struct CVisual *)v12);
        CBaseObject::Release((CBaseObject *)v12);
      }
      v14 = *(unsigned __int64 **)(*(_QWORD *)v4 + 80LL);
      if ( v14 )
      {
        (*(void (__fastcall **)(_QWORD))(*v14 + 184))(*(_QWORD *)(*(_QWORD *)v4 + 80LL));
        CContactManager::RemoveFromTouchNode(v15, v14[34], (struct CVisual *)v14);
        CBaseObject::Release((CBaseObject *)v14);
      }
      v16 = *(unsigned __int64 **)(*(_QWORD *)v4 + 88LL);
      if ( v16 )
      {
        (*(void (__fastcall **)(_QWORD))(*v16 + 184))(*(_QWORD *)(*(_QWORD *)v4 + 88LL));
        CContactManager::RemoveFromTouchNode(v17, v16[34], (struct CVisual *)v16);
        CBaseObject::Release((CBaseObject *)v16);
      }
      v18 = *(unsigned __int64 **)(*(_QWORD *)v4 + 64LL);
      if ( v18 )
      {
        (*(void (__fastcall **)(_QWORD))(*v18 + 184))(*(_QWORD *)(*(_QWORD *)v4 + 64LL));
        CContactManager::RemoveFromTouchNode(v19, v18[34], (struct CVisual *)v18);
        CBaseObject::Release((CBaseObject *)v18);
      }
      v20 = *(unsigned __int64 **)(*(_QWORD *)v4 + 96LL);
      if ( v20 )
      {
        (*(void (__fastcall **)(_QWORD))(*v20 + 184))(*(_QWORD *)(*(_QWORD *)v4 + 96LL));
        CContactManager::RemoveFromTouchNode(v21, v20[34], (struct CVisual *)v20);
        CBaseObject::Release((CBaseObject *)v20);
      }
      DynArray<CTouchContact,0>::RemoveAt((char *)this + 56, 0LL);
    }
    while ( *((_DWORD *)this + 20) );
  }
  if ( *((_DWORD *)this + 44) )
  {
    v22 = (unsigned __int64 ***)((char *)this + 152);
    do
    {
      v23 = **v22;
      if ( v23 )
      {
        (*(void (__fastcall **)(unsigned __int64 *))(*v23 + 184))(**v22);
        CContactManager::RemoveFromTouchNode(v24, v23[34], (struct CVisual *)v23);
        CBaseObject::Release((CBaseObject *)v23);
      }
      DynArray<CTouchVisual *,0>::RemoveAt((char *)this + 152, 0LL);
    }
    while ( *((_DWORD *)this + 44) );
  }
  if ( *((_DWORD *)this + 28) )
  {
    v5 = (char *)this + 88;
    do
    {
      v25 = *(unsigned __int64 **)(*(_QWORD *)v5 + 8LL);
      if ( v25 )
      {
        (*(void (__fastcall **)(_QWORD))(*v25 + 184))(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
        CContactManager::RemoveFromTouchNode(v26, v25[34], (struct CVisual *)v25);
        CBaseObject::Release((CBaseObject *)v25);
      }
      v27 = *(unsigned __int64 **)(*(_QWORD *)v5 + 16LL);
      if ( v27 )
      {
        (*(void (__fastcall **)(_QWORD))(*v27 + 184))(*(_QWORD *)(*(_QWORD *)v5 + 16LL));
        CContactManager::RemoveFromTouchNode(v28, v27[34], (struct CVisual *)v27);
        CBaseObject::Release((CBaseObject *)v27);
      }
      DynArray<CPenContact,0>::RemoveAt((char *)this + 88, 0LL);
    }
    while ( *((_DWORD *)this + 28) );
  }
  if ( *((_DWORD *)this + 68) )
  {
    v29 = (char *)this + 248;
    do
    {
      v30 = *(unsigned __int64 **)(*(_QWORD *)v29 + 8LL);
      if ( v30 )
      {
        (*(void (__fastcall **)(_QWORD))(*v30 + 184))(*(_QWORD *)(*(_QWORD *)v29 + 8LL));
        CContactManager::RemoveFromTouchNode(v31, v30[34], (struct CVisual *)v30);
        CBaseObject::Release((CBaseObject *)v30);
      }
      DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 248, 0LL);
    }
    while ( *((_DWORD *)this + 68) );
  }
  if ( *((_DWORD *)this + 76) )
  {
    v32 = (char *)this + 280;
    do
    {
      v33 = *(unsigned __int64 **)(*(_QWORD *)v32 + 8LL);
      if ( v33 )
      {
        (*(void (__fastcall **)(_QWORD))(*v33 + 184))(*(_QWORD *)(*(_QWORD *)v32 + 8LL));
        CContactManager::RemoveFromTouchNode(v34, v33[34], (struct CVisual *)v33);
        CBaseObject::Release((CBaseObject *)v33);
      }
      DynArray<CIconicBitmapPending,0>::RemoveAt((char *)this + 280, 0LL);
    }
    while ( *((_DWORD *)this + 76) );
  }
  v2 = (unsigned __int64 *)*((_QWORD *)this + 39);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*v2 + 184))(*((_QWORD *)this + 39));
    CContactManager::RemoveFromTouchNode(v35, v2[34], (struct CVisual *)v2);
    CBaseObject::Release((CBaseObject *)v2);
  }
  result = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  return result;
}
