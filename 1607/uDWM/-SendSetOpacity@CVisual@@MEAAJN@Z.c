/*
 * XREFs of ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180020A10
 * Callers:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180020960 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?Unhide@CImage@@QEAAXN@Z @ 0x18006E904 (-Unhide@CImage@@QEAAXN@Z.c)
 *     ?Hide@CImage@@UEAAXXZ @ 0x18006E940 (-Hide@CImage@@UEAAXXZ.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18006F170 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SendSetOpacity(CVisual *this, double a2)
{
  __int64 v2; // rax
  int v4; // eax
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v10 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(**(_QWORD **)(v2 + 16) + 88LL))(
         *(_QWORD *)(v2 + 16),
         10LL,
         &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4DFu);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 944LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           v10,
           v5,
           0LL,
           0);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x4E6u);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 360LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
             v10);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4EBu);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 120LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
  return v6;
}
