/*
 * XREFs of ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C0065BC0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006646C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     __BmlGetPathModalityForAdapter_::_8_::_AUTO::__AUTO @ 0x1C0062D84 (__BmlGetPathModalityForAdapter_--_8_--_AUTO--__AUTO.c)
 *     ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET@@I@Z @ 0x1C0065C48 (-FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET@@I@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CCD_TOPOLOGY::LogFunctionalizePacket(CCD_TOPOLOGY *this, int a2)
{
  unsigned int v4; // ebp
  void *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  struct _DXGK_DIAG_HEADER *v8; // rbx
  __int64 v10; // rax
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 52 * *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) + 56;
  v5 = operator new[](v4, 0x63644356u, PagedPool);
  v7 = 0;
  v11 = v5;
  v8 = (struct _DXGK_DIAG_HEADER *)v5;
  if ( v5 )
  {
    CCD_TOPOLOGY::FillFunctionalizePacket(this, (struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *)v5, v4);
    *((_DWORD *)v8 + 13) = a2;
    DxgkWriteDiagEntry(v8);
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v10 + 24) = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    WdLogEvent5_WdLowResource(v10);
    v7 = -1073741801;
  }
  _BmlGetPathModalityForAdapter_::_8_::_AUTO::__AUTO(&v11);
  return v7;
}
