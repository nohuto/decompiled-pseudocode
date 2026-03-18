/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C011C590
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C011C208 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C011C548 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C011C7C4 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C011C8F4 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C011C934 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B110 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C025B148 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025B1A0 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x1C0286584 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C02A2758 (--0PROXYPORT@@QEAA@_K@Z.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rbp
  int v7; // eax
  unsigned __int64 v8; // rdx
  UMPDOBJ *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _UMPDHEAP *v12; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  _BYTE v15[48]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  memset(this, 0, 0x1B8uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = 0;
  v6 = (_QWORD *)ThreadWin32Thread;
  if ( !CurrentProcessWin32Process || !ThreadWin32Thread )
    return 0LL;
  v7 = bSandboxedCurrentProcess();
  *((_DWORD *)this + 109) = v7;
  if ( !v7 )
  {
    if ( (_QWORD *)v6[5] == v6 + 5 )
    {
      v12 = (struct _UMPDHEAP *)v6[7];
      if ( !v12 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v9);
        *((_QWORD *)this + 7) = UMPDHeap;
        v6[7] = UMPDHeap;
        goto LABEL_15;
      }
      *((_DWORD *)v12 + 6) = 0;
    }
    else
    {
      v12 = UMPDOBJ::CreateUMPDHeap(v9);
    }
    *((_QWORD *)this + 7) = v12;
LABEL_15:
    if ( *((_QWORD *)this + 7) )
      goto LABEL_16;
    return 0LL;
  }
  v10 = v6[8];
  if ( v10 )
  {
    *((_QWORD *)this + 49) = v10;
    UMPDOBJ::ResetHeap(this);
    goto LABEL_8;
  }
  PROXYPORT::PROXYPORT((PROXYPORT *)&v16, v8);
  v11 = v16;
  if ( !v16 )
    return 0LL;
  *((_QWORD *)this + 49) = v16;
  v6[8] = v11;
LABEL_8:
  *((_QWORD *)this + 3) = v6;
LABEL_16:
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v15);
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v15, this, 1, 1, 17) )
  {
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    *((_DWORD *)this + 102) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 109) )
      UMPDOBJ::vPushToCurrentThread(this);
    v5 = 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v15);
  return v5;
}
