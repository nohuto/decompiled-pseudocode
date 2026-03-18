/*
 * XREFs of ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C015A740
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023E5F0 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__fastcall InteractiveControlInput::InteractiveControlInput(
        InteractiveControlInput *this,
        struct InteractiveControlDevice *a2)
{
  int v3; // edx
  unsigned __int64 v4; // r8
  InteractiveControlInput *result; // rax
  _BYTE v6[20]; // [rsp+0h] [rbp-28h] BYREF

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v3 = (unsigned __int16)word_1C03218A0;
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  memset(v6, 0, sizeof(v6));
  ++word_1C03218A0;
  *(_OWORD *)((char *)this + 52) = *(_OWORD *)v6;
  *((_DWORD *)this + 7) = v4;
  *(_QWORD *)((char *)this + 68) = (unsigned __int128)0LL >> 96;
  *((_DWORD *)this + 19) = 0;
  result = this;
  *((_DWORD *)this + 8) = v3;
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  return result;
}
