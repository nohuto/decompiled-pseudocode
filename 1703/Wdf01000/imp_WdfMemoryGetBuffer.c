/*
 * XREFs of imp_WdfMemoryGetBuffer @ 0x1C0037530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x1C007FEE0 (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfMemoryGetBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Memory,
        unsigned __int64 *BufferSize)
{
  __int64 v5; // rcx
  unsigned __int16 *flags; // rdi
  IFxMemory v7; // rax
  _FX_DRIVER_GLOBALS *(__fastcall *GetDriverGlobals)(IFxMemory *); // rax
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *v14; // [rsp+20h] [rbp-48h]
  IFxMemory **p_pMemory; // [rsp+50h] [rbp-18h] BYREF
  __int16 v16; // [rsp+58h] [rbp-10h]
  __int16 v17; // [rsp+5Ah] [rbp-Eh]
  IFxMemory *pMemory; // [rsp+78h] [rbp+10h] BYREF

  if ( !Memory )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x100AuLL);
  LOWORD(v5) = 0;
  flags = (unsigned __int16 *)(~Memory & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Memory & 1) != 0 )
  {
    v5 = *flags;
    flags = (unsigned __int16 *)((char *)flags - v5);
  }
  if ( flags[4] == 4106 )
  {
    pMemory = (IFxMemory *)flags;
  }
  else
  {
    pMemory = 0LL;
    p_pMemory = &pMemory;
    v7.__vftable = *(IFxMemory_vtbl **)flags;
    v17 = v5;
    v16 = 4106;
    GetDriverGlobals = v7.GetDriverGlobals;
    if ( (char *)GetDriverGlobals == (char *)FxMemoryObject::QueryInterface )
    {
      flags += 52;
      pMemory = (IFxMemory *)flags;
    }
    else
    {
      if ( ((int (__fastcall *)(unsigned __int16 *, IFxMemory ***))GetDriverGlobals)(flags, &p_pMemory) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)flags + 2),
          v11,
          v12,
          v13,
          v14,
          (const void *)Memory,
          0x100Au,
          flags,
          flags[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)flags + 2), WDF_INVALID_HANDLE, Memory, 0x100AuLL);
      }
      flags = (unsigned __int16 *)pMemory;
    }
  }
  if ( BufferSize )
  {
    v10 = (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)flags + 8LL))(flags);
    flags = (unsigned __int16 *)pMemory;
    *BufferSize = v10;
  }
  return (**(__int64 (__fastcall ***)(unsigned __int16 *))flags)(flags);
}
