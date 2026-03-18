/*
 * XREFs of ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x1800828C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800570E4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18005EF94 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Dispose@CBitmapResource@@IEAAXXZ @ 0x1800829A8 (-Dispose@CBitmapResource@@IEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapResource::ProcessSource(
        struct IBitmapSource **this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAP_SOURCE *a3)
{
  unsigned int v5; // edi
  int (__fastcall ***v6)(_QWORD, GUID *, struct IBitmapSource **); // rsi
  _QWORD *v7; // r14
  int BitmapFromWICBitmapSource; // eax
  int v9; // eax
  __int64 v10; // rsi
  int BitmapFromMemory; // eax
  int v13; // eax
  _DWORD v14[4]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h]

  v5 = 0;
  CBitmapResource::Dispose((CBitmapResource *)this);
  v6 = (int (__fastcall ***)(_QWORD, GUID *, struct IBitmapSource **))*((_QWORD *)a3 + 1);
  v7 = this + 8;
  if ( v6 )
  {
    if ( (**v6)(*((_QWORD *)a3 + 1), &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, this + 8) < 0 )
    {
      BitmapFromWICBitmapSource = HrCreateBitmapFromWICBitmapSource(*((struct IWICBitmapSource **)a3 + 1), this + 8);
      v5 = BitmapFromWICBitmapSource;
      if ( BitmapFromWICBitmapSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromWICBitmapSource, 0x59u);
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v7 + 56LL))(
               *v7,
               (char *)this + 56,
               (char *)this + 60);
        v5 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5Bu);
      }
    }
  }
  else
  {
    v15 = 0LL;
    v14[0] = 87;
    v14[1] = 1;
    v14[2] = 1;
    BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                         1u,
                         1u,
                         (const struct PixelFormatInfo *)v14,
                         4u,
                         4u,
                         &byte_1801960BC,
                         0LL,
                         this + 8);
    v5 = BitmapFromMemory;
    if ( BitmapFromMemory >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v7 + 56LL))(
              *v7,
              (char *)this + 56,
              (char *)this + 60);
      v5 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x74u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromMemory, 0x72u);
    }
  }
  v10 = *((_QWORD *)a3 + 1);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)a3 + 1));
  CResource::NotifyOnChanged((_DWORD *)this + 4, 0, 0LL);
  return v5;
}
