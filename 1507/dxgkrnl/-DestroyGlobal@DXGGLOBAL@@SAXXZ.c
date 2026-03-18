/*
 * XREFs of ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C013F010
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C00D78AC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     DxgkUnload @ 0x1C013C730 (DxgkUnload.c)
 *     DriverEntry @ 0x1C0188018 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C013EAAC (--1DXGGLOBAL@@AEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::DestroyGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  struct DXGGLOBAL *v7; // rbx

  v4 = 0;
  v5 = 104LL;
  do
  {
    v6 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(a1, a2, a3, a4) + v5);
    (*(void (**)(void))(*(_QWORD *)(v6 + 8) + 16LL))();
    ++v4;
    v5 += 8LL;
  }
  while ( v4 < 2 );
  v7 = DXGGLOBAL::m_pGlobal;
  if ( DXGGLOBAL::m_pGlobal )
  {
    DXGGLOBAL::~DXGGLOBAL(DXGGLOBAL::m_pGlobal, a2, a3, a4);
    operator delete(v7);
    DXGGLOBAL::m_pGlobal = 0LL;
  }
}
