/*
 * XREFs of ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C0132DD4
 * Callers:
 *     ??_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z @ 0x1C001C910 (--_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGSHAREDRESOURCECA::~DXGSHAREDRESOURCECA(DXGSHAREDRESOURCECA *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &DXGSHAREDRESOURCECA::`vftable';
  v2 = (void *)*((_QWORD *)this + 23);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 24);
  if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
    operator delete(v3);
  DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(this);
}
