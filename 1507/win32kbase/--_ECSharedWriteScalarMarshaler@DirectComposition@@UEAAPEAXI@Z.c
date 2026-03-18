/*
 * XREFs of ??_ECSharedWriteScalarMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00DDFBC
 * Callers:
 *     ??_ECSharedWriteScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C008A130 (--_ECSharedWriteScalarMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteScalarMarshaler *__fastcall DirectComposition::CSharedWriteScalarMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteScalarMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CScalarMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  *((_QWORD *)this + 2) = &DirectComposition::CResourceMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
