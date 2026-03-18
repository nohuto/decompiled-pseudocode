/*
 * XREFs of ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x1800700D0
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18005EF94 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x18005EE10 (-HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x18005F930 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CWICBitmapWrapper::HrInit(CWICBitmapWrapper *this, struct IWICBitmapSource *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  double v10; // xmm1_8
  float v11; // xmm0_4
  int v13; // [rsp+30h] [rbp-48h] BYREF
  double v14; // [rsp+38h] [rbp-40h] BYREF
  double v15; // [rsp+40h] [rbp-38h] BYREF
  struct _GUID v16; // [rsp+48h] [rbp-30h] BYREF

  v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct _GUID *))a2->lpVtbl->GetPixelFormat)(a2, &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2Au);
  }
  else
  {
    v6 = HrWicPfToMil(&v16, (enum MilPixelFormat::Enum *)&v13);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2Bu);
    }
    else
    {
      v7 = HrMilPfToPixelFormatInfo(v13, (int *)this + 50);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x32u);
      }
      else
      {
        v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, char *, char *))a2->lpVtbl->GetSize)(
               a2,
               (char *)this + 184,
               (char *)this + 188);
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x34u);
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, double *, double *))a2->lpVtbl->GetResolution)(
                 a2,
                 &v14,
                 &v15);
          v5 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x35u);
          }
          else
          {
            v10 = v15;
            v11 = v14;
            *((_QWORD *)this + 32) = a2;
            *((float *)this + 48) = v11;
            *((float *)this + 49) = v10;
            ((void (__fastcall *)(struct IWICBitmapSource *))a2->lpVtbl->AddRef)(a2);
          }
        }
      }
    }
  }
  return v5;
}
