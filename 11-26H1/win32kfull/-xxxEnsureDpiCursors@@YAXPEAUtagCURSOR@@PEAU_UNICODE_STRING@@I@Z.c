/*
 * XREFs of ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x140152004
 * Callers:
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x140151A28 (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x140151F68 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 * Callees:
 *     xxxClientLoadImage @ 0x140008ACC (xxxClientLoadImage.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140029000 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14002ADCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x140152264 (-FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z.c)
 *     ?LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z @ 0x140152280 (-LinkDpiCursor@@YAXPEAUtagCURSOR@@0I@Z.c)
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z @ 0x1401522D0 (-EnsureDpiCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x14015285C (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     xxxClientCopyImage @ 0x1401529AC (xxxClientCopyImage.c)
 */

void __fastcall xxxEnsureDpiCursors(struct tagCURSOR *a1, struct _UNICODE_STRING *a2, int a3)
{
  struct tagCURSOR *v3; // rdi
  INT v4; // r15d
  int v5; // r12d
  __int64 v6; // rbp
  __int64 i; // r13
  __int64 v8; // rsi
  CPushLock *v9; // rbx
  unsigned int v10; // esi
  char v11; // r14
  INT v12; // ebx
  INT v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rax
  struct tagCURSOR *v16; // rbx
  unsigned int v17; // edx
  struct tagCURSOR *v18; // rcx
  __int64 v19; // rdx
  __int64 v22; // [rsp+98h] [rbp+20h]

  v3 = a1;
  if ( a2 || (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
        a1 = (struct tagCURSOR *)**((_QWORD **)a1 + 12);
      v4 = *((_DWORD *)a1 + 35);
      v5 = *((_DWORD *)a1 + 36);
    }
    else
    {
      v5 = 0;
      v4 = 0;
    }
    v6 = 0LL;
    for ( i = 5LL; i; --i )
    {
      v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36376);
      v9 = (CPushLock *)(v8 + 64);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v8 + 64, 0LL);
      if ( *(_DWORD *)(v8 + v6 + 24) )
      {
        v10 = *(_DWORD *)(v8 + v6 + 28);
        if ( v10 )
        {
          v11 = 1;
          goto LABEL_11;
        }
      }
      else
      {
        v10 = 0;
      }
      v11 = 0;
LABEL_11:
      CPushLock::ReleaseLock(v9);
      if ( v11 && !FindDPICursor(v3, v10) )
      {
        v22 = *((_QWORD *)v3 + 11);
        v12 = EngMulDiv(v4, (INT)a2, *((_DWORD *)v3 + 19));
        v13 = EngMulDiv(v5 / 2, v10, *((_DWORD *)v3 + 19));
        v15 = a2
            ? xxxClientLoadImage((char **)a2, v14, 2u, v12, v13, a3 | 0x40000u)
            : xxxClientCopyImage(*(_QWORD *)v3, 2, v12, v13, a3 | 0x40000u);
        v16 = (struct tagCURSOR *)v15;
        if ( v15 )
        {
          if ( *(_QWORD *)(v15 + 40)
            || *(_QWORD *)(v15 + 48) != v15
            || (*(_DWORD *)(v15 + 80) & 0x2000) != 0
            || FindDPICursor(v3, v10)
            || *((_QWORD *)v3 + 11) != v22
            || FindDPICursor(v18, v17) )
          {
            _DestroyCursor(v16, 0LL);
          }
          else
          {
            v19 = *((_QWORD *)v3 + 3);
            if ( v19 )
            {
              if ( (*((_DWORD *)v3 + 20) & 0x200) == 0 )
                HMChangeOwnerProcess(v16, *(_QWORD *)(v19 + 328));
            }
            LinkDpiCursor(v3, v16, v10);
            InputTraceLogging::Cursor::EnsureDpiCursor(v16);
            zzzFixupGlobalCursorWhenChanged(v3);
          }
        }
      }
      v6 += 8LL;
    }
  }
}
