/*
 * XREFs of ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00A436C
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4C38 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET@@I@Z @ 0x1C00A43F4 (-FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET@@I@Z.c)
 *     sub_1C00A68CC @ 0x1C00A68CC (sub_1C00A68CC.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall CCD_TOPOLOGY::LogFunctionalizePacket(CCD_TOPOLOGY *this, int a2)
{
  unsigned int v4; // ebp
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *v11; // rbx
  __int64 v13; // rax
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = 52 * *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) + 56;
  v5 = (struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET *)operator new[](v4, 0x63644356u, PagedPool);
  v10 = 0;
  v14 = v5;
  v11 = v5;
  if ( v5 )
  {
    CCD_TOPOLOGY::FillFunctionalizePacket(this, v5, v4);
    *((_DWORD *)v11 + 13) = a2;
    DxgkWriteDiagEntry(v11);
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v13 + 24) = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
    WdLogEvent5_WdLowResource(v13);
    v10 = -1073741801;
  }
  sub_1C00A68CC(&v14);
  return v10;
}
