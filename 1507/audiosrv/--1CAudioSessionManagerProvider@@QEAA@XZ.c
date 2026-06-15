/*
 * XREFs of ??1CAudioSessionManagerProvider@@QEAA@XZ @ 0x180081008
 * Callers:
 *     _ATL::CComObject_CAudioSessionManagerProvider_::CComObject_CAudioSessionManagerProvider__::_1_::dtor$0 @ 0x180048666 (_ATL--CComObject_CAudioSessionManagerProvider_--CComObject_CAudioSessionManagerProvider__--_1_--.c)
 *     _ATL::CComObject_CAudioSessionManagerProvider_::_CComObject_CAudioSessionManagerProvider__::_1_::dtor$0 @ 0x180080FF4 (_ATL--CComObject_CAudioSessionManagerProvider_--_CComObject_CAudioSessionManagerProvider__--_1_-.c)
 * Callees:
 *     ??_G?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z @ 0x18000C5E0 (--_G-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::~CAudioSessionManagerProvider(CAudioSessionManagerProvider *this)
{
  _QWORD *v1; // rdi
  __int64 i; // rsi
  void *v4; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 17);
  if ( v1 )
  {
    for ( i = *((_QWORD *)this + 18); i; --i )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::`scalar deleting destructor'(v1++);
    free(*((void **)this + 17));
  }
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
    free(v4);
  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
