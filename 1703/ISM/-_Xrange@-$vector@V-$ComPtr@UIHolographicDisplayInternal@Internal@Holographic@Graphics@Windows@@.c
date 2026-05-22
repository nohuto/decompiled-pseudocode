/*
 * XREFs of ?_Xrange@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18007AEE4
 * Callers:
 *     ?RemoveDisplay@SpatialInputControllerCollection@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@Windows@@@Z @ 0x18007A564 (-RemoveDisplay@SpatialInputControllerCollection@@AEAAJPEAUIHolographicDisplay@Holographic@Graphi.c)
 * Callees:
 *     <none>
 */

void __noreturn std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::_Xrange()
{
  std::_Xout_of_range("invalid vector<T> subscript");
  JUMPOUT(0x18007AEF5LL);
}
