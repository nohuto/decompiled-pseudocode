/*
 * XREFs of ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18008A2F8
 * Callers:
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18008A3DC (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?ProcessInput@CInputManager@@AEAAJXZ @ 0x180092C1C (-ProcessInput@CInputManager@@AEAAJXZ.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180092E2C (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMmcssTask::IsActive(CMmcssTask *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 6);
  result = 0LL;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 136) )
      return 1LL;
  }
  return result;
}
