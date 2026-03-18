/*
 * XREFs of ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C012C884
 * Callers:
 *     ??_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z @ 0x1C001C110 (--_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGSHAREDRESOURCECA::~DXGSHAREDRESOURCECA(
        DXGSHAREDRESOURCECA *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &DXGSHAREDRESOURCECA::`vftable';
  v5 = (void *)*((_QWORD *)this + 23);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = (void *)*((_QWORD *)this + 24);
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
    operator delete(v6);
  DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(this, a2, a3, a4);
}
