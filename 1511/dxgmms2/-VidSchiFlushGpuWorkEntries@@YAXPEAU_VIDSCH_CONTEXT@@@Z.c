/*
 * XREFs of ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C001EE88
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000B8A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x1C00104B0 (VidSchiDecrementContextReference.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00132F0 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 * Callees:
 *     Template_pqIR1 @ 0x1C001FBE4 (Template_pqIR1.c)
 */

void __fastcall VidSchiFlushGpuWorkEntries(struct _VIDSCH_CONTEXT *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r9

  v4 = *((_QWORD *)a1 + 119);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 236);
    if ( v5 )
    {
      v6 = *((_QWORD *)a1 + 7);
      if ( !v6 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
        LODWORD(v6) = (_DWORD)a1;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        Template_pqIR1(v4, v5, a3, v6, v5, v4);
      *((_DWORD *)a1 + 236) = 0;
    }
  }
}
