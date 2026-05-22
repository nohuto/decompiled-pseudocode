/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180065034
 * Callers:
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$0 @ 0x1800A2ED3 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryProperties_--_1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$1 @ 0x1800A2EE3 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800A2EE3.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$2 @ 0x1800A2EF3 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800A2EF3.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$3 @ 0x1800A2F03 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800A2F03.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$4 @ 0x1800A2F13 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1800A2F13.c)
 *     _EnumerateDevices_::_1_::dtor$2 @ 0x1800A2F3B (_EnumerateDevices_--_1_--dtor$2.c)
 *     _SpatialInputControllerCollection::PrepareControllerParsing_::_1_::dtor$0 @ 0x1800A2F7A (_SpatialInputControllerCollection--PrepareControllerParsing_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$8 @ 0x1800A3047 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$8.c)
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$0 @ 0x1800A31DE (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$1 @ 0x1800A31EA (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$1.c)
 *     _Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory::CreateDynamicNodeReference_::_1_::dtor$2 @ 0x1800A3889 (_Windows--Internal--Holographic--SpatialGraphNodeReferenceFactory--CreateDynamicNod_ea_1800A3889.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
