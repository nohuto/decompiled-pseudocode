/*
 * XREFs of ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@@Z @ 0x180015E80
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180015D54 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClientArea::CloneVisualTree(CClientArea *this, struct CVisual **a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF
  struct CClientArea *v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 33);
  v3 = 0;
  v12 = 0;
  if ( v2 )
  {
    v6 = *(_QWORD *)(v2 + 24);
    if ( v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v6 + 296LL))(
             v6,
             *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
             &v12);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x82u);
      }
      else
      {
        v8 = *((_QWORD *)this + 2);
        v13 = 0LL;
        v9 = CClientArea::Create(*(struct IDwmChannel **)(v8 + 16), v12, &v13);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x86u);
        }
        else
        {
          *a2 = v13;
          v10 = CVisual::CloneVisualTree(this, a2);
          v3 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x8Du);
        }
      }
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 120LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
    v12);
  return v3;
}
