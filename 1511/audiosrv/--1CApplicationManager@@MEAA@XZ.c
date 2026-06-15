/*
 * XREFs of ??1CApplicationManager@@MEAA@XZ @ 0x18009E378
 * Callers:
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x18009E490 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x18002A1CC (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXXZ @ 0x180030698 (-RemoveAll@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180065AC4 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::~CApplicationManager(CApplicationManager *this)
{
  CApplicationManager *v1; // rbx
  struct _TP_WAIT ***Next; // rax
  struct _TP_WAIT **v3; // rdi
  _QWORD *v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = this;
  *(_QWORD *)this = &CApplicationManager::`vftable';
  v4 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v4 )
  {
    Next = (struct _TP_WAIT ***)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)this, &v4);
    v3 = *Next;
    if ( *Next )
    {
      CProcess::Cleanup(*Next, 1);
      CUnknown::Release((CUnknown *)v3);
    }
  }
  v4 = (_QWORD *)*((_QWORD *)v1 + 8);
  while ( v4 )
  {
    this = (CApplicationManager *)*ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(
                                     (__int64)this,
                                     &v4);
    if ( this )
      CRefCountedObject::Release(this);
  }
  ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAll((__int64 *)v1 + 14);
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::RemoveAll((__int64)v1 + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 24));
  *(_QWORD *)v1 = &CRefCountedObject::`vftable';
}
