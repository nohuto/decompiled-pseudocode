/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14061418C
 * Callers:
 *     IoctlDeviceDispatch @ 0x140612A54 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140091EE0 (PsGetPermanentSiloContext.c)
 *     ZwUnloadKey2 @ 0x14015D300 (ZwUnloadKey2.c)
 *     ULongLongMult @ 0x1401B7584 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x14020F794 (PsGetJobSilo.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     VrpCleanupNamespace @ 0x140612E20 (VrpCleanupNamespace.c)
 *     VrpLockJobContextExclusive @ 0x140612F24 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140613060 (VrpUnlockJobContextExclusive.c)
 *     VrpDestroyNamespaceNode @ 0x140614978 (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        ULONGLONG pullResult,
        __int64 a6)
{
  int JobSilo; // ebx
  int PermanentSiloContext; // eax
  __int64 v8; // rdi
  __int64 v9; // r8
  ULONGLONG v10; // rax
  ULONGLONG i; // rbx
  ULONGLONG v12; // rdx
  __int64 v13; // r14
  int v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-18h]
  __int128 v19; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  Object = 0LL;
  a6 = 0LL;
  pullResult = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      PermanentSiloContext = PsGetPermanentSiloContext(pullResult, gVregSiloContextSlot, (unsigned __int64 *)&a6);
      JobSilo = PermanentSiloContext;
      if ( PermanentSiloContext >= 0 )
      {
        v8 = a6;
        VrpLockJobContextExclusive(a6);
        if ( *(_DWORD *)(v8 + 84) )
        {
          JobSilo = -1073741738;
          VrpUnlockJobContextExclusive(v8);
          goto LABEL_21;
        }
        v10 = *(_QWORD *)(v8 + 48);
        for ( i = 0LL; i < v10; v10 = *(_QWORD *)(v8 + 48) )
        {
          v12 = 0LL;
          if ( i < v10 )
          {
            if ( ULongLongMult(*(_QWORD *)(v8 + 40), i, &pullResult) < 0
              || (v12 = *(_QWORD *)(v8 + 72) + pullResult, v12 < *(_QWORD *)(v8 + 72)) )
            {
              v12 = 0LL;
            }
          }
          v13 = *(_QWORD *)v12;
          if ( (*(_DWORD *)(*(_QWORD *)v12 + 48LL) & 1) != 0 )
          {
            v16 = 0LL;
            v17 = v13 + 16;
            v15 = 48;
            v18 = 576;
            v19 = 0LL;
            ZwUnloadKey2((__int64)&v15, 1LL, v9);
            VrpDestroyNamespaceNode(v8);
          }
          else
          {
            ++i;
          }
        }
        VrpCleanupNamespace(v8);
        VrpUnlockJobContextExclusive(v8);
      }
      else if ( PermanentSiloContext != -1073741275 )
      {
        goto LABEL_21;
      }
      JobSilo = 0;
    }
  }
LABEL_21:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
