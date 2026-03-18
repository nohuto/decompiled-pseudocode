/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C00F7D14
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00F66C0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C001ECFC (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C00CF074 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C00F7DA8 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(struct ADAPTER_DISPLAY *a1, unsigned __int8 a2)
{
  unsigned __int8 *v4; // rax
  __int64 v5; // rcx
  DXGDODPRESENT *v6; // rax
  unsigned int v7; // edi
  DXGDODPRESENT *v8; // rbx
  __int64 v10; // rax

  v4 = (unsigned __int8 *)operator new[](2632LL * *((unsigned int *)a1 + 20) + 136, 0x4B677844u, (POOL_TYPE)512);
  if ( v4 )
  {
    v6 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v4, a1, v4 + 136, a2);
    v7 = 0;
    v8 = v6;
    if ( !*(_DWORD *)v6 )
      return v8;
    while ( (int)BLTQUEUE::Startup((char *)(*((_QWORD *)v8 + 1) + 2632LL * v7)) >= 0 )
    {
      if ( ++v7 >= *(_DWORD *)v8 )
        return v8;
    }
    DXGDODPRESENT::`scalar deleting destructor'(v8);
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)a1 + 2);
    WdLogEvent5_WdLowResource(v10);
  }
  return 0LL;
}
