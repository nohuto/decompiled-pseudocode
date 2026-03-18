/*
 * XREFs of ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0031640
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002E0A0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z @ 0x1C00316F0 (--0RGNMEMOBJ@@QEAA@W4DestructorDisposition@0@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C0031720 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0034588 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 * Callees:
 *     AllocateObject @ 0x1C0031800 (AllocateObject.c)
 */

void __fastcall RGNMEMOBJ::vInitialize(RGNMEMOBJ *this, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 Object; // rax
  _QWORD *v5; // rax

  v2 = a2;
  if ( a2 < 0xD8 )
    v2 = 216;
  Object = AllocateObject(v2);
  *(_QWORD *)this = Object;
  if ( Object )
  {
    *(_DWORD *)(Object + 80) = 120;
    *(_QWORD *)(Object + 84) = 1LL;
    *(_QWORD *)(Object + 92) = 0LL;
    *(_DWORD *)(Object + 100) = 0;
    *(_DWORD *)(Object + 104) = 0;
    *(_DWORD *)(Object + 108) = 0x80000000;
    *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(Object + 40) = Object + 120;
    *(_DWORD *)(*(_QWORD *)this + 24LL) = v2;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v5 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v5[1] = v5;
    *v5 = v5;
  }
}
