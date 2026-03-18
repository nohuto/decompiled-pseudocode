/*
 * XREFs of ?SetPaperTextureBitmap@CPencil@@AEAAJPEAVCResource@@PEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18014DE78
 * Callers:
 *     ?ProcessBasicStateUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_BASICSTATEUPDATE@@@Z @ 0x18010CAA0 (-ProcessBasicStateUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_BASICSTATEUPDATE@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPencil::SetPaperTextureBitmap(
        CPencil *this,
        struct CResource *a2,
        struct CCompositionSurfaceBitmap **a3)
{
  unsigned int v3; // ebx
  int v7; // eax

  v3 = 0;
  if ( a2 != *a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 92LL) )
    {
      v3 = -2003303421;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x146u);
      return v3;
    }
    v7 = CResource::RegisterNotifier(this, a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x149u);
    }
    else
    {
LABEL_8:
      CResource::UnRegisterNotifierInternal(this, *a3);
      *a3 = a2;
    }
  }
  return v3;
}
