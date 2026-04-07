/*
 * XREFs of ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x180010EAC
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F414 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001B188 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationScheduler::GetActiveStoryboardCount(CAnimationScheduler *this)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8

  result = 0LL;
  if ( *((_DWORD *)this + 10) )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = *((unsigned int *)this + 10);
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)v2 + 24LL) != 4 )
        result = (unsigned int)(result + 1);
      v2 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
