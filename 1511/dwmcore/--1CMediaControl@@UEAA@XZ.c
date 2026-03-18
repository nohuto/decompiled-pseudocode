/*
 * XREFs of ??1CMediaControl@@UEAA@XZ @ 0x18013EA5C
 * Callers:
 *     ??_ECMediaControl@@UEAAPEAXI@Z @ 0x1800FF620 (--_ECMediaControl@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMediaControl::~CMediaControl(LPCVOID *this)
{
  void *v2; // rcx

  *this = &CMediaControl::`vftable';
  UnmapViewOfFile(this[2]);
  v2 = (void *)this[1];
  this[2] = 0LL;
  CloseHandle(v2);
  this[1] = 0LL;
}
