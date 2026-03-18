/*
 * XREFs of ??_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z @ 0x1C0142CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVP_SYSTEM_THREAD@@MEAA@XZ @ 0x1C0142CA4 (--1CVP_SYSTEM_THREAD@@MEAA@XZ.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01441EC (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1C01442B0 (-TdrFreePool@@YAXPEAX@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT **__fastcall CTDR_GDI_RESET_THREAD::`scalar deleting destructor'(
        struct _TDR_RECOVERY_CONTEXT **this,
        char a2)
{
  *this = (struct _TDR_RECOVERY_CONTEXT *)&CTDR_GDI_RESET_THREAD::`vftable';
  TdrDereferenceRecoveryContext(this[3], 0);
  CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD((CVP_SYSTEM_THREAD *)this);
  if ( (a2 & 1) != 0 )
    TdrFreePool(this);
  return this;
}
