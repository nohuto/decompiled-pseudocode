/*
 * XREFs of _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReference_::_1_::catch$96 @ 0x1800A38B9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066B18 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReference_::_1_::catch_96(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 328) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 296),
                            (void *)0x3C2,
                            a3,
                            a4);
  return &loc_18008BA50;
}
