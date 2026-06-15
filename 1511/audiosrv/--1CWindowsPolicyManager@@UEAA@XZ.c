/*
 * XREFs of ??1CWindowsPolicyManager@@UEAA@XZ @ 0x18009DA84
 * Callers:
 *     ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x18009DB58 (--_GCWindowsPolicyManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800399C4 (-Release@CRefCountedObject@@QEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?DestroyApplicationManager@@YAJXZ @ 0x18009E6CC (-DestroyApplicationManager@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowsPolicyManager::~CWindowsPolicyManager(CWindowsPolicyManager *this)
{
  CRefCountedObject *v2; // rcx
  CRefCountedObject *v3; // rcx
  __int64 v4; // rsi
  CUnknown *v5; // rcx

  *(_QWORD *)this = &CWindowsPolicyManager::`vftable'{for `IAudioPolicyManager'};
  *((_QWORD *)this + 1) = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 2) = &CWindowsPolicyManager::`vftable'{for `CUnknown'};
  DestroyApplicationManager();
  v2 = (CRefCountedObject *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CRefCountedObject::Release(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (CRefCountedObject *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    CRefCountedObject::Release(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (CUnknown *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    CUnknown::Release(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
}
