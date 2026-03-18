/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C00D090C
 * Callers:
 *     ParseDesktop @ 0x1C00CF5A4 (ParseDesktop.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0072310 (DesktopAlloc.c)
 *     CreateDesktopHeap @ 0x1C00D0C64 (CreateDesktopHeap.c)
 *     GetDesktopHeapSize @ 0x1C00D0D40 (GetDesktopHeapSize.c)
 *     memset @ 0x1C0152CC0 (memset.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KPROCESS *CurrentProcess; // rax
  __int64 v16; // r9
  __int64 result; // rax
  PVOID v18; // rax
  unsigned int DesktopHeapSize; // ebx
  __int64 DesktopHeap; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  PVOID v29; // rdx
  NTSTATUS *v30; // [rsp+38h] [rbp-39h]
  unsigned __int8 MemoryAllocated[4]; // [rsp+58h] [rbp-19h] BYREF
  NTSTATUS ObjectSecurity; // [rsp+5Ch] [rbp-15h] BYREF
  PVOID Objecta; // [rsp+60h] [rbp-11h] BYREF
  __int64 v34; // [rsp+68h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-1h] BYREF
  int v36; // [rsp+78h] [rbp+7h] BYREF
  __int64 v37; // [rsp+80h] [rbp+Fh]
  struct _UNICODE_STRING *v38; // [rsp+88h] [rbp+17h]
  int v39; // [rsp+90h] [rbp+1Fh]
  __int128 v40; // [rsp+98h] [rbp+27h]

  v30 = &ObjectSecurity;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(Object, 8LL, a2) )
    return (unsigned int)ObjectSecurity;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12, v11, v13, v14);
  if ( (Object[4] & 2) != 0 && PsGetProcessId(CurrentProcess) != (HANDLE)gpidLogon )
  {
    v34 = 0LL;
    GetProcessLuid(0LL, &v34);
    if ( v34 == Object[18] )
      return 3221226091LL;
  }
  v38 = a4;
  LODWORD(v30) = 0;
  LOBYTE(v16) = 1;
  v36 = 48;
  v37 = 0LL;
  v39 = 0;
  v40 = 0LL;
  result = ObCreateObject(0LL, ExDesktopObjectType, &v36, v16, 0LL, 336, v30, 0, &Objecta);
  ObjectSecurity = result;
  if ( (int)result >= 0 )
  {
    memset(Objecta, 0, 0x150uLL);
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
          v18 = (PVOID)Object[2];
          if ( v18 )
          {
            if ( gspdeskDisconnect )
            {
              if ( v18 == gspdeskDisconnect )
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
          v21 = DesktopAlloc((__int64)Objecta, 0xF8u);
          v22 = v21;
          if ( v21 )
          {
            *((_QWORD *)Objecta + 1) = v21;
            v23 = (char *)Objecta + 160;
            *((_QWORD *)Objecta + 21) = (char *)Objecta + 160;
            *v23 = v23;
            v24 = (char *)Objecta + 304;
            *((_QWORD *)Objecta + 39) = (char *)Objecta + 304;
            *v24 = v24;
            v25 = gdwDesktopId + 1;
            gdwDesktopId = v25;
            if ( v25 == 0xFFFFFFFFLL )
            {
              LODWORD(v25) = 1;
              gdwDesktopId = 1LL;
            }
            *((_QWORD *)Objecta + 5) = (unsigned int)v25 | ((_QWORD)Objecta << 32);
            v26 = *((_QWORD *)Objecta + 15);
            *v22 = v26;
            v22[1] = v26 + DesktopHeapSize;
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
            v29 = Objecta;
            *p_RemainingDesiredAccess &= DesktopMapping->GenericAll | 0x1000000;
            *a6 = v29;
            if ( v10 )
              LockObjectAssignment(grpdeskIODefault, v29);
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
