/*
 * XREFs of ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C0070028
 * Callers:
 *     DxgkReleaseKeyedMutex2 @ 0x1C006F680 (DxgkReleaseKeyedMutex2.c)
 *     DxgkReleaseKeyedMutex @ 0x1C0177410 (DxgkReleaseKeyedMutex.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017DDAC (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0001104 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0001190 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::ReleaseSync(
        DXGKEYEDMUTEX *this,
        int a2,
        __int64 a3,
        struct _LIST_ENTRY *a4,
        char *Src,
        unsigned int Size)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rcx
  char v18; // di
  _QWORD *i; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  struct _KEVENT *v23; // rcx
  _BYTE v24[24]; // [rsp+20h] [rbp-18h] BYREF

  v9 = (__int64)this;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v24, this, a3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  if ( *(_DWORD *)(v9 + 36) == 3 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v21[3] = v9;
    v9 = 128LL;
LABEL_17:
    v21[4] = v9;
LABEL_22:
    WdLogEvent5_WdWarning(v21);
    goto LABEL_23;
  }
  if ( !DXGKEYEDMUTEX::IsOwner((DXGKEYEDMUTEX *)v9, a2) )
  {
    v22 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v22 + 24) = v9;
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
LABEL_23:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
    return (unsigned int)v9;
  }
  if ( !Src )
  {
    if ( !Size )
      goto LABEL_10;
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, 0LL, v15, v16);
    LODWORD(v9) = -1073741811;
    v21[3] = -1073741811LL;
    goto LABEL_22;
  }
  if ( !Size )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, Src, v15, v16);
    v21[3] = v9;
    v9 = -1073741811LL;
    goto LABEL_17;
  }
  if ( Size != *(_DWORD *)(v9 + 144) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, Src, v15, v16);
    v21[3] = v9;
    v21[4] = Size;
    v21[5] = *(unsigned int *)(v9 + 144);
    LODWORD(v9) = -1073741811;
    v21[6] = -1073741811LL;
    goto LABEL_22;
  }
  v17 = *(void **)(v9 + 136);
  if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v17, Src, Size);
LABEL_10:
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0LL;
  v18 = 0;
  for ( i = *(_QWORD **)(v9 + 80); i != (_QWORD *)(v9 + 80); i = (_QWORD *)*i )
  {
    v23 = (struct _KEVENT *)(i - 8);
    if ( *(i - 8) == a3 )
    {
      v18 = 1;
      *(_DWORD *)(v9 + 36) = 2;
      *(_QWORD *)(v9 + 72) = v23;
      v23[2].Header.LockNV = 0;
      v23[2].Header.WaitListHead.Flink = a4;
      KeSetEvent(v23 + 1, 0, 0);
      break;
    }
  }
  if ( !v18 )
  {
    *(_DWORD *)(v9 + 36) = 1;
    *(_QWORD *)(v9 + 56) = a3;
    *(_QWORD *)(v9 + 64) = a4;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  return 0LL;
}
