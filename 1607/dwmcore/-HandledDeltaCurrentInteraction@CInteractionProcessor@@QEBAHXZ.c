/*
 * XREFs of ?HandledDeltaCurrentInteraction@CInteractionProcessor@@QEBAHXZ @ 0x18016E8E0
 * Callers:
 *     ?HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ @ 0x180145370 (-HandledDeltaCurrentInteraction@CInteraction@@UEBAHXZ.c)
 *     ?HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ @ 0x180170F30 (-HandledDeltaCurrentInteraction@CInteractionRoot@@UEBAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionProcessor::HandledDeltaCurrentInteraction(CInteractionProcessor *this)
{
  int v1; // edx
  unsigned int v2; // r8d
  int v4; // eax
  bool v5; // zf

  v1 = *((_DWORD *)this + 97);
  v2 = 1;
  if ( v1 == 1 )
  {
    if ( (*((_BYTE *)this + 16) & 3) != 0 && (*((_BYTE *)this + 408) & 1) != 0
      || (*((_BYTE *)this + 16) & 0xC) != 0 && (*((_BYTE *)this + 408) & 2) != 0 )
    {
      return v2;
    }
    v5 = (*((_BYTE *)this + 16) & 0x30) == 0;
    goto LABEL_16;
  }
  if ( v1 == 2 )
  {
    v4 = *((_DWORD *)this + 42);
    if ( (v4 & 3) != 0 && (*((_BYTE *)this + 408) & 1) != 0 || (v4 & 0xC) != 0 && (*((_BYTE *)this + 408) & 2) != 0 )
      return v2;
    v5 = (v4 & 0x30) == 0;
LABEL_16:
    if ( v5 || (*((_BYTE *)this + 408) & 4) == 0 )
      return 0;
    return v2;
  }
  if ( (unsigned int)(v1 - 3) > 1 )
    return 0LL;
  else
    return CInteractionProcessor::SupportsPointerType((__int64)this, v1, 0LL, 1u);
}
