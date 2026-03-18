/*
 * XREFs of ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0284E18
 * Callers:
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258250 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0258288 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C025829C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C02843B4 (-CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1C02844B0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x1C02849C0 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C028505C (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C02854A8 (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ??0PROXYPORT@@QEAA@_K@Z @ 0x1C02A2F38 (--0PROXYPORT@@QEAA@_K@Z.c)
 */

__int64 __fastcall UMPDOBJ::bInit(UMPDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned int v9; // esi
  _QWORD *v10; // rbp
  int v11; // eax
  unsigned __int64 v12; // rdx
  UMPDOBJ *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  struct _UMPDHEAP *v16; // rax
  struct _UMPDHEAP *UMPDHeap; // rax
  _BYTE v19[48]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  memset(this, 0, 0x1B8uLL);
  *((_DWORD *)this + 9) = 1886221639;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3, v2);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
  v9 = 0;
  v10 = (_QWORD *)ThreadWin32Thread;
  if ( !CurrentProcessWin32Process || !ThreadWin32Thread )
    return 0LL;
  v11 = bSandboxedCurrentProcess();
  *((_DWORD *)this + 109) = v11;
  if ( !v11 )
  {
    if ( (_QWORD *)v10[5] == v10 + 5 )
    {
      v16 = (struct _UMPDHEAP *)v10[7];
      if ( !v16 )
      {
        UMPDHeap = UMPDOBJ::CreateUMPDHeap(v13);
        *((_QWORD *)this + 7) = UMPDHeap;
        v10[7] = UMPDHeap;
        goto LABEL_15;
      }
      *((_DWORD *)v16 + 6) = 0;
    }
    else
    {
      v16 = UMPDOBJ::CreateUMPDHeap(v13);
    }
    *((_QWORD *)this + 7) = v16;
LABEL_15:
    if ( *((_QWORD *)this + 7) )
      goto LABEL_16;
    return 0LL;
  }
  v14 = v10[8];
  if ( v14 )
  {
    *((_QWORD *)this + 49) = v14;
    UMPDOBJ::ResetHeap(this);
    goto LABEL_8;
  }
  PROXYPORT::PROXYPORT((PROXYPORT *)&v20, v12);
  v15 = v20;
  if ( !v20 )
    return 0LL;
  *((_QWORD *)this + 49) = v20;
  v10[8] = v15;
LABEL_8:
  *((_QWORD *)this + 3) = v10;
LABEL_16:
  HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
  if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v19, this, 1, 1, 17) )
  {
    *((_QWORD *)this + 50) = KeGetCurrentThread();
    *((_DWORD *)this + 102) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    if ( !*((_DWORD *)this + 109) )
      UMPDOBJ::vPushToCurrentThread(this);
    v9 = 1;
  }
  else
  {
    UMPDOBJ::FreeNonCachedUserMem(this);
  }
  HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
  return v9;
}
