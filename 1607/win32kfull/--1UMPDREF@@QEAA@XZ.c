/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C02AB0F4
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C02B1410 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0284D28 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

void __fastcall UMPDREF::~UMPDREF(UMPDOBJ **this)
{
  UMPDOBJ *v2; // rcx
  __int64 v3; // rdx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    if ( (unsigned int)UMPDOBJ::bCleanupWorker(*this) )
      Win32FreePool(*this, v3);
  }
}
