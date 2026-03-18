/*
 * XREFs of ??0DXGRESOURCE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00BCC80
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGRESOURCE@@PEAE@Z @ 0x1C0073410 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 * Callees:
 *     <none>
 */

DXGRESOURCE *__fastcall DXGRESOURCE::DXGRESOURCE(DXGRESOURCE *this, struct DXGDEVICE *a2)
{
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 9);
  return this;
}
