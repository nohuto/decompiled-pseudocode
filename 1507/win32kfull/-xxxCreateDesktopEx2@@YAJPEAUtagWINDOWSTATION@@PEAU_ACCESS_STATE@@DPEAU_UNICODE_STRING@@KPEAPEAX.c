/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C014E2AC
 * Callers:
 *     ParseDesktop @ 0x1C007ED64 (ParseDesktop.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0055B70 (DesktopAlloc.c)
 *     CreateDesktopHeap @ 0x1C014E600 (CreateDesktopHeap.c)
 *     GetDesktopHeapSize @ 0x1C014E6D0 (GetDesktopHeapSize.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall xxxCreateDesktopEx2(
        _QWORD *Object,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5,
        void **a6)
{
  unsigned __int16 v9; // si
  char v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  __int64 v14; // r9
  __int64 result; // rax
  PVOID v16; // rax
  unsigned int DesktopHeapSize; // ebx
  __int64 DesktopHeap; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  PVOID v27; // rdx
  unsigned __int8 MemoryAllocated[4]; // [rsp+58h] [rbp-19h] BYREF
  NTSTATUS ObjectSecurity; // [rsp+5Ch] [rbp-15h]
  PVOID Objecta; // [rsp+60h] [rbp-11h] BYREF
  __int64 v31; // [rsp+68h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-1h] BYREF
  int v33; // [rsp+78h] [rbp+7h] BYREF
  __int64 v34; // [rsp+80h] [rbp+Fh]
  struct _UNICODE_STRING *v35; // [rsp+88h] [rbp+17h]
  int v36; // [rsp+90h] [rbp+1Fh]
  __int128 v37; // [rsp+98h] [rbp+27h]

  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(Object, 8LL, a2) )
    return (unsigned int)ObjectSecurity;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12, v11);
  if ( (Object[4] & 2) != 0 && PsGetProcessId(CurrentProcess) != (HANDLE)gpidLogon )
  {
    v31 = 0LL;
    GetProcessLuid(0LL, &v31);
    if ( v31 == Object[18] )
      return 3221226091LL;
  }
  v35 = a4;
  LOBYTE(v14) = 1;
  v33 = 48;
  v34 = 0LL;
  v36 = 0;
  v37 = 0LL;
  result = ObCreateObject(0LL, ExDesktopObjectType, &v33, v14, 0LL, 328, 0, 0, &Objecta);
  ObjectSecurity = result;
  if ( (int)result >= 0 )
  {
    memset(Objecta, 0, 0x148uLL);
    *(_DWORD *)Objecta = gSessionId;
    ObjectSecurity = ObGetObjectSecurity(Object, &SecurityDescriptor, MemoryAllocated);
    if ( ObjectSecurity >= 0 )
    {
      ObjectSecurity = ObAssignSecurity(a2, SecurityDescriptor, Objecta, ExDesktopObjectType);
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
      if ( ObjectSecurity >= 0 )
      {
        if ( (Object[4] & 4) != 0 )
        {
          v9 = 3;
        }
        else
        {
          v16 = (PVOID)Object[2];
          if ( v16 )
          {
            if ( gspdeskDisconnect )
            {
              if ( v16 == gspdeskDisconnect )
                v10 = 1;
            }
            else
            {
              v9 = 2;
            }
          }
          else
          {
            v9 = 1;
          }
        }
        if ( a5 )
          DesktopHeapSize = a5 << 10;
        else
          DesktopHeapSize = GetDesktopHeapSize(v9);
        if ( DesktopHeapSize < 0x2000 )
          DesktopHeapSize = 0x2000;
        DesktopHeap = CreateDesktopHeap((char *)Objecta + 120, DesktopHeapSize);
        *((_QWORD *)Objecta + 14) = DesktopHeap;
        if ( *((_QWORD *)Objecta + 14) )
        {
          *((_DWORD *)Objecta + 32) = DesktopHeapSize;
          v19 = DesktopAlloc((__int64)Objecta, 0x108u);
          v20 = v19;
          if ( v19 )
          {
            *((_QWORD *)Objecta + 1) = v19;
            v21 = (char *)Objecta + 160;
            *((_QWORD *)Objecta + 21) = (char *)Objecta + 160;
            *v21 = v21;
            v22 = (char *)Objecta + 248;
            *((_QWORD *)Objecta + 32) = (char *)Objecta + 248;
            *v22 = v22;
            v23 = gdwDesktopId + 1;
            gdwDesktopId = v23;
            if ( v23 == 0xFFFFFFFFLL )
            {
              LODWORD(v23) = 1;
              gdwDesktopId = 1LL;
            }
            *((_QWORD *)Objecta + 5) = (unsigned int)v23 | ((_QWORD)Objecta << 32);
            v24 = *((_QWORD *)Objecta + 15);
            *v20 = v24;
            v20[1] = v24 + DesktopHeapSize;
            LockObjectAssignment((char *)Objecta + 24, Object);
            if ( !Object[2] )
            {
              if ( (Object[4] & 4) == 0 )
                LockObjectAssignment(&grpdeskLogon, Objecta);
              LockObjectAssignment(*(_QWORD *)(Object[3] + 8LL) + 24LL, Objecta);
            }
            LockObjectAssignment((char *)Objecta + 16, Object[2]);
            LockObjectAssignment(Object + 2, Objecta);
            p_RemainingDesiredAccess = &a2->RemainingDesiredAccess;
            RemainingDesiredAccess = a2->RemainingDesiredAccess;
            if ( (RemainingDesiredAccess & 0x2000000) != 0 )
              *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
            RtlMapGenericMask(&a2->RemainingDesiredAccess, DesktopMapping);
            v27 = Objecta;
            *p_RemainingDesiredAccess &= DesktopMapping->GenericAll | 0x1000000;
            *a6 = v27;
            if ( v10 )
              LockObjectAssignment(grpdeskIODefault, v27);
            return 0LL;
          }
        }
        else if ( (*gpsi & 0x100) != 0 )
        {
          *gpsi &= ~0x100u;
          UserLogError(2147483892LL);
        }
        ObjectSecurity = -1073741801;
      }
    }
    ObfDereferenceObject(Objecta);
    return (unsigned int)ObjectSecurity;
  }
  return result;
}
