/*
 * XREFs of ?BufferOutput@CInteractionContextWrapper@@UEAAX_N@Z @ 0x180021E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionContextWrapper::BufferOutput(CInteractionContextWrapper *this, char a2)
{
  if ( *((_BYTE *)this + 472) != (a2 != 0) )
  {
    *((_BYTE *)this + 472) = a2 != 0;
    if ( a2 )
      (*(void (__fastcall **)(CInteractionContextWrapper *))(*(_QWORD *)this + 120LL))(this);
  }
}
