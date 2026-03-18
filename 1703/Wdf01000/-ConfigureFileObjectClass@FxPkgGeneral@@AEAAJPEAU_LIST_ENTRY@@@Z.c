/*
 * XREFs of ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0020B78
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00209E4 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqDD @ 0x1C0082204 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0088A74 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureFileObjectClass(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _LIST_ENTRY *Blink; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  signed int globals; // edi
  _LIST_ENTRY *v7; // r14
  signed int _a4; // edx
  unsigned int v9; // ebp
  FxDeviceBase *m_DeviceBase; // rcx
  const void *_a3; // r8
  _LIST_ENTRY *v13; // rax
  unsigned __int64 Flink; // rcx
  unsigned __int16 v15; // ax
  const void *_a2; // rcx
  _LIST_ENTRY *v17; // r8
  _LIST_ENTRY *v18; // rcx
  __int16 v19; // ax
  BOOL v20; // r11d
  const void *v21; // r8
  unsigned __int64 m_Driver; // rcx
  unsigned __int16 v23; // ax
  FxDeviceBase *v24; // rdx
  const void *v25; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v27; // rdx

  Blink = FileObjInfoList->Blink;
  m_Globals = this->m_Globals;
  globals = 1;
  v7 = 0LL;
  if ( Blink == FileObjInfoList )
  {
LABEL_7:
    v9 = 0;
    LODWORD(this->m_DeviceBase[1].m_DisposeSingleEntry.Next) = globals;
    return v9;
  }
  while ( 1 )
  {
    _a4 = (signed int)Blink[5].Flink;
    if ( _a4 == 1 || globals == _a4 )
      goto LABEL_6;
    if ( globals != 1 )
      break;
    v7 = Blink[9].Blink;
    globals = (signed int)Blink[5].Flink;
LABEL_6:
    Blink = Blink->Blink;
    if ( Blink == FileObjInfoList )
      goto LABEL_7;
  }
  if ( globals < 0 == _a4 < 0 )
  {
    globals = 4;
    if ( _a4 < 0 )
      globals = -2147483644;
    m_DeviceBase = this->m_DeviceBase;
    _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v13 = Blink[9].Blink;
    if ( !m_DeviceBase->m_ObjectSize )
      _a3 = 0LL;
    if ( v13 )
      Flink = (unsigned __int64)v13[1].Flink;
    else
      Flink = (unsigned __int64)m_DeviceBase->m_Driver;
    v15 = *(_WORD *)(Flink + 10);
    _a2 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v15 )
      _a2 = 0LL;
    WPP_IFR_SF_qqDD(m_Globals, 4u, (unsigned int)_a3, 0x10u, WPP_FxPkgGeneral_cpp_Traceguids, _a2, _a3, _a4, globals);
    goto LABEL_6;
  }
  v9 = -1073741808;
  v17 = v7[1].Flink;
  v18 = Blink[9].Blink;
  v19 = WORD1(v17->Blink);
  v20 = _a4 < 0;
  v21 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v19 )
    v21 = 0LL;
  if ( v18 )
    m_Driver = (unsigned __int64)v18[1].Flink;
  else
    m_Driver = (unsigned __int64)this->m_DeviceBase->m_Driver;
  v23 = *(_WORD *)(m_Driver + 10);
  v24 = this->m_DeviceBase;
  v25 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v23 )
    v25 = 0LL;
  m_ObjectSize = v24->m_ObjectSize;
  v27 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v27 = 0LL;
  WPP_IFR_SF_qqdqdd(
    m_Globals,
    (unsigned __int8)v27,
    0x12u,
    0xFu,
    WPP_FxPkgGeneral_cpp_Traceguids,
    v27,
    v25,
    v20,
    v21,
    globals < 0,
    -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return v9;
}
