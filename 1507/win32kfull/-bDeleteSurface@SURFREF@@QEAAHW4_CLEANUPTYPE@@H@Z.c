/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C027F504
 * Callers:
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C00EBFF8 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFREF::bDeleteSurface(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*(_QWORD *)(a1 + 32), a2, a3);
  if ( (_DWORD)result )
    *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
