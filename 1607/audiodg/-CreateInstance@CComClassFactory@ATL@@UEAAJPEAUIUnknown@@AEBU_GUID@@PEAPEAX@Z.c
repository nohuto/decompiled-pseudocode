/*
 * XREFs of ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1400127E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012880 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V-$CCom.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x1400262A8 (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComClassFactory::CreateInstance(
        ATL::CComClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  struct IUnknown *v4; // r10
  ATL::CComClassFactory *v5; // rdx
  const struct _GUID *v6; // r11
  __int64 result; // rax
  __int64 (__fastcall *v8)(struct IUnknown *, const struct _GUID *, void **); // rax

  v4 = a2;
  v5 = this;
  v6 = a3;
  result = 2147500035LL;
  if ( a4 )
  {
    *a4 = 0LL;
    if ( !v4 || (unsigned int)ATL::InlineIsEqualUnknown(a3) )
    {
      v8 = (__int64 (__fastcall *)(struct IUnknown *, const struct _GUID *, void **))*((_QWORD *)v5 + 8);
      if ( (char *)v8 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>,ATL::CComCreator<ATL::CComAggObject<CAPOWrapperSrv>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>,ATL::CComCreator<ATL::CComAggObject<CAPOWrapperSrv>>>::CreateInstance(
                 v4,
                 v6,
                 a4);
      }
      else if ( (char *)v8 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CAudioDeviceGraph>>,ATL::CComCreator<ATL::CComAggObject<CAudioDeviceGraph>>>::CreateInstance(
                 v4,
                 v6,
                 a4);
      }
      else if ( (char *)v8 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CStreamGroup>>,ATL::CComCreator<ATL::CComAggObject<CStreamGroup>>>::CreateInstance(
                 v4,
                 v6,
                 a4);
      }
      else if ( (char *)v8 == (char *)ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceShared>>>::CreateInstance )
      {
        return ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceShared>>>::CreateInstance(
                 v4,
                 v6,
                 a4);
      }
      else
      {
        return v8(v4, v6, a4);
      }
    }
    else
    {
      return 2147746064LL;
    }
  }
  return result;
}
