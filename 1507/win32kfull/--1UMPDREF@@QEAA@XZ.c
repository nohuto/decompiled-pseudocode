/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C011C16C
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C011BF90 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C011C458 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDREF::~UMPDREF(UMPDOBJ **this)
{
  UMPDOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( (unsigned int)UMPDOBJ::bCleanupWorker(*this) )
      Win32FreePool(*this);
  }
}
