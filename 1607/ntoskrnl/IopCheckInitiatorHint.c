/*
 * XREFs of IopCheckInitiatorHint @ 0x14009CF4C
 * Callers:
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     IopSetFileObjectExtensionFlag @ 0x140079F70 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x14007AE90 (IopGetSetSpecificExtension.c)
 *     IoGetInitiatorProcess @ 0x1400B410C (IoGetInitiatorProcess.c)
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 *     RtlIsSandboxedToken @ 0x140412A10 (RtlIsSandboxedToken.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  _QWORD *Teb; // rbx
  __int64 v5; // rcx
  char v6; // bl
  __int64 v7; // r9
  __int64 v8; // r9
  PVOID InitiatorProcess; // rax
  int SetSpecificExtension; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  SetSpecificExtension = 0;
  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || (unsigned __int8)KeIsAttachedProcess() )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( (Teb[9] | 1LL) == Teb[252] && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v5 = Teb[251];
    v6 = v5 & 1;
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(v5 & 0xFFFFFFFFFFFFFFFEuLL),
                             0x40u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      LOBYTE(v7) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1u, 32LL, v7, &v13, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
      else
      {
        if ( a2 )
        {
          InitiatorProcess = (PVOID)IoGetInitiatorProcess(a2);
          if ( InitiatorProcess != Object )
          {
            SetSpecificExtension = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          }
        }
        if ( SetSpecificExtension >= 0 )
        {
          *(_QWORD *)(v13 + 8) = Object;
          if ( v6 == 1 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8, 0LL, v8);
          }
        }
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
