/*
 * XREFs of imp_WdfObjectDereferenceActual @ 0x1C002D280
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        unsigned int Line,
        char *File)
{
  unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v5 = (unsigned __int16 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 && (v6 = *v5, v5 = (unsigned __int16 *)((char *)v5 - v6), (_WORD)v6) )
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v5 + 32LL))(v5);
  else
    (*(void (__fastcall **)(unsigned __int16 *, void *, _QWORD, char *))(*(_QWORD *)v5 + 16LL))(v5, Tag, Line, File);
}
