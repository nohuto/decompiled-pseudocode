/*
 * XREFs of ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C023EE14
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023DC24 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C02407D8 (-ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREP.c)
 */

__int64 __fastcall InteractiveControlInput::ParseInputReport(
        InteractiveControlInput *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  size_t v4; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // rcx
  void *v11; // rax

  v4 = a3;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v8 = InteractiveControlParser::ParseInputReport(
         (struct _INTERACTIVECTRL_CAPABILITIES *)(*((_QWORD *)this + 5) + 112LL),
         *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)this + 5) + 288LL),
         a2,
         a3,
         (InteractiveControlInput *)((char *)this + 52));
  if ( v8 >= 0 )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 5) + 268LL) )
    {
      v10 = *((_QWORD *)this + 10);
      if ( v10 )
        Win32FreePool(v10, v7, v9);
      v11 = (void *)Win32AllocPool(v4, 1819440195LL);
      *((_QWORD *)this + 10) = v11;
      memmove(v11, a2, v4);
    }
    *((_DWORD *)this + 7) = v6;
  }
  return (unsigned int)v8;
}
