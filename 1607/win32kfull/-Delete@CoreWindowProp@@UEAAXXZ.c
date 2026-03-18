/*
 * XREFs of ?Delete@CoreWindowProp@@UEAAXXZ @ 0x1C0226270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CoreWindowProp::Delete(CoreWindowProp *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8

  HMAssignmentUnlock((char *)this + 24);
  while ( *((_QWORD *)this + 4) )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      *((_QWORD *)this + 4) = *v4;
      HMAssignmentUnlock(v4 + 1);
      --*((_DWORD *)this + 10);
      Win32FreePool(v4, v5, v6);
    }
  }
  Win32FreePool(this, v2, v3);
}
