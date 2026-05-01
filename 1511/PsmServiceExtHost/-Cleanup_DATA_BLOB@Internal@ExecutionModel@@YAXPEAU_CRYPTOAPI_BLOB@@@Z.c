/*
 * XREFs of ?Cleanup_DATA_BLOB@Internal@ExecutionModel@@YAXPEAU_CRYPTOAPI_BLOB@@@Z @ 0x180048ACC
 * Callers:
 *     ??1?$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ @ 0x18004892C (--1-$_UndoSolo@V_lambda_8f8ac64dbc926c8fd5f875692dc53996_@@@tlx@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 */

void __fastcall ExecutionModel::Internal::Cleanup_DATA_BLOB(ExecutionModel::Internal *this, struct _CRYPTOAPI_BLOB *a2)
{
  void *v3; // rcx

  if ( this )
  {
    v3 = (void *)*((_QWORD *)this + 1);
    if ( v3 )
      LocalFree(v3);
    operator delete(this);
  }
}
