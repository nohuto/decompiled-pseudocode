/*
 * XREFs of ??1FxAutoString@@QEAA@XZ @ 0x1C0031C9C
 * Callers:
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C001B9DC (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0031BE0 (imp_WdfDeviceCreateSymbolicLink.c)
 *     LogDriverInfoStream @ 0x1C0072C70 (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
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
