/*
 * XREFs of ?Release@RmpRpExtResourceManagerThunk@@UEAAKXZ @ 0x18001CD40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180020994 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall RmpRpExtResourceManagerThunk::Release(RmpRpExtResourceManagerThunk *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &RmpRpExtResourceManagerThunk::`vftable';
    operator delete(this);
  }
  return v1;
}
