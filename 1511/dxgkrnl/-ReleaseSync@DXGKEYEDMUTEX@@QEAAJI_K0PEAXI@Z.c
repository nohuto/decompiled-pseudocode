/*
 * XREFs of ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI@Z @ 0x1C0151364
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1C0152560 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C0152750 (DxgkReleaseKeyedMutex2.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0159080 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0001040 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C00010BC (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
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
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  void *v20; // rcx
  char v21; // di
  _QWORD *i; // rax
  struct _KEVENT *v23; // rcx
  _BYTE v24[24]; // [rsp+20h] [rbp-18h] BYREF

  v9 = (__int64)this;
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v24, this, a3);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  if ( *(_DWORD *)(v9 + 36) == 3 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    v14[3] = v9;
    v9 = 128LL;
LABEL_3:
    v14[4] = v9;
LABEL_13:
    WdLogEvent5_WdWarning(v14);
    goto LABEL_14;
  }
  if ( !DXGKEYEDMUTEX::IsOwner((DXGKEYEDMUTEX *)v9, a2) )
  {
    v18 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v18 + 24) = v9;
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_14:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
    return (unsigned int)v9;
  }
  if ( Src )
  {
    if ( !Size )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, Src, v16, v17);
      v14[3] = v9;
      v9 = -1073741811LL;
      goto LABEL_3;
    }
    if ( Size != *(_DWORD *)(v9 + 168) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, Src, v16, v17);
      v14[3] = v9;
      v14[4] = Size;
      v14[5] = *(unsigned int *)(v9 + 168);
      LODWORD(v9) = -1073741811;
      v14[6] = -1073741811LL;
      goto LABEL_13;
    }
    v20 = *(void **)(v9 + 160);
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, Src, Size);
  }
  else if ( Size )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, 0LL, v16, v17);
    LODWORD(v9) = -1073741811;
    v14[3] = -1073741811LL;
    goto LABEL_13;
  }
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0LL;
  v21 = 0;
  for ( i = *(_QWORD **)(v9 + 80); i != (_QWORD *)(v9 + 80); i = (_QWORD *)*i )
  {
    v23 = (struct _KEVENT *)(i - 8);
    if ( *(i - 8) == a3 )
    {
      v21 = 1;
      *(_DWORD *)(v9 + 36) = 2;
      *(_QWORD *)(v9 + 72) = v23;
      v23[2].Header.LockNV = 0;
      v23[2].Header.WaitListHead.Flink = a4;
      KeSetEvent(v23 + 1, 0, 0);
      break;
    }
  }
  if ( !v21 )
  {
    *(_DWORD *)(v9 + 36) = 1;
    *(_QWORD *)(v9 + 56) = a3;
    *(_QWORD *)(v9 + 64) = a4;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  return 0LL;
}
