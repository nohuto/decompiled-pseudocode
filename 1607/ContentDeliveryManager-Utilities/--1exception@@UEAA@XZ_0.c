/*
 * XREFs of ??1exception@@UEAA@XZ_0 @ 0x180058D5C
 * Callers:
 *     ??1bad_alloc@std@@UEAA@XZ @ 0x180053A44 (--1bad_alloc@std@@UEAA@XZ.c)
 *     ??1out_of_range@std@@UEAA@XZ @ 0x180053A5C (--1out_of_range@std@@UEAA@XZ.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180053A70 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Glength_error@std@@UEAAPEAXI@Z @ 0x180053AB0 (--_Glength_error@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall exception::~exception(exception *this)
{
  __imp_??1exception@@UEAA@XZ(this);
}
