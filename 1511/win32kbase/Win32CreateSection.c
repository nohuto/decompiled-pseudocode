/*
 * XREFs of Win32CreateSection @ 0x1C00AFD74
 * Callers:
 *     HmgCreate @ 0x1C006CE6C (HmgCreate.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0088584 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00B4E04 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00B4EA8 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00B5010 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EngAllocSectionMem @ 0x1C00BEBA0 (EngAllocSectionMem.c)
 *     InitCreateSharedSection @ 0x1C013C56C (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int Section; // ebx

  Section = MmCreateSection(a1, a2, 0LL, a4, 4, a6, 0LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
