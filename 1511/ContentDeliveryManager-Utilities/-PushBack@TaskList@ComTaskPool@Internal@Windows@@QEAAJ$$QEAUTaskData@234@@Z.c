/*
 * XREFs of ?PushBack@TaskList@ComTaskPool@Internal@Windows@@QEAAJ$$QEAUTaskData@234@@Z @ 0x180008920
 * Callers:
 *     ?s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@PEAVTaskList@123@PEAPEAVCThread@123@@Z @ 0x180009848 (-s_QueuePoolTaskUnderLock@ComTaskPool@Internal@Windows@@CAJPEAXW4TaskApartment@23@W4TaskOptions@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::TaskList::PushBack(_QWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r9
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rcx

  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = a2 + 4;
    *v4 = *a2;
    v4[1] = a2[1];
    v4[2] = a2[2];
    *((_QWORD *)v4 + 2) = 0LL;
    if ( v4 + 4 != a2 + 4 )
    {
      *((_QWORD *)v4 + 2) = *v6;
      *v6 = 0LL;
    }
    *((_QWORD *)v4 + 3) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  result = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v8 = a1[1];
    if ( v8 )
      *(_QWORD *)(v8 + 24) = v5;
    else
      *a1 = v5;
    a1[1] = v5;
  }
  return result;
}
