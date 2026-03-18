/*
 * XREFs of ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800A7E9C
 * Callers:
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1800A7C30 (-Run@CDWMInputThread@@AEAAKXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A7F80 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800B7C20 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
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
