/*
 * XREFs of IopCheckInitiatorHint @ 0x1400DE090
 * Callers:
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IopSetFileObjectExtensionFlag @ 0x1400CC2B8 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x1400CC2E8 (IopGetSetSpecificExtension.c)
 *     IoGetInitiatorProcess @ 0x1400F2C2C (IoGetInitiatorProcess.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  _QWORD *Teb; // rax
  int SetSpecificExtension; // ebx
  __int64 v6; // r14
  PVOID InitiatorProcess; // rax
  PVOID v8; // rsi
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( (Teb[9] | 1LL) == Teb[252] )
  {
    v6 = Teb[251] & 1LL;
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(Teb[251] & 0xFFFFFFFFFFFFFFFEuLL),
                             0x40u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v11, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
      else
      {
        if ( a2 )
        {
          InitiatorProcess = (PVOID)IoGetInitiatorProcess(a2);
          v8 = Object;
          if ( InitiatorProcess != Object )
          {
            SetSpecificExtension = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          }
        }
        else
        {
          v8 = Object;
        }
        if ( SetSpecificExtension >= 0 )
        {
          *(_QWORD *)(v11 + 8) = v8;
          if ( (_BYTE)v6 == 1 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8, 0);
          }
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)SetSpecificExtension;
}
