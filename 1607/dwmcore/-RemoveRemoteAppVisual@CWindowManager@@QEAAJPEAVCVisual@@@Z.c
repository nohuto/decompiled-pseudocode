/*
 * XREFs of ?RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z @ 0x1800AE154
 * Callers:
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18004F8E0 (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1800ADECC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x1800ADF14 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowManager::RemoveRemoteAppVisual(CWindowManager *this, struct CVisual *a2)
{
  __int64 TopLevelWindow; // rax
  int Entry; // ebx
  struct CWindowAssociationMapEntry *v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  struct CWindowAssociationMapEntry *v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  TopLevelWindow = CVisual::GetTopLevelWindow(a2);
  Entry = CWindowManager::FindEntry(this, TopLevelWindow, &v13);
  if ( Entry >= 0 )
  {
    v6 = v13;
    v7 = *((_QWORD *)v13 + 2);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      *((_QWORD *)v6 + 2) = 0LL;
    }
    if ( !*((_QWORD *)v6 + 1) )
    {
      v9 = *((_QWORD *)v6 + 3);
      if ( (v9 & 2) != 0 )
        v10 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v10 = *((_QWORD *)v6 + 3) & 1LL;
      if ( !v10 )
      {
        v11 = CVisual::GetTopLevelWindow(a2);
        v12 = CWindowManager::RemoveEntry(this, v11);
        Entry = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x88u);
      }
    }
  }
  return (unsigned int)Entry;
}
