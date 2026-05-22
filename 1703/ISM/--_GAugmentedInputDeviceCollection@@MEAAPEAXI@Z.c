/*
 * XREFs of ??_GAugmentedInputDeviceCollection@@MEAAPEAXI@Z @ 0x180074B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180075824 (--1-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$CBK.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18007DB64 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

AugmentedInputDeviceCollection *__fastcall AugmentedInputDeviceCollection::`scalar deleting destructor'(
        AugmentedInputDeviceCollection *this,
        char a2)
{
  *(_QWORD *)this = &AugmentedInputDeviceCollection::`vftable';
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>((char *)this + 2760);
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
