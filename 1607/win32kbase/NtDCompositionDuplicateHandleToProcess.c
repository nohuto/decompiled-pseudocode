/*
 * XREFs of NtDCompositionDuplicateHandleToProcess @ 0x1C00E3520
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00485A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall NtDCompositionDuplicateHandleToProcess(void *a1, int a2, HANDLE *a3)
{
  void *v4; // r14
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rcx
  int CurrentProcessSessionId; // eax
  HANDLE Handle; // [rsp+40h] [rbp-88h] BYREF
  void *ProcessHandle; // [rsp+48h] [rbp-80h] BYREF
  PVOID v13; // [rsp+50h] [rbp-78h] BYREF
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PVOID v15; // [rsp+60h] [rbp-68h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-50h] BYREF
  int ProcessInformation; // [rsp+E8h] [rbp+20h] BYREF

  v4 = (void *)a2;
  v6 = -1073741790;
  if ( UserIsCurrentProcessDwm((__int64)a1) )
  {
    if ( !a1 && (_DWORD)v4 == -1414746709 && !a3 )
      MEMORY[0] = 119277;
    LOBYTE(v7) = 1;
    v6 = DirectComposition::ResourceObject::ResolveHandle(
           a1,
           1LL,
           v7,
           (struct DirectComposition::ResourceObject **)&v15);
    if ( v6 >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v4;
      v6 = ZwOpenProcess(&ProcessHandle, 0x40u, &ObjectAttributes, &ClientId);
      if ( v6 >= 0 )
      {
        v6 = ZwQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
        if ( v6 >= 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
          if ( CurrentProcessSessionId != ProcessInformation )
            v6 = -1073741790;
        }
        if ( v6 >= 0 )
        {
          v6 = ObReferenceObjectByHandleWithTag(ProcessHandle, 0x40u, 0LL, 0, 0, &Object, 0LL);
          if ( v6 >= 0 )
          {
            v6 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &v13, 0LL);
            if ( v6 >= 0 )
            {
              Handle = (HANDLE)-1LL;
              v6 = ObDuplicateObject(v13, a1, Object, &Handle, 0x80000000, 0, 2, 1);
              if ( v6 >= 0 )
              {
                if ( (unsigned __int64)a3 >= W32UserProbeAddress )
                  a3 = (HANDLE *)W32UserProbeAddress;
                *a3 = Handle;
              }
              ObfDereferenceObjectWithTag(v13, 0);
            }
            ObfDereferenceObjectWithTag(Object, 0);
          }
        }
        ObCloseHandle(ProcessHandle, 0);
      }
      ObfDereferenceObject(v15);
    }
  }
  return (unsigned int)v6;
}
