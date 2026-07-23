/*
 * XREFs of AlpcpExposeTokenAttribute @ 0x14042B240
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x14042C820 (AlpcpExposeAttributes.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     PsIsHostSilo @ 0x140079E50 (PsIsHostSilo.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x14007A640 (SepReconcileTrustSidWithProcessProtection.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x14065335C (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, PERESOURCE *a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // esi
  PERESOURCE *v9; // rcx
  struct _KTHREAD *v10; // rax
  PERESOURCE *v11; // rdi
  PERESOURCE v12; // rbx
  int v14; // ecx
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r13
  PSID *v18; // r12
  int v19; // r13d
  int ClientSecurity; // ebx
  PSID *CurrentServerSilo; // rdi
  PSID *v22; // rcx
  char v23; // [rsp+60h] [rbp-D8h]
  char v24; // [rsp+61h] [rbp-D7h] BYREF
  char v25[2]; // [rsp+62h] [rbp-D6h] BYREF
  int v26; // [rsp+64h] [rbp-D4h]
  PERESOURCE *v27; // [rsp+68h] [rbp-D0h]
  struct _KTHREAD *v28; // [rsp+70h] [rbp-C8h]
  __int64 v29; // [rsp+78h] [rbp-C0h] BYREF
  struct _KTHREAD *v30; // [rsp+80h] [rbp-B8h]
  __int64 v31; // [rsp+88h] [rbp-B0h]
  PERESOURCE v32; // [rsp+90h] [rbp-A8h]
  PERESOURCE v33; // [rsp+98h] [rbp-A0h]
  _BYTE v34[16]; // [rsp+C0h] [rbp-78h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-68h]
  char v36; // [rsp+148h] [rbp+10h]

  if ( (*(_DWORD *)(a2 + 40) & 0x80u) != 0 )
    return (unsigned int)-1073740029;
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
    v7 = *(_QWORD *)(a2 + 24);
    if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
    {
      if ( v7 )
      {
        v14 = *(_DWORD *)(v7 + 416);
        if ( (v14 & 6) == 4 )
        {
          if ( (v14 & 0x400) != 0 )
          {
            v15 = *(_QWORD *)(a2 + 32);
            if ( v15 )
            {
              v24 = 0;
              v8 = 0;
              v29 = 0LL;
              CurrentThread = KeGetCurrentThread();
              v28 = CurrentThread;
              if ( (struct _KTHREAD *)v15 == CurrentThread )
                Process = (__int64)CurrentThread->ApcState.Process;
              else
                Process = *(_QWORD *)(v15 + 544);
              if ( (*(_DWORD *)(v15 + 1724) & 8) == 0 )
                goto LABEL_18;
              v31 = *(_QWORD *)(v15 + 544);
              v30 = KeGetCurrentThread();
              PspLockThreadSecurityShared(v15, (__int64)v30);
              if ( (*(_DWORD *)(v15 + 1724) & 8) != 0 )
              {
                v18 = (PSID *)(*(_QWORD *)(v15 + 1624) & 0xFFFFFFFFFFFFFFF8uLL);
                ObfReferenceObject(v18);
                v26 = *(_DWORD *)(v15 + 1624) & 3;
                v36 = (*(_BYTE *)(v15 + 1624) & 4) != 0;
                v25[0] = *(_BYTE *)(v31 + 1722);
              }
              else
              {
                v18 = 0LL;
              }
              PspUnlockThreadSecurityShared(v15, (__int64)v30);
              if ( v18 )
              {
                v19 = 2;
              }
              else
              {
LABEL_18:
                v18 = (PSID *)ObFastReferenceObject((signed __int64 *)(Process + 856));
                if ( !v18 )
                {
                  PspLockProcessShared(Process, (__int64)v28);
                  v18 = (PSID *)ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
                  PspUnlockProcessShared(Process, (__int64)v28);
                }
                v36 = 0;
                v25[0] = *(_BYTE *)(Process + 1722);
                v19 = 1;
              }
              SepReconcileTrustSidWithProcessProtection(v18[138], v25, &v24, &v29);
              ClientSecurity = SepCreateClientSecurityEx(
                                 (_DWORD)v18,
                                 (int)v7 + 260,
                                 0,
                                 v19,
                                 v36,
                                 v26,
                                 1,
                                 v15,
                                 v24,
                                 v29,
                                 (__int64)v34);
              if ( ClientSecurity >= 0 && v34[8] )
              {
                if ( *(PEPROCESS *)(v15 + 544) != PsInitialSystemProcess )
                  goto LABEL_24;
                CurrentServerSilo = (PSID *)PsGetCurrentServerSilo();
                if ( !PsIsHostSilo((__int64)CurrentServerSilo) )
                {
                  ClientSecurity = SepUpdateSiloInClientSecurity(v34, CurrentServerSilo);
                  if ( ClientSecurity < 0 )
                    ObfDereferenceObject(v18);
                }
                if ( !CurrentServerSilo )
                  goto LABEL_24;
                v22 = CurrentServerSilo;
              }
              else
              {
                v22 = v18;
              }
              ObfDereferenceObject(v22);
LABEL_24:
              if ( ClientSecurity >= 0 )
              {
                v9 = (PERESOURCE *)Object;
                v27 = (PERESOURCE *)Object;
                v23 = 1;
                goto LABEL_7;
              }
              v8 = ClientSecurity;
              v9 = v27;
LABEL_28:
              if ( v8 < 0 )
                return (unsigned int)v8;
              goto LABEL_7;
            }
          }
          else
          {
            v9 = *(PERESOURCE **)(v7 + 80);
            if ( v9 )
            {
              v27 = *(PERESOURCE **)(v7 + 80);
              v23 = 0;
              v8 = 0;
              goto LABEL_28;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741790;
  }
  if ( *(int *)(v6 + 36) < 1 )
    return (unsigned int)-1073741790;
  v9 = *(PERESOURCE **)(v6 + 48);
  v27 = v9;
  v23 = 0;
  v8 = 0;
LABEL_7:
  v33 = v9[3];
  v32 = v9[2];
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = v27;
  ExAcquireResourceSharedLite(v27[6], 1u);
  v12 = v11[7];
  ExReleaseResourceLite(v11[6]);
  KeLeaveCriticalRegion();
  if ( v23 )
    ObfDereferenceObject(Object);
  *a3 = v32;
  a3[1] = v33;
  a3[2] = v12;
  *a4 |= 0x8000000u;
  return (unsigned int)v8;
}
