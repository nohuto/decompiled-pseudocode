/*
 * XREFs of ??0CHwLinearGradientBrushPoolManager@@IEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x1800B3300
 * Callers:
 *     ?Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18002BCCC (-Init@CHwBrushPool@@QEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     <none>
 */

CHwLinearGradientBrushPoolManager *__fastcall CHwLinearGradientBrushPoolManager::CHwLinearGradientBrushPoolManager(
        CHwLinearGradientBrushPoolManager *this,
        struct CD3DDeviceLevel1 *a2)
{
  CHwLinearGradientBrushPoolManager *result; // rax

  *(_QWORD *)this = &CHwBrushPoolManager::`vftable';
  InitializeSListHead((PSLIST_HEADER)this + 1);
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)this = &CHwLinearGradientBrushPoolManager::`vftable';
  result = this;
  *((_QWORD *)this + 10) = a2;
  return result;
}
