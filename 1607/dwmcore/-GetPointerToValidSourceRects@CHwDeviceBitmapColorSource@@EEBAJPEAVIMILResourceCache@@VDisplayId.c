/*
 * XREFs of ?GetPointerToValidSourceRects@CHwDeviceBitmapColorSource@@EEBAJPEAVIMILResourceCache@@VDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017F350
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x1800A5A84 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179770 (-GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV-$TMil.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::GetPointerToValidSourceRects(
        CHwDeviceBitmapColorSource *this,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  void (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rax
  __int64 v7; // rbx
  int SharedHandle; // eax
  _QWORD *v10; // rax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h]

  v13 = a3;
  v5 = *a2;
  v7 = 0LL;
  v12 = 0LL;
  (*v5)(a2, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v12);
  if ( v12 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 80LL))(v12) == 3 )
  {
    if ( v12 )
      v7 = v12 - 16;
    SharedHandle = (unsigned int)CHwDeviceBitmapColorSource::GetSharedHandle(this);
    LODWORD(v7) = CBitmapOfDeviceBitmaps::GetPointerToValidRectsForSurface(v7, SharedHandle, v13, a4, a5);
  }
  else
  {
    v10 = a5;
    *a4 = 1;
    *v10 = (char *)this + 188;
  }
  return (unsigned int)v7;
}
