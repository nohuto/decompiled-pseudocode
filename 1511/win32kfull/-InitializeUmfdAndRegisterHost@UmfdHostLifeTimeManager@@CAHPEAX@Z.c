/*
 * XREFs of ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@CAHPEAX@Z @ 0x1C02B8B24
 * Callers:
 *     NtGdiExtEscape @ 0x1C0140160 (NtGdiExtEscape.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C003C6F0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C00D911C (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ?ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C02B8D74 (-ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 *     ?UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ @ 0x1C02B8FF8 (-UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager@@CAXXZ.c)
 */

__int64 __fastcall UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(HANDLE Handle)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rdi
  PVOID v4; // rax
  NTSTATUS v5; // eax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&v8);
  UmfdHostLifeTimeManager::UnreferenceUmfdHostWithNoLock();
  UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x63497355u);
  if ( !PoolWithTag )
    goto LABEL_2;
  v4 = ExAllocatePoolWithTag(PagedPoolSession, 0x2000uLL, 0x63497355u);
  if ( !v4 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_2:
    UmfdFileviewLookup = 0LL;
    goto LABEL_8;
  }
  PoolWithTag[6] = v4;
  PoolWithTag[4] = 512LL;
  PoolWithTag[5] = 0LL;
  PoolWithTag[3] = 0LL;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  UmfdFileviewLookup = PoolWithTag;
  v5 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  UmfdHostLifeTimeManager::s_UmfdHostProcess = Object;
  if ( v5 >= 0 )
  {
    ++UmfdHostLifeTimeManager::s_UmfdHostGenerationId;
    v2 = 1;
    UmfdHostLifeTimeManager::s_Launched = 1;
    UmfdHostLifeTimeManager::s_Ready = 1;
  }
  else
  {
    UmfdHostLifeTimeManager::ReleaseUmfdFileviewWithNoLock();
    UmfdHostLifeTimeManager::s_UmfdHostProcess = 0LL;
  }
LABEL_8:
  KeSetEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, 0, 0);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v8);
  return v2;
}
