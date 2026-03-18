/*
 * XREFs of ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C001D8DC
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C001E6C8 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ @ 0x1C00F3CD0 (-ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall CFlipExBuffer::ReleaseHDR10MetaData(CFlipExBuffer *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 43);
  if ( v2 )
  {
    Win32FreePool(v2);
    *((_QWORD *)this + 43) = 0LL;
  }
}
