/*
 * XREFs of ??1PropertyVector@Input@@UEAA@XZ @ 0x18001BD74
 * Callers:
 *     ??_EPropertyVector@Input@@UEAAPEAXI@Z @ 0x18001BD40 (--_EPropertyVector@Input@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x18001BE80 (-RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z.c)
 *     ??1?$PropertyVectorModifiedAdapter@V?$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UEAA@XZ @ 0x18001C080 (--1-$PropertyVectorModifiedAdapter@V-$ModifiedNotifier@VPropertyVector@Input@@@Input@@@Input@@UE.c)
 *     ??_G?$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAPEAXI@Z @ 0x18001CE00 (--_G-$ModifiedNotifier@VPropertyVector@Input@@@Input@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Dispose@PropertyVector@Input@@UEAAXXZ @ 0x1800285D0 (-Dispose@PropertyVector@Input@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Input::PropertyVector::~PropertyVector(char **this)
{
  char *v2; // rcx

  *this = (char *)&Input::PropertyVector::`vftable';
  Input::PropertyVector::Dispose((Input::PropertyVector *)this);
  v2 = this[4];
  if ( v2 )
  {
    std::_Deallocate(v2, (this[6] - v2) >> 3, 8uLL);
    this[4] = 0LL;
    this[5] = 0LL;
    this[6] = 0LL;
  }
  *this = (char *)&Input::PropertyNode::`vftable';
}
