/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180001A3C
 * Callers:
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x180001BD0 (-RemoveInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@Z @ 0x180001C90 (-AddInterface@-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAAJV-$CCo.c)
 *     ??1?$CLockedList@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ @ 0x180059320 (--1-$CLockedList@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x180059574 (--1CVolumeStrip@@MEAA@XZ.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x180001D28 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void *__fastcall ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::RemoveAt(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  void *v5; // rbp
  void *result; // rax
  __int64 v7; // rbp
  char *v8; // rdx
  char *v9; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v5 = a1[1], v2 > (unsigned __int64)v5) )
    ATL::AtlThrowImpl(-2147024809);
  result = (void *)ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors((char *)*a1 + 8 * a2);
  v7 = (__int64)v5 - v2;
  if ( v7 )
  {
    result = *a1;
    v8 = (char *)*a1 + 8 * v2;
    v9 = (char *)*a1 + 8 * a2;
    if ( 8 * v7 )
    {
      if ( !v9 || !v8 )
      {
        *(_DWORD *)_o__errno(v9, v8) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      result = memmove(v9, v8, 8 * v7);
    }
  }
  a1[1] = (char *)a1[1] - 1;
  return result;
}
