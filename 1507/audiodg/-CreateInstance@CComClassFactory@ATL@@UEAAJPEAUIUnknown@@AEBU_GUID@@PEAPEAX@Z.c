/*
 * XREFs of ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1400130F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400011A0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@A.c)
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400131E0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140014320 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@.c)
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140014340 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V-$C.c)
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140017A40 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@V-$CComCre.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x1400271A4 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComClassFactory::CreateInstance(
        ATL::CComClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 (__fastcall *v9)(__int64); // rbx

  result = 2147500035LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( !a2 || (unsigned int)ATL::InlineIsEqualUnknown(a3) )
    {
      v9 = (__int64 (__fastcall *)(__int64))*((_QWORD *)this + 8);
      if ( (char *)v9 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance(
                 a2,
                 a3,
                 a4);
      }
      else if ( (char *)v9 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance(
                 a2,
                 a3,
                 a4);
      }
      else if ( (char *)v9 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceSharedNew>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceSharedNew>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceSharedNew>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceSharedNew>>>::CreateInstance(
                 a2,
                 a3,
                 a4);
      }
      else if ( (char *)v9 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CVpoContext>>,ATL::CComCreator<ATL::CComAggObject<CVpoContext>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CVpoContext>>,ATL::CComCreator<ATL::CComAggObject<CVpoContext>>>::CreateInstance(
                 a2,
                 a3,
                 a4);
      }
      else if ( v9 == ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceOffload>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceOffload>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceOffload>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceOffload>>>::CreateInstance((__int64)a2);
      }
      else
      {
        return ((__int64 (__fastcall *)(struct IUnknown *, const struct _GUID *, void **))v9)(a2, a3, a4);
      }
    }
    else
    {
      return 2147746064LL;
    }
  }
  return result;
}
