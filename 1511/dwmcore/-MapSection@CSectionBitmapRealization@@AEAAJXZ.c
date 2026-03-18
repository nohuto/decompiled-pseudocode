/*
 * XREFs of ?MapSection@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C8A4
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C3BC (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
  v4 = NtMapViewOfSection(this[57], CurrentProcess, this + 60, 0LL, 0LL, &SectionOffset, &ViewSize, ViewUnmap, 0, 4u);
  if ( v4 < 0 )
  {
    v1 = v4 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4 | 0x10000000, 0xC0u);
  }
  return v1;
}
