/*
 * XREFs of ?IsApplied@RmpRpExtResourceSetThunk@@UEBA_NXZ @ 0x180029B80
 * Callers:
 *     <none>
 * Callees:
 *     ?RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z @ 0x18002D2BC (-RmSrvResourceSetIsApplied@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAK@Z.c)
 */

bool __fastcall RmpRpExtResourceSetThunk::IsApplied(RmpRpExtResourceSetThunk *this)
{
  int IsApplied; // eax
  unsigned int v2; // ecx
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  IsApplied = RmSrvResourceSetIsApplied(*((struct _RM_SERVICE_GLOBALS **)this + 1), *((_QWORD *)this + 2), &v4);
  v2 = v4;
  if ( IsApplied < 0 )
    v2 = 0;
  return v2 != 0;
}
