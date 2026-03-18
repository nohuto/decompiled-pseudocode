/*
 * XREFs of UpdateDirtyVisRgnTrackers @ 0x14004D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x14004DA94 (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 */

void __fastcall UpdateDirtyVisRgnTrackers(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rdi
  CVisRgnTrackerProp *v4; // rcx

  v2 = W32GetUserSessionState(a1, a2) + 19704;
  for ( i = *(_QWORD **)v2; i != (_QWORD *)v2; i = (_QWORD *)*i )
  {
    if ( i )
      v4 = (CVisRgnTrackerProp *)(i - 3);
    else
      v4 = 0LL;
    CVisRgnTrackerProp::Update(v4);
  }
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
}
