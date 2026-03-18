/*
 * XREFs of ?RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z @ 0x18005C97C
 * Callers:
 *     ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180037148 (-DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z @ 0x18005C6EC (-FindEntry@CWindowManager@@AEAAJ_KPEAPEAVCWindowAssociationMapEntry@@@Z.c)
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x18005C734 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWindowManager::RemoveRemoteAppVisual(CWindowManager *this, struct CVisual *a2)
{
  int Entry; // edi
  struct CWindowAssociationMapEntry *v5; // rsi
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  struct CWindowAssociationMapEntry *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  Entry = CWindowManager::FindEntry(this, *((_QWORD *)a2 + 28), &v11);
  if ( Entry >= 0 )
  {
    v5 = v11;
    v6 = *((_QWORD *)v11 + 2);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)v11 + 2));
      *((_QWORD *)v5 + 2) = 0LL;
    }
    if ( !*((_QWORD *)v5 + 1) )
    {
      v8 = *((_QWORD *)v5 + 3);
      if ( (v8 & 2) != 0 )
        v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v9 = *((_QWORD *)v5 + 3) & 1LL;
      if ( !v9 )
      {
        v10 = CWindowManager::RemoveEntry(this, *((_QWORD *)a2 + 28));
        Entry = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x88u);
      }
    }
  }
  return (unsigned int)Entry;
}
