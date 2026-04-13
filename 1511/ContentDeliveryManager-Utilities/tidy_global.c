/*
 * XREFs of tidy_global @ 0x1800233A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18000A75C (--1locale@std@@QEAA@XZ.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180023508 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180023598 (--1_Lockit@std@@QEAA@XZ.c)
 */

void tidy_global(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v0, 0);
  std::locale::~locale((std::locale *)&qword_18003D3E0);
  qword_18003D3E0 = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
