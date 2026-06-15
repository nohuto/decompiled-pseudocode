/*
 * XREFs of ??1CApplicationManager@@MEAA@XZ @ 0x1800A1208
 * Callers:
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x1800A1320 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180001430 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800120D0 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
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
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v1 + 112);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v1 + 64);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)v1 + 24));
  *(_QWORD *)v1 = &CRefCountedObject::`vftable';
}
