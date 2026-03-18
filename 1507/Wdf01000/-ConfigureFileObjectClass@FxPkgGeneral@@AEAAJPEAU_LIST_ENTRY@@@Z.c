/*
 * XREFs of ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C000F4DC
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000F6BC (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qqDD @ 0x1C007B708 (WPP_IFR_SF_qqDD.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C0084D18 (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureFileObjectClass(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _LIST_ENTRY *Blink; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  signed int globals; // edi
  _LIST_ENTRY *v7; // r14
  signed int _a4; // edx
  unsigned int v9; // esi
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a3; // rcx
  _LIST_ENTRY *v13; // rax
  unsigned __int64 Flink; // rax
  const void *_a2; // rax
  int _a6; // r8d
  bool v17; // zf
  _LIST_ENTRY *v18; // rdx
  const void *v19; // rdx
  _LIST_ENTRY *v20; // rax
  unsigned __int64 m_Driver; // rax
  const void *v22; // rax
  FxDeviceBase *v23; // rcx
  const void *v24; // rcx
  int v25; // [rsp+90h] [rbp+8h] BYREF

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
    if ( m_DeviceBase->m_ObjectSize )
      _a3 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a3 = 0LL;
    v13 = Blink[9].Blink;
    if ( v13 )
      Flink = (unsigned __int64)v13[1].Flink;
    else
      Flink = (unsigned __int64)m_DeviceBase->m_Driver;
    if ( *(_WORD *)(Flink + 10) )
      _a2 = (const void *)(Flink ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qqDD(
      m_Globals,
      4u,
      (unsigned int)m_DeviceBase,
      0x10u,
      WPP_FxPkgGeneral_cpp_Traceguids,
      _a2,
      _a3,
      _a4,
      globals);
    goto LABEL_6;
  }
  v9 = -1073741808;
  _a6 = 0;
  v17 = _a4 >= 0;
  v18 = v7[1].Flink;
  if ( WORD1(v18->Blink) )
    v19 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v19 = 0LL;
  v20 = Blink[9].Blink;
  if ( v20 )
    m_Driver = (unsigned __int64)v20[1].Flink;
  else
    m_Driver = (unsigned __int64)this->m_DeviceBase->m_Driver;
  if ( *(_WORD *)(m_Driver + 10) )
    v22 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v22 = 0LL;
  v23 = this->m_DeviceBase;
  if ( v23->m_ObjectSize )
    v24 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v24 = 0LL;
  LOBYTE(_a6) = globals < 0;
  WPP_IFR_SF_qqdqdd(
    m_Globals,
    (unsigned __int8)v19,
    0x12u,
    0xFu,
    WPP_FxPkgGeneral_cpp_Traceguids,
    v24,
    v22,
    !v17,
    v19,
    _a6,
    -1073741808);
  v25 = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
    m_Globals->Public.DriverName,
    (const char *)&v25,
    m_Globals->Public.DriverName,
    (const char *)&v25);
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return v9;
}
