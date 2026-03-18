/*
 * XREFs of ?MapSection@CSectionBitmapRealization@@AEAAJXZ @ 0x18018EC34
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18018E874 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::MapSection(HANDLE *this)
{
  unsigned int v1; // esi
  HANDLE CurrentProcess; // rax
  NTSTATUS v4; // eax
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  ViewSize = 0LL;
  SectionOffset.QuadPart = 0LL;
  CurrentProcess = GetCurrentProcess();
  v4 = NtMapViewOfSection(this[52], CurrentProcess, this + 55, 0LL, 0LL, &SectionOffset, &ViewSize, ViewUnmap, 0, 4u);
  if ( v4 < 0 )
  {
    v1 = v4 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4 | 0x10000000, 0xBEu);
  }
  return v1;
}
