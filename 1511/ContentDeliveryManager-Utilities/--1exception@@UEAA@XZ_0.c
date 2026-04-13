/*
 * XREFs of ??1exception@@UEAA@XZ_0 @ 0x18002806C
 * Callers:
 *     ??1bad_alloc@std@@UEAA@XZ @ 0x180022BAC (--1bad_alloc@std@@UEAA@XZ.c)
 *     ??1out_of_range@std@@UEAA@XZ @ 0x180022BC4 (--1out_of_range@std@@UEAA@XZ.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180022BD0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Glength_error@std@@UEAAPEAXI@Z @ 0x180022C10 (--_Glength_error@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall exception::~exception(exception *this)
{
  __imp_??1exception@@UEAA@XZ(this);
}
