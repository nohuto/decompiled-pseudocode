/*
 * XREFs of imp_WdfObjectReferenceActual @ 0x1C0026FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfObjectReferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        int Line,
        char *File)
{
  volatile signed __int32 *v5; // rax
  unsigned int RefCount; // edx
  __int64 v7; // rdx
  FxTagTracker *v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v5 = (volatile signed __int32 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 && (v7 = *(unsigned __int16 *)v5, v5 = (volatile signed __int32 *)((char *)v5 - v7), (_WORD)v7) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
  }
  else
  {
    RefCount = _InterlockedIncrement(v5 + 3);
    if ( *((char *)v5 + 24) < 0 )
    {
      v8 = (FxTagTracker *)*((_QWORD *)v5 - 4);
      if ( v8 )
        FxTagTracker::UpdateTagHistory(v8, Tag, Line, File, TagAddRef, RefCount);
    }
  }
}
