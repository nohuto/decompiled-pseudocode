/*
 * XREFs of ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005CF20
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C0031D9C (-FreeRequest@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxObject::ClearEvtCallbacks(FxObject *this)
{
  unsigned __int16 m_ObjectSize; // ax
  _QWORD *i; // rax

  m_ObjectSize = this->m_ObjectSize;
  if ( m_ObjectSize )
  {
    for ( i = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      i[3] = 0LL;
      i[2] = 0LL;
    }
  }
  this->m_ObjectFlags &= ~0x400u;
}
