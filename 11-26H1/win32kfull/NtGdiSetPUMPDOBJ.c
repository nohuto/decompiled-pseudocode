/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1400D63C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1400D4704 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D6EAC (-GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D6FD0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     _NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::_UMPDObjDereference @ 0x1400D7E90 (_NtGdiSetPUMPDOBJ_--_8_--UMPDObjDereference--_UMPDObjDereference.c)
 *     _NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::UMPDObjDereference @ 0x1400D7F50 (_NtGdiSetPUMPDOBJ_--_8_--UMPDObjDereference--UMPDObjDereference.c)
 *     ?PushThreadUMPDObj@UMPDOBJ@@QEAAXPEAU_GRETHREAD@@@Z @ 0x1400D85A0 (-PushThreadUMPDObj@UMPDOBJ@@QEAAXPEAU_GRETHREAD@@@Z.c)
 *     ?ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_W32PROCESS@@@Z @ 0x140247784 (-ReferenceServerProcess@UMPDOBJ@@QEAAXPEAU_W32PROCESS@@@Z.c)
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x140290C80 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 *     ?bSandboxedCurrentProcess@@YAEXZ @ 0x140296588 (-bSandboxedCurrentProcess@@YAEXZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(UMPDOBJ *this, int a2, void *a3, void *a4)
{
  UMPDOBJ *v7; // rbx
  Gre::Base *v8; // rcx
  struct _GRETHREAD *CurrentThread; // rsi
  struct Gre::Base::SESSION_GLOBALS *v10; // rax
  __int64 v11; // r8
  int v12; // eax
  struct UMPDOBJ *ThreadCurrentUMPDObj; // rax
  struct UMPDOBJ *v15; // rdi
  struct _GRETHREAD *v16; // rbx
  struct UMPDOBJ **v17; // rdx
  struct UMPDOBJ **v18; // rcx
  void *v19; // rcx
  _DWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _W32PROCESS *v23; // rdx
  int v24; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v25[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v26[32]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v27; // [rsp+68h] [rbp-10h]

  v7 = this;
  CurrentThread = GreGetCurrentThread((__int64)this);
  if ( CurrentThread )
  {
    if ( a2 )
    {
      v10 = Gre::Base::Globals(v8);
      if ( v7 )
      {
        LOBYTE(v11) = 17;
        v7 = (UMPDOBJ *)HmgShareLock(v10, v7, v11, 1LL);
      }
      if ( v7 )
      {
        NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::UMPDObjDereference(v26, v7);
        v25[0] = 0LL;
        v12 = *((unsigned __int8 *)v7 + 440);
        v24 = v12;
        if ( a4 )
        {
          GreProbeAndWriteToUntrustedVa(a4, 4uLL, &v24, 4uLL, 1uLL);
          v12 = v24;
        }
        if ( v12 )
        {
          if ( !bSandboxedCurrentProcess()
            && *((_DWORD *)v7 + 106) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
            && *((struct _GRETHREAD **)CurrentThread + 9) == (struct _GRETHREAD *)((char *)CurrentThread + 72) )
          {
            v20 = (_DWORD *)Win32AllocPoolZInit(16LL, 1684631623LL);
            v25[1] = v20;
            if ( v20 )
            {
              GreProbeAndWriteToUntrustedVa(a3, 8uLL, v25, 8uLL, 1uLL);
              if ( UMPDOBJ::bTryAcquireExclussiveAccess(v7) )
              {
                *(_QWORD *)v20 = *((_QWORD *)v7 + 52);
                v20[2] = *((_DWORD *)v7 + 106);
                *((_QWORD *)CurrentThread + 8) = v20;
                CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
                v23 = (struct _W32PROCESS *)CurrentProcessWin32Process;
                if ( CurrentProcessWin32Process )
                  v23 = (struct _W32PROCESS *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
                UMPDOBJ::ReferenceServerProcess(v7, v23);
                UMPDOBJ::PushThreadUMPDObj(v7, CurrentThread);
                v27 = 0LL;
                goto LABEL_11;
              }
              Win32FreePool(v20);
            }
          }
        }
        else if ( UMPDOBJ::GetThreadCurrentUMPDObj(CurrentThread) == v7 )
        {
          GreProbeAndWriteToUntrustedVa(a3, 8uLL, v25, 8uLL, 1uLL);
LABEL_11:
          NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::_UMPDObjDereference(v26);
          return 1LL;
        }
        NtGdiSetPUMPDOBJ_::_8_::UMPDObjDereference::_UMPDObjDereference(v26);
      }
    }
    else if ( a3 )
    {
      v25[0] = 0LL;
      GreProbeAndReadFromUntrustedVa(v25, 8uLL, a3, 8uLL, 1uLL);
      ThreadCurrentUMPDObj = UMPDOBJ::GetThreadCurrentUMPDObj(CurrentThread);
      v15 = ThreadCurrentUMPDObj;
      if ( ThreadCurrentUMPDObj )
      {
        if ( v25[0] == *(_QWORD *)ThreadCurrentUMPDObj )
        {
          if ( !*((_BYTE *)ThreadCurrentUMPDObj + 440) )
            return 1LL;
          v16 = (struct _GRETHREAD *)*((_QWORD *)ThreadCurrentUMPDObj + 3);
          if ( v16 == GreGetCurrentThread(*(_QWORD *)ThreadCurrentUMPDObj) )
          {
            *((_BYTE *)v15 + 32) |= 2u;
            v17 = (struct UMPDOBJ **)*((_QWORD *)v15 + 5);
            v18 = (struct UMPDOBJ **)*((_QWORD *)v15 + 6);
            if ( v17[1] != (struct UMPDOBJ *)((char *)v15 + 40) || *v18 != (struct UMPDOBJ *)((char *)v15 + 40) )
              __fastfail(3u);
            *v18 = (struct UMPDOBJ *)v17;
            v17[1] = (struct UMPDOBJ *)v18;
            UMPDOBJ::FreeNonCachedUserMem(v15);
            UMPDOBJ::Dereference(v15);
            v19 = (void *)*((_QWORD *)CurrentThread + 8);
            if ( v19 )
            {
              Win32FreePool(v19);
              *((_QWORD *)CurrentThread + 8) = 0LL;
            }
            return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
