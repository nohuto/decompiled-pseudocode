/*
 * XREFs of ??1CVP_SYSTEM_THREAD@@MEAA@XZ @ 0x1C0142CA4
 * Callers:
 *     ??_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z @ 0x1C0142CF0 (--_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z.c)
 *     ??_GCTDR_SUBMIT_REPORT_THREAD@@UEAAPEAXI@Z @ 0x1C0142D40 (--_GCTDR_SUBMIT_REPORT_THREAD@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD(CVP_SYSTEM_THREAD *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &CVP_SYSTEM_THREAD::`vftable';
  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    ZwClose(v1);
}
