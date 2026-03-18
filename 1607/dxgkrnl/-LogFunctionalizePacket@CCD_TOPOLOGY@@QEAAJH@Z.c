/*
 * XREFs of ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C008C75C
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET@@I@Z @ 0x1C008C7EC (-FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET@@I@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CCD_TOPOLOGY::LogFunctionalizePacket(CCD_TOPOLOGY *this, int a2)
{
  unsigned int v4; // ebp
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *v8; // rbx
  __int64 v10; // rax

  v4 = 52 * *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) + 56;
  v5 = (struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *)operator new(v4, 0x63644356u, PagedPool);
  v7 = 0;
  v8 = v5;
  if ( v5 )
  {
    CCD_TOPOLOGY::FillFunctionalizePacket(this, v5, v4);
    *((_DWORD *)v8 + 13) = a2;
    DxgkWriteDiagEntry(v8);
    operator delete(v8);
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v10 + 24) = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    WdLogEvent5_WdLowResource(v10);
    return (unsigned int)-1073741801;
  }
  return v7;
}
