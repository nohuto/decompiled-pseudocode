/*
 * XREFs of ?ResetInteractionOutput@?A0x1819c433@@YAXPEAUInteractionOutput@@_N@Z @ 0x1800A8540
 * Callers:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800A80A4 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall `anonymous namespace'::ResetInteractionOutput(
        _anonymous_namespace_ *this,
        struct InteractionOutput *a2)
{
  *((_BYTE *)this + 44) &= ~1u;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 1065353216;
  if ( !(_BYTE)a2 )
  {
    *(_QWORD *)this = 0LL;
    *(_QWORD *)((char *)this + 20) = 0LL;
    *(_QWORD *)((char *)this + 28) = 0LL;
    *(_QWORD *)((char *)this + 36) = 0LL;
  }
}
