/*
 * XREFs of ?SetDisplay@CDisplaySet@@IEAAXIPEAVCDisplay@@@Z @ 0x18012346C
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18008DFB0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CDisplaySet::SetDisplay(CDisplaySet *this, unsigned int a2, struct CDisplay *a3)
{
  __int64 v4; // rsi
  char v6; // al
  CMILRefCountBase *v7; // rcx

  v4 = a2;
  *((_DWORD *)a3 + 28) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 112LL);
  *((_DWORD *)a3 + 30) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 120LL);
  *((_DWORD *)a3 + 29) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 116LL);
  *((_DWORD *)a3 + 31) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 124LL);
  *((_DWORD *)a3 + 24) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 96LL);
  *((_DWORD *)a3 + 26) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 104LL);
  *((_DWORD *)a3 + 25) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 100LL);
  *((_DWORD *)a3 + 27) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 108LL);
  *((_DWORD *)a3 + 224) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 896LL);
  *((_QWORD *)a3 + 4) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 32LL);
  *((_BYTE *)a3 + 145) = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 145LL);
  v6 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 144LL);
  *((_QWORD *)a3 + 19) = 0LL;
  *((_BYTE *)a3 + 144) = v6;
  *((_BYTE *)a3 + 146) = 1;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a2) + 16LL) = 0LL;
  *((_QWORD *)a3 + 2) = this;
  v7 = *(CMILRefCountBase **)(*((_QWORD *)this + 6) + 8LL * a2);
  if ( v7 )
    CMILRefCountBase::Release(v7);
  *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v4) = a3;
  _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
}
