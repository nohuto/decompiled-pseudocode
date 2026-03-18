/*
 * XREFs of ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800A4C8C
 * Callers:
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A4D70 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1800A62F4 (-Run@CDWMInputThread@@AEAAKXZ.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
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
