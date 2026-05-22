/*
 * XREFs of ??1PropertyInfo@Input@@QEAA@XZ @ 0x180029870
 * Callers:
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$0 @ 0x1800A098C (_PropertyDefinitions--ProcessInit_--_1_--dtor$0.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$1 @ 0x1800A0998 (_PropertyDefinitions--ProcessInit_--_1_--dtor$1.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$2 @ 0x1800A09A4 (_PropertyDefinitions--ProcessInit_--_1_--dtor$2.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$3 @ 0x1800A09B0 (_PropertyDefinitions--ProcessInit_--_1_--dtor$3.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$4 @ 0x1800A09BC (_PropertyDefinitions--ProcessInit_--_1_--dtor$4.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$5 @ 0x1800A09C8 (_PropertyDefinitions--ProcessInit_--_1_--dtor$5.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$6 @ 0x1800A09D4 (_PropertyDefinitions--ProcessInit_--_1_--dtor$6.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$7 @ 0x1800A09E0 (_PropertyDefinitions--ProcessInit_--_1_--dtor$7.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$8 @ 0x1800A09EC (_PropertyDefinitions--ProcessInit_--_1_--dtor$8.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$9 @ 0x1800A09F8 (_PropertyDefinitions--ProcessInit_--_1_--dtor$9.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$10 @ 0x1800A0A04 (_PropertyDefinitions--ProcessInit_--_1_--dtor$10.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$11 @ 0x1800A0A10 (_PropertyDefinitions--ProcessInit_--_1_--dtor$11.c)
 *     _PropertyDefinitions::ProcessInit_::_1_::dtor$12 @ 0x1800A0A1C (_PropertyDefinitions--ProcessInit_--_1_--dtor$12.c)
 *     _PropertyDefinitions::DefineType_::_1_::dtor$0 @ 0x1800A0A55 (_PropertyDefinitions--DefineType_--_1_--dtor$0.c)
 *     _PropertyDefinitions::DefineProperty_::_1_::dtor$0 @ 0x1800A0A83 (_PropertyDefinitions--DefineProperty_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall Input::PropertyInfo::~PropertyInfo(Input::PropertyInfo *this)
{
  unsigned __int64 v1; // rdx

  v1 = *((_QWORD *)this + 5);
  if ( v1 >= 8 )
    std::_Deallocate(*((char **)this + 2), v1 + 1, 2uLL);
}
