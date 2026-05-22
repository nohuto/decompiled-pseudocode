/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066B18
 * Callers:
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800A3793 (_Windows--Internal--Holographic--SpatialGraphDriverClient--RuntimeClassInitialize_--_1_--catch$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create_::_1_::catch$22 @ 0x1800A37E3 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--Create_--_1_--catch$22.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking_::_1_::catch$68 @ 0x1800A3842 (_Windows--Internal--Holographic--SpatialGraphDriverHandleWrapper--StartTracking_--_1_--catch$68.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReference_::_1_::catch$96 @ 0x1800A38B9 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800A38B9.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800099C4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_CaughtException(
           (__int64)this,
           (unsigned int)a2,
           (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
           (__int64)a4,
           v5,
           retaddr,
           1);
}
