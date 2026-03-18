/*
 * XREFs of ??1FxAutoString@@QEAA@XZ @ 0x1C000A744
 * Callers:
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C000A660 (imp_WdfDeviceCreateSymbolicLink.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000E28C (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     LogDriverInfoStream @ 0x1C0080164 (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxAutoString::~FxAutoString(FxAutoString *this)
{
  unsigned __int16 *Buffer; // rcx

  Buffer = this->m_UnicodeString.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    *(_QWORD *)&this->m_UnicodeString.Length = 0LL;
    this->m_UnicodeString.Buffer = 0LL;
  }
}
