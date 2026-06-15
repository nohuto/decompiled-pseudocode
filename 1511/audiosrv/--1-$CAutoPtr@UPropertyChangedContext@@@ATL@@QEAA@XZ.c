/*
 * XREFs of ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x180091E0C
 * Callers:
 *     _CMonitorManager::OnPropertyValueChanged_::_1_::dtor$1 @ 0x18009503A (_CMonitorManager--OnPropertyValueChanged_--_1_--dtor$1.c)
 * Callees:
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x1800920E0 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<PropertyChangedContext>::~CAutoPtr<PropertyChangedContext>(
        PropertyChangedContext **a1,
        unsigned int a2)
{
  PropertyChangedContext *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = PropertyChangedContext::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
