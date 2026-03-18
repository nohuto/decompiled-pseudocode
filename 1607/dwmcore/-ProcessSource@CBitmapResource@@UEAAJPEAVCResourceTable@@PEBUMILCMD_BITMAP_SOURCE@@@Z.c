/*
 * XREFs of ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x1800AEAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Dispose@CBitmapResource@@IEAAXXZ @ 0x1800AEBC4 (-Dispose@CBitmapResource@@IEAAXXZ.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800AEC84 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800B1AE4 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::ProcessSource(
        struct IBitmapSource **this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAP_SOURCE *a3)
{
  unsigned int v5; // ebx
  int (__fastcall ***v6)(_QWORD, GUID *, struct IBitmapSource **); // rcx
  _QWORD *v7; // r14
  int BitmapFromWICBitmapSource; // eax
  int v9; // eax
  __int64 v10; // rcx
  int BitmapFromMemory; // eax
  int v13; // eax
  _DWORD v14[4]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v5 = 0;
  CBitmapResource::Dispose((CBitmapResource *)this);
  v6 = (int (__fastcall ***)(_QWORD, GUID *, struct IBitmapSource **))*((_QWORD *)a3 + 1);
  v7 = this + 17;
  if ( v6 )
  {
    if ( (**v6)(v6, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, this + 17) < 0 )
    {
      BitmapFromWICBitmapSource = HrCreateBitmapFromWICBitmapSource(*((struct IWICBitmapSource **)a3 + 1), this + 17);
      v5 = BitmapFromWICBitmapSource;
      if ( BitmapFromWICBitmapSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromWICBitmapSource, 0x59u);
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v7 + 56LL))(
               *v7,
               (char *)this + 128,
               (char *)this + 132);
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
                         &byte_1801F04F4,
                         0LL,
                         this + 17);
    v5 = BitmapFromMemory;
    if ( BitmapFromMemory < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromMemory, 0x72u);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v7 + 56LL))(
              *v7,
              (char *)this + 128,
              (char *)this + 132);
      v5 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x74u);
    }
  }
  v10 = *((_QWORD *)a3 + 1);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  CResource::NotifyOnChanged((_DWORD *)this + 4, 0, 0LL);
  return v5;
}
