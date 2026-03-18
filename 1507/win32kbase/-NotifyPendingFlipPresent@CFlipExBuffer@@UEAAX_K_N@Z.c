/*
 * XREFs of ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAX_K_N@Z @ 0x1C0049390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::NotifyPendingFlipPresent(CFlipExBuffer *this, __int64 a2, char a3)
{
  if ( a2 )
    *((_QWORD *)this + 46) = a2;
  if ( a3 )
    ++*((_DWORD *)this + 88);
}
