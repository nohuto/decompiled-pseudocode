/*
 * XREFs of ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C0226100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CoreWindowProp::Delete(CoreWindowProp *this)
{
  _QWORD *v2; // rdi

  HMAssignmentUnlock((char *)this + 24);
  while ( *((_QWORD *)this + 4) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 4);
    if ( v2 )
    {
      *((_QWORD *)this + 4) = *v2;
      HMAssignmentUnlock(v2 + 1);
      --*((_DWORD *)this + 10);
      Win32FreePool(v2);
    }
  }
  Win32FreePool(this);
}
