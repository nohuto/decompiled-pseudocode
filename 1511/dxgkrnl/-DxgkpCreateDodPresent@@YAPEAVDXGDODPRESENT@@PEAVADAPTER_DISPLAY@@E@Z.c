/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C00E4D24
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00DB25C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C00196A8 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C00E4DF4 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C00E50E0 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(struct ADAPTER_DISPLAY *a1, unsigned __int8 a2)
{
  unsigned __int8 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGDODPRESENT *v9; // rax
  unsigned int v10; // edi
  DXGDODPRESENT *v11; // rbx
  __int64 v13; // rax

  v4 = (unsigned __int8 *)operator new[](2408LL * *((unsigned int *)a1 + 26) + 136, 0x4B677844u, (POOL_TYPE)512);
  if ( v4 )
  {
    v9 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v4, a1, v4 + 136, a2);
    v10 = 0;
    v11 = v9;
    if ( !*(_DWORD *)v9 )
      return v11;
    while ( (int)BLTQUEUE::Startup((PVOID)(*((_QWORD *)v11 + 1) + 2408LL * v10)) >= 0 )
    {
      if ( ++v10 >= *(_DWORD *)v11 )
        return v11;
    }
    DXGDODPRESENT::`scalar deleting destructor'(v11);
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v13 + 24) = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdLowResource(v13);
  }
  return 0LL;
}
