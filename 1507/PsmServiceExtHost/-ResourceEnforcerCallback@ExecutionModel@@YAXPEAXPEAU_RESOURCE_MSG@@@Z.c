/*
 * XREFs of ?ResourceEnforcerCallback@ExecutionModel@@YAXPEAXPEAU_RESOURCE_MSG@@@Z @ 0x180039D80
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourceEnforcerCallback(ExecutionModel *this, _BYTE *a2, struct _RESOURCE_MSG *a3)
{
  if ( this )
  {
    if ( (a2[8] & 1) != 0 )
      (*(void (__fastcall **)(ExecutionModel *, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
        this,
        *((unsigned int *)a2 + 3),
        *(_QWORD *)a2);
  }
}
