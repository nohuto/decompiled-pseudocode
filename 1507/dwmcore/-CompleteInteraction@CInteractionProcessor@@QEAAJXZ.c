/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJXZ @ 0x18012DA20
 * Callers:
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x18010CEA0 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x18012FF10 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(CInteractionProcessor *this)
{
  unsigned int v1; // edi
  __int64 v3; // rsi

  *((_BYTE *)this + 380) &= ~2u;
  v1 = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 90) = 0;
  *((_BYTE *)this + 128) &= 0xF5u;
  *((_DWORD *)this + 31) = 0;
  *((_BYTE *)this + 264) &= 0xF5u;
  *((_DWORD *)this + 65) = 0;
  *((_WORD *)this + 182) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  if ( *(_QWORD *)this
    && ((*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this), (v3 = *((_QWORD *)this + 17)) != 0) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v1;
}
