/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AB070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DestroyHandleSecondPass(unsigned __int8 *a1)
{
  if ( *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
    *(_DWORD *)(*(_QWORD *)a1 + 8LL) = 0;
  HMDestroyUnlockedObject(a1);
}
