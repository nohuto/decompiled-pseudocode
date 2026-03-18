/*
 * XREFs of ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0020940
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0152AC4 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C000E4B4 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DXGDIAGNOSTICSWITHMUTEX *__fastcall DXGDIAGNOSTICSWITHMUTEX::DXGDIAGNOSTICSWITHMUTEX(
        DXGDIAGNOSTICSWITHMUTEX *this,
        unsigned int a2,
        enum _POOL_TYPE a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rax

  DXGDIAGNOSTICS::DXGDIAGNOSTICS(this, a2, a3);
  v4 = operator new[](0x28uLL, 0x4B677844u, (enum _POOL_TYPE)512);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_DWORD *)v4 + 7) = 47;
    *((_DWORD *)v4 + 8) = 32;
    v4[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *((_QWORD *)this + 3) = v4;
  if ( !v4 )
  {
    v5 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v5 + 24) = 283LL;
    WdLogEvent5_WdLowResource(v5);
  }
  return this;
}
