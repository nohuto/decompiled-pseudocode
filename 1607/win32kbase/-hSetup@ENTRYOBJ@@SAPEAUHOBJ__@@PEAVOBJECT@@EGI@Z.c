/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0036B60
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00C0400 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1C002AA90 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002ADA0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  GdiHandleEntryDirectory **DeferredContext; // rbx
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdi
  int v13; // ebx
  unsigned int v14; // ebx
  GdiHandleManager *v15; // rcx
  unsigned __int64 v16; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v19[18]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int16 v20; // [rsp+58h] [rbp+10h]

  DeferredContext = (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext;
  v9 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext, a4);
  Entry = GdiHandleEntryDirectory::GetEntry(DeferredContext[2], v9, 1);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (a3 & 0x10) != 0 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(ThreadWin32Thread + 72);
  *((_QWORD *)Entry + 2) = 0LL;
  v13 = *((_DWORD *)Entry + 2);
  *((_BYTE *)Entry + 14) = a2;
  *((_BYTE *)Entry + 15) = 0;
  if ( (a3 & 8) != 0 )
  {
    v14 = v13 & 1;
  }
  else if ( v12 )
  {
    v14 = *(_DWORD *)(v12 + 8) ^ (*(_DWORD *)(v12 + 8) ^ v13) & 1;
  }
  else
  {
    v14 = v13 & 1 | (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( v12 )
      CurrentThread = *(struct _KTHREAD **)v12;
    else
      CurrentThread = KeGetCurrentThread();
    *((_QWORD *)a1 + 2) = CurrentThread;
  }
  *((_WORD *)a1 + 6) = a3 & 1;
  LOBYTE(v20) = a2;
  *((_DWORD *)a1 + 2) = (a3 >> 1) & 1;
  *((_QWORD *)Entry + 2) = 0LL;
  *(_QWORD *)Entry = a4 | 0xFFFFFFFFFF000000uLL;
  *((_DWORD *)Entry + 2) = v14;
  HIBYTE(v20) = BYTE2(a4);
  v15 = (GdiHandleManager *)(v20 << 16);
  v16 = (unsigned __int16)a4 | (unsigned __int64)(int)v15;
  *((_WORD *)Entry + 6) = v20;
  *(_QWORD *)a1 = v16;
  _InterlockedOr(v19, 0);
  GdiHandleManager::SetEntryObject(v15, a4, a1);
  return (struct HOBJ__ *)v16;
}
