/*
 * XREFs of tidy_global @ 0x180054890
 * Callers:
 *     <none>
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18001BA7C (--1locale@std@@QEAA@XZ.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800543F0 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180054480 (--1_Lockit@std@@QEAA@XZ.c)
 */

void tidy_global(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v0, 0);
  std::locale::~locale((std::locale *)&qword_18008B668);
  qword_18008B668 = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
