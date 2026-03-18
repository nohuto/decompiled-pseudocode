/*
 * XREFs of ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C022805C
 * Callers:
 *     GetPointerTransformInternal @ 0x1C01E1478 (GetPointerTransformInternal.c)
 *     GetMiPInputTransform @ 0x1C01E246C (GetMiPInputTransform.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C0227EE4 (--1CAutoPushLockSh@@QEAA@XZ.c)
 *     ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1C0227FC8 (-FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z.c)
 */

__int64 __fastcall InputTransform::GetTransformList(
        InputTransform *this,
        struct tagWND *a2,
        __int64 a3,
        unsigned __int64 *a4,
        struct tagINPUT_TRANSFORM *a5)
{
  unsigned int v7; // r12d
  __int64 v8; // rsi
  struct tagINPUTTRANSFORMLIST **EntryByTime; // rdx
  __int64 i; // rdi
  unsigned __int64 *v12; // rbx
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  int v14; // [rsp+98h] [rbp+10h]
  __int64 v15; // [rsp+A0h] [rbp+18h]
  unsigned __int64 *v16; // [rsp+A8h] [rbp+20h]

  v16 = a4;
  v15 = a3;
  v14 = (int)a2;
  v7 = (unsigned int)a2;
  v8 = *((_QWORD *)this + 42);
  if ( !v8 )
    return 0LL;
  v13 = *((_QWORD *)this + 42);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v8, 0LL);
  EntryByTime = *(struct tagINPUTTRANSFORMLIST ***)(v8 + 8);
  if ( EntryByTime == (struct tagINPUTTRANSFORMLIST **)(v8 + 8) )
  {
    CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v13);
    return 0LL;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    LODWORD(a5) = i;
    if ( (unsigned int)i >= v7 )
      break;
    EntryByTime = FindEntryByTime((struct tagINPUTTRANSFORMLIST *)v8, EntryByTime, *(_QWORD *)(a3 + 8 * i));
    v12 = &a4[8 * (unsigned __int64)(unsigned int)i];
    if ( (unsigned __int64)v12 >= W32UserProbeAddress )
      v12 = (unsigned __int64 *)W32UserProbeAddress;
    *(_OWORD *)v12 = *(_OWORD *)(EntryByTime + 3);
    *((_OWORD *)v12 + 1) = *(_OWORD *)(EntryByTime + 5);
    *((_OWORD *)v12 + 2) = *(_OWORD *)(EntryByTime + 7);
    *((_OWORD *)v12 + 3) = *(_OWORD *)(EntryByTime + 9);
  }
  CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)&v13);
  return 1LL;
}
