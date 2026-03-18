/*
 * XREFs of ??1DXGPROCESSSHAREDACCESS@@QEAA@XZ @ 0x1C00BCC58
 * Callers:
 *     ??_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z @ 0x1C000C294 (--_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESSSHAREDACCESS::~DXGPROCESSSHAREDACCESS(DXGPROCESSSHAREDACCESS *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 4);
  if ( v1 )
    ObfDereferenceObject(v1);
}
