/*
 * XREFs of ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x140002610
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400018A0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@V-$CComCre.c)
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400026E0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@AT.c)
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002700 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAudioDeviceGraph@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002720 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@V-$C.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x140027570 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComClassFactory::CreateInstance(
        ATL::CComClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 (__fastcall *v9)(__int64, const struct _GUID *, void **); // rbx

  result = 2147500035LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( !a2 || (unsigned int)ATL::InlineIsEqualUnknown(a3) )
    {
      v9 = (__int64 (__fastcall *)(__int64, const struct _GUID *, void **))*((_QWORD *)this + 8);
      if ( (char *)v9 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance(
                 a2,
                 a3,
                 a4);
      }
      else if ( (char *)v9 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance(
                 a2,
                 a3,
                 a4);
      }
      else if ( (char *)v9 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceShared>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceShared>>>::CreateInstance(
                 a2,
                 a3,
                 a4);
      }
      else if ( v9 == ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CVpoContext>>,ATL::CComCreator<ATL::CComAggObject<CVpoContext>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CVpoContext>>,ATL::CComCreator<ATL::CComAggObject<CVpoContext>>>::CreateInstance(
                 (__int64)a2,
                 a3,
                 a4);
      }
      else
      {
        return v9((__int64)a2, a3, a4);
      }
    }
    else
    {
      return 2147746064LL;
    }
  }
  return result;
}
