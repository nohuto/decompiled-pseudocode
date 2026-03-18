/*
 * XREFs of NtDCompositionDuplicateHandleToProcess @ 0x1C00D5C20
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007700C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionDuplicateHandleToProcess(void *a1, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  int v4; // ebx
  __int64 v7; // rcx
  int CurrentProcessSessionId; // eax
  char v10; // [rsp+40h] [rbp-21h]
  void *ProcessHandle; // [rsp+48h] [rbp-19h] BYREF
  PVOID v12; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  PVOID v14; // [rsp+60h] [rbp-1h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+68h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+17h] BYREF
  int ProcessInformation; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = (void *)(int)a2;
  v4 = -1073741790;
  if ( UserIsCurrentProcessDwm((__int64)a1, a2) )
  {
    v4 = DirectComposition::ResourceObject::ResolveHandle(a1, 1u, 1, (struct DirectComposition::ResourceObject **)&v14);
    if ( v4 >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ClientId.UniqueThread = 0LL;
      ClientId.UniqueProcess = v3;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenProcess(&ProcessHandle, 0x40u, &ObjectAttributes, &ClientId);
      if ( v4 >= 0 )
      {
        v4 = ZwQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
        if ( v4 >= 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
          if ( CurrentProcessSessionId != ProcessInformation )
            v4 = -1073741790;
          if ( v4 >= 0 )
          {
            v4 = ObReferenceObjectByHandleWithTag(ProcessHandle, 0x40u, 0LL, 0, 0, &Object, 0LL);
            if ( v4 >= 0 )
            {
              v4 = ObReferenceObjectByHandleWithTag((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x40u, 0LL, 0, 0, &v12, 0LL);
              if ( v4 >= 0 )
              {
                v10 = 1;
                v4 = ObDuplicateObject(v12, a1, Object, a3, 0x80000000, 0, 2, v10);
                ObfDereferenceObjectWithTag(v12, 0);
              }
              ObfDereferenceObjectWithTag(Object, 0);
            }
          }
        }
        ObCloseHandle(ProcessHandle, 0);
      }
      ObfDereferenceObject(v14);
    }
  }
  return (unsigned int)v4;
}
