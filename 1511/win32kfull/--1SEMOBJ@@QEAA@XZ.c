/*
 * XREFs of ??1SEMOBJ@@QEAA@XZ @ 0x1C01C2DCC
 * Callers:
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027DCD8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SEMOBJ::~SEMOBJ(SEMOBJ *this)
{
  SEMOBJ::vUnlock(this);
}
